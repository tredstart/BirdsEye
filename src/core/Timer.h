#ifndef TIMER_H
#define TIMER_H

#include <SDL2/SDL_stdinc.h>
class BE_Timer {
public:
  // init variables
  BE_Timer();

  // clock actions
  void start();
  void stop();
  void pause();
  void unpause();

  // get timer time
  Uint32 getTicks();

  // check the status of the timer
  bool hasStarted();
  bool hasPaused();
  bool isTicking();

private:
  // the clock time when timer started
  Uint32 startTicks;

  // the ticks stored when the timer was paused
  Uint32 pausedTicks;

  // the timer status
  bool paused;
  bool started;
};

#endif // !DEBUG
