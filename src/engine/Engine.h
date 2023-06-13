//
// Created by redstart on 6/13/23.
//

#ifndef BIRDSEYE_ENGINE_H
#define BIRDSEYE_ENGINE_H


#include "../ecs/Entity.h"
#include "../ecs/SystemManager.h"

class Engine {
public:
  Engine();
  ~Engine() = default;
  void update(float dt);
  void addEntity(Entity* entity);

private:
  SystemManager *systemManager;
  std::vector<Entity*> entities;
};


#endif// BIRDSEYE_ENGINE_H
