# HamoniKR Stacer

[Stacer] (https://github.com/oguzhaninan/Stacer/) 프로젝트를 하모니카 에서 사용할 수 있도록 수정해서 배포한 프로그램

* 지원 OS : HamoniKR-Server (>= 1.0)

## 수정사항

 * 한글 사용자를 위한 폰트 및 UI 변경
 * 한글 언어 추가
 * 하모니카OS 에서 테스트 완료된 기능만 포함
 * 빌드 환경 QT 5.9 지원하게 변경 (하모니카 3.0 기본 설치 환경)

## Screenshots

<p align="center">
    <img src="screenshots/stacer.png" width="700">
</p>

### 소스코드 수정 후 패키지 버전 업그레이드 방법

1. debian/changelog 파일에서 버전과 수정 내용 입력
2. stacer/main.cpp 파일에서 프로그램 버전 수정
3. release.sh 파일에서 데비안 패키지 버전 수정
4. ./release.sh deb 명령으로 빌드 및 deb 패키지 생성
5. Release 폴더 안에 생성된 deb 파일과 소스 패키지를 이용하여 설치

### 이전 버전에서 패키지 업그레이드를 하는 경우에는 재설치 필요
패키지 배포 방식이 변경되었으므로 기존에 사용 중이던 stacer 패키지가 있는 경우에는 
아래처럼 패키지를 제거하고 재 설치해야 함.
```
sudo apt purge stacer -y
sudo apt install stacer -y
```

# Install 

### 프로그램에 필요한 필수 패키지
- curl, systemd

### HamoniKR 3.0
```
sudo apt-get install stacer -y
```

### ubuntu 18.04
```
wget -O - http://apt.hamonikr.org/hamonikr.key| sudo apt-key add -
sudo bash -c "echo 'deb https://apt.hamonikr.org sun main upstream' > /etc/apt/sources.list.d/hamonikr.list"
sudo apt update
sudo apt-get install stacer -y
```
### Debian x64

1. Download `stacer_1.1.0_amd64.deb` from the [releases page](https://github.com/chaeya/Stacer/releases/tag/1.1.0hamonikr1).
2. Run `sudo dpkg -i stacer*.deb` on the downloaded package.
3. Launch Stacer using the installed `stacer` command.

### Build from source with CMake (HamoniKR 3.0, HamoniKR 4.0)

1. sudo apt install build-essential cmake dh-make qt5-default libqt5charts5-dev libqt5svg5-dev qttools5-dev ccache
2. mkdir build && cd build
3. cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=/usr/lib/x86_64-linux-gnu/qt5/bin ..
4. make -j $(nproc)
5. output/bin/stacer

### Build from APT source Repository (HamoniKR 3.0 이상)
1. apt source stacer
2. cd stacer-1.1.0hamonikr1
3. edit sometings...
4. sudo apt-get build-dep stacer
5. dpkg-buildpackage -rfakeroot -uc -b

