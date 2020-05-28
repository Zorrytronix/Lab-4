#include <iostream>
#include <cstdlib>

using namespace std;

int main (){

    int a, b;

    cout<<"por favor ingrese los dos numeros que quiere conocer si son divisibles: "<<endl;
    cin>>a;
    cin>>b;

    if (a/b == 0)
    {
    cout<<"el numero es divisible "<<endl;
    }
    else
    {
        cout<<"el numero no es divisible"<<endl;
    }

    system ("pause");

    return 0;


}