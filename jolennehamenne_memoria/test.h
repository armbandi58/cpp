#ifndef TEST_H
#define TEST_H

#include "include.h"

class Test{
    public:
        Test(int x);
        ~Test(void);
        void setA(int y);
        int getA(void);
    private:
        int *A;
};

#endif // TEST_H
