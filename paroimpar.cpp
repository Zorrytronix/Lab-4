#include <iostream>
#include <cstdlib>

using namespace std;

int main (){

    int a;

    cout<<"Ingrese el numero que quiera saber si es par o impar: "<<endl;
    cin>>a;

    if (a % 2 == 0 )
    {
        cout<<"El numero es par"<<endl;
    }
    else
    {
        cout<<"El numero es impar"<<endl;
    }

    system("pause");

    return 0;
    
}