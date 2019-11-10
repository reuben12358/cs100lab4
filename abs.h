#ifndef ____ABS_H___
#define ____ABS_H___

#include "UnaryOperator.h"
#include <cmath>

using namespace std;

class Abs : public unaryoperator {
    public:
        Abs(Base* a) : unaryoperator(a) {};

        double evaluate() {
            return fabs(number -> evaluate());
        };
};

#endif //____ABS_H___