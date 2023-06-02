#include "../../inc/core/Timer.h"
#include <SDL2/SDL_stdinc.h>
#include <SDL2/SDL_timer.h>

BE_Timer::BE_Timer() {
  startTicks = 0;
  pausedTicks = 0;

  paused = false;
  started = false;
}

void BE_Timer::start() {
  started = true;

  paused = false;

  startTicks = SDL_GetTicks();
  pausedTicks = 0;
}

Uint32 BE_Timer::getTicks() {
  // the actual timer time
  Uint32 time = 0;

  // if the timer is running
  if (hasStarted()) {
    // if timer is in the pause state
    if (hasPaused()) {
      time = pausedTicks;
    } else {
      // return the current time minus the start time (I don't know why, it's
      // 21:28, I'm sleepy)
      time = SDL_GetTicks() - startTicks;
    }
  }

  return time;
}

bool BE_Timer::hasPaused() { return paused && started; }

bool BE_Timer::hasStarted() { return started; }
