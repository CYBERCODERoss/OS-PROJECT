# OS-PROJECT

## steps

```
sudo apt install build-essential git

sudo apt install cmake

sudo apt install libasound2-dev libx11-dev libxrandr-dev libxi-dev libgl1-mesa-dev libglu1-mesa-dev libxcursor-dev libxinerama-dev libwayland-dev libxkbcommon-dev

git clone https://github.com/raysan5/raylib.git

cd raylib/src/

make PLATFORM=PLATFORM_DESKTOP # To make the static version.

sudo make install # Static version.

g++ ludo.cpp -o ludo -lraylib && ./ludo
```
