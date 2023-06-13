//
// Created by redstart on 6/13/23.
//

#include "SystemManager.h"

void SystemManager::addSystem(ISystem *system) { systems.push_back(system); }

void SystemManager::update(float dt) {
  for (ISystem *system : systems) { system->update(dt); }
}

void SystemManager::removeSystem(ISystem *system) { erase(systems, system); }