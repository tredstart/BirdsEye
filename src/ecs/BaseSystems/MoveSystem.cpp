//
// Created by redstart on 08.06.23.
//

#include "MoveSystem.h"


void MoveSystem::update(float dt) const {
  for (auto node : nodes) {
    node->transformComponent->position.x +=
            node->transformComponent->velocity.x * dt;
    node->transformComponent->position.y +=
            node->transformComponent->velocity.y * dt;
  }
}

void MoveSystem::addNode(MoveNode *node) { nodes.push_back(node); }
