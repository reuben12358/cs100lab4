#ifndef ____CEIL_H___
#define ____CEIL_H___

#include <cmath>
#include "UnaryOperator.h"

using namespace std;

class Ceil : public unaryoperator {
    public:
        Ceil(Base* a) : unaryoperator(a) {};

        double evaluate() {
            return ceil(number -> evaluate());
        };
};

#endif //____CEIL_H___
