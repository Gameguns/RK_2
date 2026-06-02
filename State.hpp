#ifndef STATE_HPP
#define STATE_HPP

#include <string>

class State {
    std::string data;
public:
    State() : data("") {}
    State(const std::string& s) : data(s) {}
    std::string getData() const { return data; }
    void setData(const std::string& s) { data = s; }
};

#endif 
