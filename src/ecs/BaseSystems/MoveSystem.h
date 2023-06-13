//
// Created by redstart on 08.06.23.
//

#ifndef BIRDSEYE_MOVESYSTEM_H
#define BIRDSEYE_MOVESYSTEM_H


#include "../BaseComponents/TransformComponent.h"
#include "../Entity.h"
#include "../ISystem.h"
#include <vector>

struct MoveNode {
  TransformComponent *transformComponent;
};

class MoveSystem : public ISystem {
private:
  std::vector<MoveNode *> nodes;

public:
  void addNode(MoveNode *node);
  void update(float dt) const override;
};


#endif// BIRDSEYE_MOVESYSTEM_H
