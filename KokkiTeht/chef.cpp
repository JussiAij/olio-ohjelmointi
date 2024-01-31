#include "chef.h"

Chef::Chef() {
    std::cout << "Chef constructor called" << std::endl;
}

Chef::Chef(const std::string &chefName) : name(chefName) {
    std::cout << "Chef " << name << " constructor called" << std::endl;
}

void Chef::makeSalad() {
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

void Chef::makeSoup() {
    std::cout << "Chef " << name << " makes soup" << std::endl;
}

void Chef::setName(const std::string &newName) {
    name = newName;
}

std::string Chef::getName() const {
    return name;
}

Chef::~Chef() {
    std::cout << "Chef " << name << " destructor called" << std::endl;
}
