//
// Created by redstart on 08.06.23.
//
#include "TransformComponent.h"

TransformComponent::TransformComponent(float x, float y, float rotationDeg,
                                       float scale) {
  this->position = {.x = x, .y = y};
  this->rotationDeg = rotationDeg;
  this->scale = scale;
}
