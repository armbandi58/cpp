#include "test.h"

Test::Test(int x){
    A = new int(x);
    cout<<"[+] Constructor called(Test)"<<endl;
}

Test::~Test(){
    delete A;
    cout<<"[+] Deconstructor called(Test)"<<endl;
}

void Test:: setA(int y){
    *A = y;
}

int Test:: getA(){
   return *A;
}
