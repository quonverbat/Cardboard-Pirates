# Cardboard-Pirates
2-player ship battle game, made with [SDL](https://github.com/libsdl-org/SDL) and C++.

![image](https://github.com/user-attachments/assets/9427135b-6422-48ca-ab22-38e2036a3f70)

## Prerequisites
- [SDL](https://github.com/libsdl-org/SDL)
- [SDL_mixer](https://github.com/libsdl-org/SDL_mixer)
- [SDL_image](https://github.com/libsdl-org/SDL_image)
- [SDL_ttf](https://github.com/libsdl-org/SDL_ttf)
- A compiler.

# Installation
## Linux
### Arch:
```bash
sudo pacman -S sdl2 sdl2_mixer sdl2_image sdl2_ttf
```
#### Using g++:
```bash
g++ -std=c++23 src/*.cpp -o bin/Cardboard-Pirates -I include -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer -ldl && cd bin
./Cardboard-Pirates

```
---
### Ubuntu/Debian:
```bash
sudo apt-get install libsdl2-dev libsdl2-mixer-dev libsdl2-image-dev libsdl2-ttf-dev
```
#### Using g++:
```bash
g++ -std=c++23 src/*.cpp -o bin/Cardboard-Pirates -I include -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer -ldl && cd bin
./Cardboard-Pirates
```
---

### Gentoo:
```bash
sudo emerge media-libs/libsdl2 media-libs/libsdl2_mixer media-libs/libsdl2_image media-libs/libsdl2_ttf
```
#### Using g++:
```bash
g++ -std=c++23 src/*.cpp -o bin/Cardboard-Pirates -I include -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer -ldl && cd bin
./Cardboard-Pirates
```
## Windows
You can just get the `.exe` file in the `Releases` section or compile your own based on your environment.
