#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <iostream>
#include "Paciente.h"

class Hospital{
	private:
		Paciente **pacientesArray;
		int cantPacientes;
	
	public:
		Hospital(){
			pacientesArray = new Paciente*;
			cantPacientes = 0;
		}
		
		//a) Un listado ordenado alfabéticamente de los pacientes ingresados en la sala que se solicite.
		std::string* getListaAlfabeticaXSala (int sala){
			
			std::string* listaAlfabetica = new std::string[cantPacientes];
			int cantPacientesListaAlf = 0;
			
			for(int i = 0; i < cantPacientes; i++){
				if(pacientesArray[i] -> getSala() == sala){
					listaAlfabetica[ cantPacientesListaAlf ] = pacientesArray[i] -> getNombre();
					cantPacientesListaAlf++;
				}
			}
			
			for(int i = 0; i < cantPacientesListaAlf; i++){
				
				for( int j = i + 1; j < cantPacientesListaAlf; j++){
					if( listaAlfabetica[i][0] > listaAlfabetica[j][0]){
						std::string aux = listaAlfabetica[i];
						listaAlfabetica[i] = listaAlfabetica[j];
						listaAlfabetica[j] = aux;
					}
				}
			}
			
			return listaAlfabetica;
		}
		
		//b) El total, por sexo, de los ingresados.
		int totalPacientesMujeres(){
			int cantMujeres = 0;
			
			for( int i = 0; i < cantPacientes; i++){
				if( pacientesArray[i] -> getSexo() == 'F'){
					cantMujeres++;
				}
			}
			
			return cantMujeres;
		}
		
		int totalPacientesHombres(){
			int cantMujeres = totalPacientesMujeres();
			
			return cantPacientes - cantMujeres;
		}

		//c) Listado con los pacientes con edad superior a la media de los ingresados.
		double getPromedioEdad(){
			int sumatoria = 0;
			
			for( int i = 0; i < cantPacientes; i++){
				sumatoria += pacientesArray[i] -> getEdad();
			}
			
			return sumatoria / cantPacientes;
		}
		
		std::string* getPacientesMayoresPromedio(){
			double promedioEdad = getPromedioEdad();
			int cantPacientesMayores = 0;
			int posPacientesMayores[cantPacientes];
			
			for(int i = 0; i < cantPacientes; i++){
				if( pacientesArray[i]->getEdad() > promedioEdad){
					posPacientesMayores[cantPacientesMayores] = i;
					cantPacientesMayores++;
				}
			}
			
			std::string *listadoMayores = new std::string[cantPacientesMayores];
			
			for(int i = 0; i < cantPacientesMayores; i++){
				listadoMayores[i] = pacientesArray[ posPacientesMayores[i] ] -> getNombre();
			}
			
			return listadoMayores;
		}
		
		//d) Determinar si un paciente está ingresado, conocido el número de su carné de identidad.
		
		bool estaIngresado( std::string CI){
			for( int i = 0; i < cantPacientes; i++){
				if( pacientesArray[i] -> getCI() == CI){
					return true;
				}
			}
			
			return false;
		}
		
		//Tests
		void anadirPaciente(Paciente nuevoPaciente){
			pacientesArray[cantPacientes] = &nuevoPaciente;
			cantPacientes++;
		}
};

#endif
