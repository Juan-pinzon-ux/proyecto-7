using namespace std;
#include <iostream>
#include <cmath>
int main()
{
	int opcion;
	string satelite;
	float distancia_al_sol;
	float periodo_orbital;
	float velocidad_orbital;
	float inclinacion_orbital;
	float excentricidad;
	float periodo_orbital_satelite;
	float inclinacion_orbital_satelite;
	string nombre_planeta;
	
do{
    cout<<"ingrese una opcion teniendo en cuenta:"<<endl;
	cout<<"opcion 1= registro de satelite:"<<endl;
	cout<<"opcion 2= editar informacion de un planeta:"<<endl;
	cout<<"opcion 3= eliminar un satelite natural:"<<endl;
	cout<<"opcion 4= consultar los planetas con una distancia media al sol< que la distancia dada:\n";
	cout<<"opcion 5= consultar los planetas con una inclinacion orbital < a la del planeta seleccionado:\n";
	cout<<"opcion 6= salir"<<endl;

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
    			cout<<"nombre:\n";
    			cin>>nombre_planeta;
    		}
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
    		cout<<"seleccione un satelite natural para eliminar:\n";
    	}break;
    
    	case 4:
    	{
    		cout<<"Consultar los planetas con una distancia media al sol menor que la distancia dada\n";
    	}break;
    	case 5:
    	{
    		cout<<"Consultar los planetas con una inclinaciC3n orbital menor a la del planeta seleccionado\n";
    	}break;
    	case 6:
    	{
    		cout<<"saliendo del programa\n";
    	}break;
        default:
        {
        cout<<"seleccione una opcion valida\n";    
        }
    
    	}
}while(opcion!=6);
    
    }