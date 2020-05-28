#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main(){
    int longitud;
    char palabra[30];

    cout<<"por favor ingrese una palabra: "<<endl;
    cin>>palabra;
    longitud = strlen(palabra);
    if (palabra[0]==palabra[longitud-1])
    {
        cout<<"La palabra inicia y termina con la misma letra"<<endl;
      
    }
    else
    {
         cout<<"La palabra no inicia ni termina con la misma letra"<<endl;
    }
   

     system ("pause");
        return 0;
}

