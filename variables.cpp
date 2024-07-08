
#include <iostream>
#include <iomanip>
using namespace std;

int mygbvar; // Global integer variable
int main()
{
    int mynum;
    float myfloat = 4.9;
    double mydouble = 3.9875876875765;
    char myLetter = 'P';
    string myText = "Hello";
    const int a = 10; // cannot be changed
    string name = myText + ' ' + myLetter;
    bool pol = true;
    cout << setprecision(20) << mydouble << endl;
    cout << name.find("ell") << endl << name.length() << endl << name.substr(2,3) << endl;
    cout<<mygbvar << endl;

    return 0;
}
