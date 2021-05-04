#ifndef COMPLEX_H
#define COMPLEX_H

#include "include.h"

class complex{
    public:
        complex(double in_Re, double in_Im);
        ~complex();
        double getRe(void);
        double getIm(void);
        void setVar(double x, double y);
        double absolute(void);
    private:
        double *Re;
        double *Im;
};

#endif // COMPLEX_H
