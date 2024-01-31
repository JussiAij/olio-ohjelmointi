#ifndef CHEF_H
#define CHEF_H

#include <iostream>
#include <string>

class Chef {
public:
    Chef();
    Chef(const std::string &chefName); // Constructor with name parameter
    virtual ~Chef(); // Make the destructor virtual
    void makeSalad();
    void makeSoup();
    void setName(const std::string &newName);
    virtual std::string getName() const;

protected:
    std::string name;
};

#endif // CHEF_H
