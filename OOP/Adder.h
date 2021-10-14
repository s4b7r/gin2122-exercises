#ifndef _ADDER_H
#define _ADDER_H


#include "CalculatorModule.h"
#include <string>

class Adder : public CalculatorModule {
public:
    virtual const std::string get_description();
    virtual void work();

};

#endif // !_ADDER_H
