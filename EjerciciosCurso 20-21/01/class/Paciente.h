#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
#include "Persona.h"

class Paciente : public Persona{
	private:
		int sala;
		int cama;
		
	public:
		Paciente(std::string nombre, std::string apellido, std::string CI, std::string municipio, int edad, char sexo, int sala, int cama)
		:Persona(nombre, apellido, CI, municipio, edad, sexo), sala( sala ), cama( cama )
		{}
		
		int getSala(){
			return sala;
		}
		
		int getCama(){
			return cama;
		}
};

#endif
