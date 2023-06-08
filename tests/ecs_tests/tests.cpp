//
// Created by redstart on 06.06.23.
//

#include <gtest/gtest.h>
#include <gmock/gmock-function-mocker.h>
#include "../../src/ecs/Entity.h"


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
