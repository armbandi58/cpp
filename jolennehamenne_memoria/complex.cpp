#include "complex.h"

complex::complex(double in_Re, double in_Im){
    Re = new double(in_Re);
    Im = new double(in_Im);
    cout<<"[+] Constructor called(complex)"<<endl;
}

complex::~complex(){
    delete Re;
    delete Im;
    cout<<"[+] Deconstructor called(complex)"<<endl;
}

void complex::setVar(double x, double y){
    *Re = x;
    *Im = y;
    cout<<"[+] Variables setted"<<endl;
}

double complex::getIm(){
    return *Im;
}

double complex::getRe(){
    return *Re;
}

double complex::absolute(){
    double y0 = pow(*Re,2), y1 = pow(*Im,2);
    double y2 = y0+y1;
    double y3 = sqrt(y2);
    return y3;
}
