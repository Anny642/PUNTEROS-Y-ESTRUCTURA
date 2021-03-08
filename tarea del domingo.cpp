#include<iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct Estudiante{
int *codigo;
string *nombre;
int **pm_notas;
};

int main() {
int fila_estudiante=0, columna_notas=0;
Estudiante estudiante;
	cout<<"Cuantos estudiantes desea ingresar: ";
	cin>>fila_estudiante;
	cout<<"Cuantas notas desea ingresar: ";
	cin>>columna_notas;
	estudiante.pm_notas = new int *[fila_estudiante];
	estudiante.codigo = new int[fila_estudiante];
	estudiante.nombre= new string [fila_estudiante];
	for (int i=0;i<fila_estudiante;i++){
	estudiante.pm_notas[i]= new int[columna_notas];
	}		
	cout <<"-----INGRESE NOTAS-----"<<endl;
	string nombre; 
	for(int i=0;i<fila_estudiante;i++){
		cout<<"CODIGO	: " ;
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"NOMBRE	:";
		getline(cin,estudiante.nombre[i]);

	for(int ii=0;ii<columna_notas;ii++){



			cout <<"NOTAS  "<<ii + 1<<" :";
			cin>>*(*(estudiante.pm_notas+i)+ii);
			}
			cout<<"---------------------------------------"<<endl;
}	
	cout<<"-------Mostrar Notas----------"<<endl;
for (int i=0;i<fila_estudiante;i++){
		cout<<"Codigo: "<<estudiante.codigo[i]<<" 	 Estudiante:"<<estudiante.nombre[i]<<"." <<endl;
for (int ii=0;ii<columna_notas;ii++){
		cout <<"NOTAS ["<<ii + 1 <<"]: "
		<<*(*(estudiante.pm_notas+i)+ii);
		cout <<endl;

	}
			cout <<"---------------------------"<<endl;
}
	
			cout <<"----------------------------"<<endl;

for (int i=0;i<fila_estudiante;i++){
	delete[]estudiante.pm_notas[i];
}

delete[] estudiante.pm_notas;
delete[] estudiante.codigo;
delete[] estudiante.nombre;

system("PAUSE");
return 0;
}
