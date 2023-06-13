//
// Created by redstart on 6/13/23.
//

#include "Engine.h"
Engine::Engine() { systemManager = new SystemManager(); }
void Engine::update(float dt) { systemManager->update(dt); }
void Engine::addEntity(Entity *entity) { entities.push_back(entity); }
