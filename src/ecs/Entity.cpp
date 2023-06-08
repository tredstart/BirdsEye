
#include "Entity.h"
#include "IComponent.h"
#include <stdexcept>
#include <string>
#include <unordered_map>

IComponent *Entity::getComponent(const std::string& name) {
  if (components.empty()) {
    throw std::length_error("Components map is empty. Can't read values");
  } else {
    try {
      return components.at(name);
    } catch (std::out_of_range) {
      return nullptr;
    }
  }
}

void Entity::addComponent(IComponent *component) {
  components[component->getType()] = component;
}

bool Entity::removeComponent(IComponent *component) {
  return components.erase(component->getType());
}
