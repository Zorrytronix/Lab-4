#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

int main (){
    int longitud, w;
    char palabra[30];

   
        cout<<"Por favor ingrese la palabra deseada: "<<endl;
        cin>>palabra;

        longitud = strlen(palabra);

        if (longitud > 10)
        {
            cout<<"La palabra "<<palabra<<" es mayor a 10 caracteres y tiene una longitud de: "<<longitud <<" caracteres"<<endl;
            w++;
        }
        else
        {
             cout<<"La palabra "<<palabra <<" es menor a 10 caracteres y tiene una longitud de: "<<longitud <<" caracteres"<<endl;
             w++;
        }
        if (longitud % 2 == 0 )
    {
        cout<<"y esta es par"<<endl;
    }
    else
    {
        cout<<"y esta impar"<<endl;
    }

    cout<<"\n";

    system ("pause");

    return 0;

}