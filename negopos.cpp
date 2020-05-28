#include <iostream>
#include <cstdlib>

using namespace std;

int main (){

    float a;

    cout<<"por favor ingrese un mumero: "<<endl;
    cin>>a;

    if (a > 0)
    {
        cout<<"el valor es positivo"<<endl;
    }
    else if (a == 0)
    {
        cout<<"el valor es cero"<<endl;
    }
    else 
    {
        cout<<"el valor es negativo"<<endl;
    }
    system ("pause");

    return 0;
}
