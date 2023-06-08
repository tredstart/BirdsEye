#ifndef ENTITY_H
#define ENTITY_H

#include "IComponent.h"
#include <string>
#include <unordered_map>
class Entity {
public:
  Entity() = default;
  ~Entity() = default;
  IComponent *getComponent(const std::string& name);
  void addComponent(IComponent *component);
  bool removeComponent(IComponent *component);

private:
  std::unordered_map<std::string, IComponent *> components;
};
#endif
