### Build from git source (Ubuntu 22.04)

```
sudo add-apt-repository universe
sudo apt install -y qtcreator qtbase5-dev qt5-qmake cmake libqt5charts5-dev libqt5svg5-dev qttools5-dev ccache libfuse2

cd PROJECT_ROOT
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=/usr/lib/x86_64-linux-gnu/qt5/bin ..
make -j $(nproc)
output/stacer
```

### Create debian package from git source  (Ubuntu 22.04)

```
bash ./release.sh

cd Release/stacer-*
dh_make --createorig -i -c gpl3
debuild --no-lintian -us -uc

```

### Build from source with CMake (HamoniKR 3.0, HamoniKR 4.0)

```
sudo apt install build-essential cmake dh-make qt5-default libqt5charts5-dev libqt5svg5-dev qttools5-dev ccache
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=/usr/lib/x86_64-linux-gnu/qt5/bin ..
make -j $(nproc)
output/stacer
```

### Build from APT source Repository (HamoniKR 3.0)

```
apt source stacer
cd stacer-1.1.0hamonikr1

edit sometings...

sudo apt-get build-dep stacer
dpkg-buildpackage -rfakeroot -uc -b
```