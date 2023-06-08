//
// Created by redstart on 08.06.23.
//

#ifndef TRANSFORMCOMPONENT_H
#define TRANSFORMCOMPONENT_H

#include "../IComponent.h"
#include "../../utils/Point.h"

class TransformComponent : public IComponent {
public:
    Point<float> position{};
    float rotationDeg;
    float scale;
    Point<float> velocity{ .x = 0, .y = 0 };

    TransformComponent(float x, float y, float rotationDeg, float scale);
    ~TransformComponent() = default;

    std::string getType() const override { return type; }
private:
    const std::string type = "Transform Component";
};


#endif // TRANSFORMCOMPONENT_H
