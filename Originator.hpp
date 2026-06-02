#ifndef ORIGINATOR_HPP
#define ORIGINATOR_HPP
#include "State.hpp"
#include "Memento.hpp"

class Originator {
    State state;
public:
    Originator() = default;  // явно разрешаем конструктор по умолчанию
    void setState(const State& s) { state = s; }
    State getState() const { return state; }
    Memento* createMemento() const { return new Memento(state); }
    void restoreFromMemento(const Memento* m) { if (m) state = m->getState(); }
};

#endif#ifndef ORIGINATOR_HPP
#define ORIGINATOR_HPP
#include "State.hpp"
#include "Memento.hpp"
class Originator {
    State state;
public:
    void setState(const State& s) { state = s; }
    State getState() const { return state; }
    Memento* createMemento() const { return new Memento(state); }
    void restoreFromMemento(const Memento* m) { if (m) state = m->getState(); }
};
#endif
