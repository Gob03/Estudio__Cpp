/* Ejercicio 1: En un hospital se recepcionan los siguientes datos de las personas que se ingresan:
"	Nombre.
"	Apellidos.
"	Número del carné de identidad.
"	Sala (número entre 1 y 15).
"	Número de la cama (número entre 1 y 50).
"	Edad.
"	Municipio.
"	Sexo (F o M).
Elabore un programa que permita determinar:
a)	Un listado ordenado alfabéticamente de los pacientes ingresados en la sala que se solicite.
b)	El total, por sexo, de los ingresados.
c)	Listado con los pacientes con edad superior a la media de los ingresados.
d)	Determinar si un paciente está ingresado, conocido el número de su carné de identidad.
e)	El (los) municipios de donde proceden la mayor cantidad de ingresos.*/

#include <iostream>
#include "class/Hospital.h" 

int main(){
	Hospital Algo;
	
	Paciente Pedro("Pedro", "Sanchez", "01020378732","Manzanillo", 23, 'M', 2, 15 );
	Paciente Juan("Juan", "Sanchez", "01020378732","Manzanillo", 45, 'M', 3, 11 );
	Paciente Carla("Carla", "Sanchez", "01020378732","Bayamo", 27, 'F', 3, 1 );
	Paciente Sara("Sara", "Sanchez", "01020378732","Manzanillo", 23, 'F', 1, 1 );
	Paciente Felipe("Felipe", "Sanchez", "01020378732","Niquero", 60, 'M', 4, 10 );
	Paciente Maria("Maria", "Sanchez", "01020378732","Media Luna", 39, 'F', 1, 4 );
	Paciente Pablo("Pablo", "Sanchez", "01020378732","Manzanillo", 19, 'M', 1, 15 );
	Paciente Manuel("Manuel", "Sanchez", "01020378732","Yara", 78, 'M', 2, 17 );
	Paciente Juana("Juana", "Sanchez", "01020378732","Niquero", 29, 'F', 2, 21 );
	Paciente Roberto("Roberto", "Sanchez", "01020378732","Bayamo", 37, 'M', 2, 31 );
	
    Algo.anadirPaciente(Pedro);
	Algo.anadirPaciente(Juan);
	Algo.anadirPaciente(Carla);
	Algo.anadirPaciente(Sara);
	Algo.anadirPaciente(Felipe);
	Algo.anadirPaciente(Maria);
	Algo.anadirPaciente(Pablo);
	Algo.anadirPaciente(Manuel);
	Algo.anadirPaciente(Juana);
	Algo.anadirPaciente(Roberto);
	
	std::string* listadoMayoresPromedio = Algo.getPacientesMayoresPromedio();
	
	std::cout << "Pacientes con una edad superior a la media: " << std::endl;
	for(int i = 0; i < 4; i++){
		std::cout << listadoMayoresPromedio[i];
	}
	
	std::string* listaAlfabetica = Algo.getListaAlfabeticaXSala(2);
	std::cout << "Lista de pacientes de la sala 2 ordenada alfabeticamente" << std::endl;
	for(int i = 0; i < 4; i++){
		std::cout << listaAlfabetica[i] << std::endl;
	}
	return 0;
}
