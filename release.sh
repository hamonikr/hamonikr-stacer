#!/bin/bash
sudo apt install -y qtcreator qtbase5-dev qt5-qmake cmake libqt5charts5-dev libqt5svg5-dev qttools5-dev ccache libfuse2

VERSION=1.1.0
RELEASE=Release
DIR=stacer-$VERSION

rm -rf $RELEASE && mkdir $RELEASE
rm -rf build && mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=debug -DCMAKE_CXX_COMPILER=g++ -DCMAKE_PREFIX_PATH=$QTDIR/bin ..
make -j `nproc`
cd ..

mkdir $RELEASE/$DIR/stacer -p
cp -r icons applications debian $RELEASE/$DIR
cp -r build/output/* $RELEASE/$DIR/stacer

# translations
lupdate stacer/stacer.pro -no-obsolete
lrelease stacer/stacer.pro
mkdir $RELEASE/$DIR/stacer/translations
mv translations/*.qm $RELEASE/$DIR/stacer/translations

# linuxdeployqt
# if [ ! -f "lqt" ] ; then
#     wget -cO lqt "https://github.com/probonopd/linuxdeployqt/releases/download/continuous/linuxdeployqt-continuous-x86_64.AppImage"
# fi

# chmod +x lqt
# unset QTDIR; unset QT_PLUGIN_PATH; unset LD_LIBRARY_PATH
# ./lqt $RELEASE/$DIR/stacer/stacer -bundle-non-qt-libs -no-translations  -unsupported-allow-new-glibc
# rm lqt 

# if [ $1 = "deb" ]; then
# cd $RELEASE/$DIR
# dh_make --createorig -i -c mit
# debuild --no-lintian -us -uc 
# fi
if [ "$1" = "deb" ] 
then
    cd $RELEASE/$DIR
    dh_make --createorig -i -c gpl3
    dpkg-buildpackage -k9EFBD28CA3E3ACE510C591F09FA298A1E42665B8
    # debuild --no-lintian -us -uc
fi
