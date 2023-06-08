#include "main.h"

int main(int args, char *argv[]) {
  // game main loop

  bool quit = false;

  // Event handler
  SDL_Event event;

  BE_Timer fpsTimer;
  BE_Timer capTimer;

  uint countedFrames = 0;
  fpsTimer.start();

  // This is a frame :) (one loop count = one frame)
    for (int i = 0; i < 100; ++i) {
        capTimer.start();
        // TODO(not that important, but nice to do earlier): move input handling
        // somewhere
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }
        // calculate and correct fps
        float averageFPS = countedFrames / (fpsTimer.getTicks() / 1000.0f);
        // TODO:what the heck is that magick number???
        if (averageFPS > 2 * pow(10, 6)) {
            averageFPS = 0;
        }

        std::cout << averageFPS << std::endl;
        ++countedFrames;
        // TODO: create renderer

        // if frame finished early
        uint frameTicks = capTimer.getTicks();
        if (frameTicks < SCREEN_TICKS_PER_FRAME) {
            // wait remaining time
            SDL_Delay(SCREEN_TICKS_PER_FRAME - frameTicks);
        }

    }

  return 0;
}
