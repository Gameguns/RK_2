#include "Originator.hpp"
#include "State.hpp"
#include "Memento.hpp"
#include <iostream>
#include <cassert>

int main() {
    State original("First state");
    Originator originator;
    originator.setState(original);

    Memento* saved = originator.createMemento();

    State newState("Second state");
    originator.setState(newState);

    originator.restoreFromMemento(saved);

    assert(originator.getState().getData() == original.getData());
    std::cout << "Test passed: state restored correctly.\n";

    delete saved;
    return 0;
}
