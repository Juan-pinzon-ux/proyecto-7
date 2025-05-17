#include <iostream>
using namespace std;


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
	Planeta planetas[8] = {
		{"Mercurio", 0, 0, 0, 0},
		{"Venus", 0, 0, 0, 0},
		{"Tierra", 0, 0, 0, 0},
		{"Marte", 0, 0, 0, 0},
		{"JC:piter", 0, 0, 0, 0},
		{"Saturno", 0, 0, 0, 0},
		{"Urano", 0, 0, 0, 0},
		{"Neptuno", 0, 0, 0, 0}
	};




	do {
	cout<<"Vamos a editar la informacion de los planetas\n";
	cout<<"ingrese una opcion segun el planeta que quiera editar\n";
	cout<<"Opcion 0 salir del programa\n";
	cout<<"Opcion 1 Mercurio\n";
	cout<<"Opcion 2 Venus\n";
	cout<<"Opcion 3 Tierra\n";
	cout<<"Opcion 4 Marte\n";
	cout<<"Opcion 5 Jupiter\n";
	cout<<"Opcion 6 Saturno\n";
	cout<<"Opcion 7 Urano\n";
	cout<<"Opcion 8 Neptuno\n";
	    cin>>opcion;
        if(opcion<0 or opcion>8){
        cout<<"Opcion invalida intente nuevamente\n";
        continue;
        }

        int p=opcion-1;

		switch (opcion) {
		case 0:    
		cout<<"Saliendo del programa\n";
		break;
		case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:
			cout<<"el planeta seleccionado es "<< planetas[p].nombre_planeta<<endl;
			cout<<"ingrese la distancia al sol del planeta en UA\n";
			cin>>planetas[p].distancia_al_sol;
			cout<<"ingrese el periodo orbital\n";
			cin>>planetas[p].periodo_orbital;
			cout<<"ingrese la velocidad orbital\n";
			cin>>planetas[p].velocidad_orbital;
			cout<<"ingrese la inclinacion orbital\n";
			cin>>planetas[p].inclinacion_orbital;

			cout<<"Nombre:"<< planetas[p].nombre_planeta<<endl;
			cout<<"Distancia al Sol:"<<planetas[p].distancia_al_sol<<" UA\n";
			cout<<"Periodo orbital:"<<planetas[p].periodo_orbital<<" dias\n";
			cout<<"Velocidad orbital:"<<planetas[p].velocidad_orbital<<" km/s\n";
			cout<<"Inclinacion orbital:"<<planetas[p].inclinacion_orbital<<" grados\n";
			break;
		}
	} while(opcion!=0);
}