#ifndef MEMENTO_HPP
#define MEMENTO_HPP
#include "State.hpp"
class Memento {
    State state;
public:
    Memento(const State& s) : state(s) {}
    State getState() const { return state; }
};
#endif
