#include "file.h"

file::file(){
    row = new string();
}

file::~file(){
    delete row;
}

void file:: readFile(vector <string> &v, char *arg[], u8 i){
    string row;
    ifstream fin (arg[i]);
    while(!fin.eof()){
        getline(fin,row);
        v.push_back(row);
    }
    fin.close();
}
