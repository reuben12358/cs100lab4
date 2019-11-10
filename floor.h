#ifndef ____FLOOR_H___
#define ____FLOOR_H___

#include "UnaryOperator.h"
#include <cmath>

using namespace std;

class Floor : public unaryoperator {
    public:
        Floor(Base* a) : unaryoperator(a) {};

        double evaluate() {
            return floor(number -> evaluate());
        };
};

#endif //____FLOOR_H___