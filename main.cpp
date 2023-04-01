#include <SDL2/SDL.h>
#include <GL/glew.h>
#include <iostream>

void init() {
  atexit(SDL_Quit);

  if (!SDL_Init(SDL_INIT_VIDEO)) {
    std::cerr << "SDL_Init Error: " << SDL_GetError() << std::endl;
    exit(EXIT_FAILURE);
  }
}

int main() {
  init();

  return EXIT_SUCCESS;
}
