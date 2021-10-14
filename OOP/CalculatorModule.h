#ifndef _CALCULATORMODULE_H
#define _CALCULATORMODULE_H


#include <string>

class CalculatorModule {
public:
    virtual const std::string get_description() = 0;
    virtual void work() = 0;
};


#endif // !_CALCULATORMODULE_H
