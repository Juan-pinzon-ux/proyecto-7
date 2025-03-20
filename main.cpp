using namespace std;
#include <iostream>
#include <cmath>
int main()
{
int opcion; 
string satelite;
char distancia_al_sol;
char periodo_orbital;
char velocidad_orbital;
char inclinacion_orbital;
char excentricidad;
char periodo_orbital_satelite;
char inclinacion_orbital_satelite;

cout<<"ingrese una opcion teniendo en cuenta:"<<endl;
cout<<"opcion 1= registro de satelite:"<<endl;
cout<<"opcion 2= editar informacion de un planeta:"<<endl;
cout<<"opcion 3= eliminar un satelite natural:"<<endl;
cout<<"opcion 4= consultar los planetas con una distancia media al sol< que la distancia dada:\n";
cout<<"opcion 5= consultar los planetas con una inclinacion orbital < a la del planeta seleccionado:\n";

cin>>opcion;

switch(opcion)
{
case 1:   
    {
    cout<<"registre el satelite:";
    cin>>satelite;
    }
    {
    cout<<"excentricidad:";
    cin>>excentricidad;
    }
    {
    cout<<"periodo orbital:";    
    cin>>periodo_orbital_satelite;    
    }
    {
    cout<<"inclinacion orbital:";    
    cin>>inclinacion_orbital_satelite;    
    }
    break;

case 2:
    {
    cout<<"registre la informacion del planeta\n";
    {
    cout<<"distancia media al sol(UA):\n";
    cin>>distancia_al_sol;
    }
    {
    cout<<"periodo orbital:\n";
    cin>>periodo_orbital;   
    }
    {
    cout<<"velocidad orbital:\n";
    cin>>velocidad_orbital;
    }
    {
    cout<<"inclinacion orbital:\n";
    cin>>inclinacion_orbital;
    }
        
    }
break;

case 3:
{
cout<<"seleccione un satelite natural para eliminar:";
}

case 4:
{
cout<<"Consultar los planetas con una distancia media al sol menor que la distancia dada";    
}
case 5:
{
cout<<"Consultar los planetas con una inclinación orbital menor a la del planeta seleccionado";    
}




}

   
}