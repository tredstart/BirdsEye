//
// Created by redstart on 06.06.23.
//

#include <gtest/gtest.h>
#include <gmock/gmock-function-mocker.h>
#include "../../src/ecs/Entity.h"
#include "ISystem.h"
#include "BaseComponents/TransformComponent.h"
#include "BaseSystems/MoveSystem.h"

class MockComponent : public IComponent {
public:
    MOCK_CONST_METHOD0(getType, std::string());
};

TEST(ECS_BASIC_TESTS, operations_on_components_are_correct) {
    Entity entity;
    MockComponent component;

    // test if the number of call for the name of  is correct
    EXPECT_CALL(component, getType()).Times(6);

    entity.addComponent(&component);

    MockComponent *actualComponent;
    actualComponent = dynamic_cast<MockComponent *>(entity.getComponent(component.getType()));
    ASSERT_EQ(actualComponent->getType(), component.getType());

    entity.removeComponent(&component);
    EXPECT_ANY_THROW(entity.getComponent(component.getType()));
}


TEST(ECS_BASIC_TESTS, move_entity_is_successfull) {
    MoveNode node{};

    Point<float> expectedPosition = { 10, 10};

    TransformComponent transform(expectedPosition.x, expectedPosition.y, 0, 1);
    node.transformComponent = &transform;

    MoveSystem moveSystem;
    moveSystem.addNode(&node);
    moveSystem.update(1);

    ASSERT_EQ(expectedPosition.x, transform.position.x);
    ASSERT_EQ(expectedPosition.y, transform.position.y);

    Point<float> velocity = {10, 10};

    expectedPosition.x += velocity.x;
    expectedPosition.y += velocity.y;

    transform.velocity = velocity;
    moveSystem.update(1);

    ASSERT_EQ(expectedPosition.x, transform.position.x);
    ASSERT_EQ(expectedPosition.y, transform.position.y);

}
