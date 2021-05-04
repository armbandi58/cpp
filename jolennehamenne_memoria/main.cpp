#include "include.h"
#include "test.h"
#include "complex.h"
#include "file.h"

//void readFile(vector <string> &v, char *arg[], u8 i);

int main(int argc, char *argv[])
{
    int inp;
    string qwe = "stringecske";
    vector <string> v1, v2;

    Test *ujobj = new Test(23);
    complex *complex0 = new complex(56.7, 23.4);
    file *F0 = new file();

    if(argc > 1){
        cout<<"===="<<endl<<"Bemeneti parameterek:"<<endl;
        for(u8 i = 1; i < argc; i++){
            cout<<"\t"<<argv[i]<<endl;
        }

        F0 -> readFile(v1,argv,1);
        cout<<"  Datas from >"<<argv[1]<<"<"<<endl;
        for(u8 i = 0; i < v1.size(); i++){
            cout<<"\t\t"<<v1[i]<<endl;
        }

        F0 -> readFile(v2,argv,2);
        cout<<"  Datas from >"<<argv[2]<<"<"<<endl;
        for(u8 i = 0; i < v2.size(); i++){
            cout<<"\t\t"<<v2[i]<<endl;
        }

        cout<<"===="<<endl<<endl;
    }else{
        cout<<"===="<<endl;
        cout<<"Nem volt bemeneti parameter"<<endl;
        cout<<"===="<<endl<<endl;
    }

    //cout<<endl;

    cout << "This is a simple dinamyc memorie handling program." << endl;
    cout<<"Az uj objektum elemei: "<<ujobj->getA()<<endl;
    cout<<"Irj be valamit: ";
    cin>>inp;
    cout<<"Beirt ertek: "<<inp<<endl;
    ujobj -> setA(45);
    cout<<"Az uj ertek: "<<ujobj->getA()<<endl;
    cout<<qwe<<endl;

    cout<<endl<<"\t </Complex site/>"<<endl;
    cout<<"Variables in objectum: "<<complex0 -> getRe()<<", "<< complex0 -> getIm()<<endl;
    complex0 -> setVar(34.5, 67.2);
    cout<<"New values: "<<complex0 -> getRe()<<", "<< complex0 -> getIm()<<endl;

    cout<<"Abs value: "<<complex0 -> absolute()<<endl;
    delete ujobj;
    delete complex0;
    delete F0;

    return 0;
}
/*
void readFile(vector <string> &v, char *arg[], u8 i){
    string row;
    ifstream fin (arg[i]);
    while(!fin.eof()){
        getline(fin,row);
        v.push_back(row);
    }
    fin.close();
}
*/
