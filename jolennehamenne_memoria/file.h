#ifndef FILE_H
#define FILE_H

#include "include.h"

class file{
    public:
        file();
        ~file();
        void readFile(vector <string> &v, char *arg[], u8 i);
    private:
        string *row;
};

#endif // FILE_H
