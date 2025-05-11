using namespace std;
#include <iostream>
#include <cmath>

struct Satelite {
	string Nombre_satelite;
	float excentricidad;
	float periodo_orbital_satelite;
	float inclinacion_orbital_satelite;
};

struct Planeta {
	string nombre_planeta;
	float distancia_al_sol;
	float periodo_orbital;
	float velocidad_orbital;
	float inclinacion_orbital;
};

int main()
{
	int opcion;
	int opcion_planeta;
	int opcion_orbita;
	float distancia_al_sol;
	float periodo_orbital;
	float velocidad_orbital;
	float inclinacion_orbital;
	float excentricidad;
	float periodo_orbital_satelite;
	float inclinacion_orbital_satelite;
	string nombre_planeta;
	int numero;

	do {
		cout<<"ingrese una opcion teniendo en cuenta:"<<endl;
		cout<<"opcion 1= registro de satelite:"<<endl;
		cout<<"opcion 2= registro informacion de un planeta:"<<endl;
		cout<<"opcion 3= eliminar un satelite natural:"<<endl;
		cout<<"opcion 4= consultar los planetas con una distancia media al sol< que la distancia dada:\n";
		cout<<"opcion 5= consultar los planetas con una inclinacion orbital < a la del planeta seleccionado:\n";
		cout<<"opcion 6= salir"<<endl;

		cin>>opcion;

		switch(opcion) {

		case 1:
		{
		    cout<<"ingrese el numero de satelites que quiere registrar\n";
		    int x;
		    cin>>x;
		    //lista de satelites que se pueden registrar
			Satelite S1[x];

for(int i=0;i<x;i++)
{
			cout<<"ingrese el nombre del satelite\n";
			cin>>S1[i].Nombre_satelite;
			cout<<"ingrese la excentricidad del satelite\n";
			cin>>S1[i].excentricidad;
			cout<<"ingrese el periodo orbital del satelite\n";
			cin>>S1[i].periodo_orbital_satelite;
			cout<<"ingrese la inclinacion orbital del satelite\n";
			cin>>S1[i].inclinacion_orbital_satelite;

			cout<<"Nombre satelite:"<<S1[i].Nombre_satelite<<endl;
			cout<<"excentricidad del satelite:"<<S1[i].excentricidad<<endl;
			cout<<"periodo orbital del satelite:"<<S1[i].periodo_orbital_satelite<<endl;
			cout<<"inclinacion orbital satelite"<<S1[i].inclinacion_orbital_satelite<<endl;
}
		}	
		break;




		case 2:
		{
		     int p;
		    
		    cout<<"Ingrese la cantidad de planetas que quiere registrar:\n";
		    cin>>p;
		    //lista de palentas que se pueden registrar:
		   Planeta P1[p];
		    for(int i=0;i<p;i++)
		    {
		    
			cout<<"registre la informacion del planeta\n";
			{
				cout<<"nombre:\n";
				cin>>P1[i].nombre_planeta;
			}
			{
				cout<<"distancia media al sol(UA):\n";
				cin>>P1[i].distancia_al_sol;
			}
			{
				cout<<"periodo orbital:\n";
				cin>>P1[i].periodo_orbital;
			}
			{
				cout<<"velocidad orbital:\n";
				cin>>P1[i].velocidad_orbital;
			}
			{
				cout<<"inclinacion orbital:\n";
				cin>>P1[i].inclinacion_orbital;
				
				cout<<"nombre:"<<P1[i].nombre_planeta<<endl;
				cout<<"distancia media al sol:"<<P1[i].distancia_al_sol<<endl;
				cout<<"periodo orbital:"<<P1[i].periodo_orbital<<endl;
				cout<<"velocidad orbital:"<<P1[i].velocidad_orbital<<endl;
			    cout<<"inclinacion orbital:"<<P1[i].inclinacion_orbital<<endl;
			}
}
		}
		break;

		case 3:
		{
			cout<<"El unico satelite natural de la tierra es la luna\n";
			cout<<"desea eliminarlo?\n";
			cout<<"Ingrese el numero 1 en caso de querer eliminarlo\n";
			cout<<"Ingrese el numero 2 en caso de no querer eliminarlo\n";
			cin>>numero;	
			if(numero==1){
			cout<<"Satelite eliminado con exito\n";
			}
			else if(numero==2){
			cout<<"No se ha eliminado el Satelite\n";   
			}
			else{
			cout<<"opcion invalida\n";    
			}
			
			}	
				
		
		break;

		case 4:
		{
			cout<<"seleccione un planeta con base en el siguiente menu y se le dira los planetas con una distancia al sol menor que la del planeta seleccionado\n";
			cout<<"opcion 10: Mercurio\n";
			cout<<"opcion 20: venus\n";
			cout<<"opcion 30: tierra\n";
			cout<<"opcion 40: marte\n";
			cout<<"opcion 50: jupiter\n";
			cout<<"opcion 60: saturno\n";
			cout<<"opcion 70: urano\n";
			cout<<"opcion 80: neptuno\n";

			cin>>opcion_planeta;
			switch(opcion_planeta)
			{
			case 10:
			{
				cout<<"mercurio es el planeta mas cercano al sol con una distancia de 0.39UA\n";
			}
			break;

			case 20:
			{
				cout<<"venus 0.72 UA. Mas cercano mercurio\n";
			}
			break;

			case 30:
			{
				cout<<"Tierra: 1.00 UA. MC!s cercanos: Venus, Mercurio.\n";
			}
			break;

			case 40:
			{
				cout<<"Marte: 1.52 UA. MC!s cercanos: Tierra,Venus, Mercurio\n";
			}
			break;

			case 50:
			{
				cout<<"JC:piter: 5.20 UA. MC!s cercanos: Marte,Tierra,Venus, Mercurio\n";
			}
			break;

			case 60:
			{
				cout<<"Saturno: 9.58 UA. MC!s cercanos: jupiter,Marte,Tierra,Venus, Mercurio\n";
			}
			break;

			case 70:
			{
				cout<<"Urano: 19.22 UA. MC!s cercanos: Saturno,jupiter,Marte,Tierra,Venus, Mercurio \n";
			}
			break;

			case 80:
			{
				cout<<"Neptuno: 30.05 UA. MC!s cercanos: Urano,Saturno,jupiter,Marte,Tierra,Venus, Mercurio \n";
			}
			break;

			default:
			{
				cout<<"seleccione un planeta valido\n";
			}


			}
			break;
		}


		case 5:
		{
			cout<<"seleccione un planeta con base en el siguiente menu y se le dira los planetas con una inclinacion orbital menor que la del planeta seleccionado en base al plano de la ecliptica\n";
			cout<<"opcion 100: tierra\n";
			cout<<"opcion 200: urano\n";
			cout<<"opcion 300: jupiter\n";
			cout<<"opcion 400: neptuno\n";
			cout<<"opcion 500: marte\n";
			cout<<"opcion 600: saturno\n";
			cout<<"opcion 700: venus\n";
			cout<<"opcion 800: mercurio\n";

			cin>>opcion_orbita;
			switch(opcion_orbita)
			{
			case 100:
			{
				cout<<"la tierra es el planeta con menor inclinacion orbital 0.00B0\n";
			}
			break;

			case 200:
			{
				cout<<"Urano 0.77B0. Inclinacion orbital menor. Tierra\n";
			}
			break;

			case 300:
			{
				cout<<"Jupiter 1.31B0.Inclinacion orbital menor. Urano,Tierra\n";
			}
			break;

			case 400:
			{
				cout<<"Neptuno 	1.77B0. Inclinacion orbital menor. Jupiter,Urano,Tierra \n";
			}
			break;

			case 500:
			{
				cout<<"Marte 1.85B0. Inclinacion orbital menor. Neptuno,Jupiter,Urano,Tierra\n";
			}
			break;

			case 600:
			{
				cout<<"Saturno 2.49B0. Inclinacion orbital menor. Marte,Neptuno,Jupiter,Urano,Tierra\n";
			}
			break;

			case 700:
			{
				cout<<"Venus 3.39B0. Inclinacion orbital menor. Saturno,Marte,Neptuno,Jupiter,Urano,Tierra\n";
			}
			break;

			case 800:
			{
				cout<<"mercurio 7.00B0.  Inclinacion orbital menor. Venus,Saturno,Marte,Neptuno,Jupiter,Urano,Tierra\n";
			}
			break;

			default:
			{
				cout<<"seleccione un planeta valido\n";
			}


			}
			break;
		}





		case 6:
		{
			cout<<"saliendo del programa\n";
		}
		break;
		default:
		{
			cout<<"seleccione una opcion valida\n";
		}

		}
	} while(opcion!=6);
}
