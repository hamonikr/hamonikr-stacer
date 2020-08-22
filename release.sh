#!/bin/bash
VERSION=1.1.0hamonikr1
RELEASE=Release
DIR=stacer-$VERSION
QTDIR="/usr/lib/x86_64-linux-gnu/qt5"

rm -rf $RELEASE && mkdir $RELEASE
rm -rf build && mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=debug -DCMAKE_CXX_COMPILER=g++ -DCMAKE_PREFIX_PATH=$QTDIR/bin ..
# echo "cmake -DCMAKE_BUILD_TYPE=debug -DCMAKE_CXX_COMPILER=g++ -DCMAKE_PREFIX_PATH=$QTDIR/bin .."
make -j `nproc`
# echo "Created Execute File : ${RELEASE}/build/output/bin/stacer "
cd ..


# [ ! -d "$RELEASE/$DIR/stacer -p" ] && mkdir $RELEASE/$DIR/stacer -p
mkdir $RELEASE/$DIR/stacer -p
cp -r icons applications debian $RELEASE/$DIR
cp -r build/output/* $RELEASE/$DIR/stacer

# translations
lupdate stacer/stacer.pro -no-obsolete
lrelease stacer/stacer.pro
mkdir $RELEASE/$DIR/stacer/translations
mv translations/*.qm $RELEASE/$DIR/stacer/translations

# linuxdeployqt
wget -cO lqt "https://github.com/probonopd/linuxdeployqt/releases/download/continuous/linuxdeployqt-continuous-x86_64.AppImage"
chmod +x lqt

unset QTDIR; unset QT_PLUGIN_PATH; unset LD_LIBRARY_PATH
./lqt $RELEASE/$DIR/stacer/stacer -bundle-non-qt-libs -no-translations -unsupported-allow-new-glibc
rm lqt 

if [ "$1" = "deb" ] 
then
    cd $RELEASE/$DIR
    dh_make --createorig -i -c gpl3
    debuild --no-lintian -us -uc
else
    exit 0
fi
