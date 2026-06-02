#include "Originator.hpp"
#include "State.hpp"
#include "Memento.hpp"
#include <gtest/gtest.h>

TEST(MementoTest, RestoreState) {
    State original("First state");
    Originator originator;
    originator.setState(original);

    Memento* saved = originator.createMemento();

    State newState("Second state");
    originator.setState(newState);

    originator.restoreFromMemento(saved);

    EXPECT_EQ(originator.getState().getData(), original.getData());

    delete saved;
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
