//
// Created by redstart on 6/13/23.
//

#ifndef BIRDSEYE_SYSTEMMANAGER_H
#define BIRDSEYE_SYSTEMMANAGER_H


#include "ISystem.h"
#include <vector>

class SystemManager {
public:
  void addSystem(ISystem *system);
  void update(float dt);
  void removeSystem(ISystem *system);

private:
  std::vector<ISystem *> systems;
};


#endif// BIRDSEYE_SYSTEMMANAGER_H
