#ifndef PERSONA_H
#define PERSONA_H

#include<iostream>

class Persona {
	private:
		std::string nombre;
		std::string apellido;
		std::string CI;
		std::string municipio;
		int edad;
		char sexo;
		
	public:
		Persona( std::string nombre, std::string apellido, std::string CI, std::string municipio, int edad, char sexo )
		:nombre( nombre ), apellido( apellido ), CI( CI ), municipio( municipio ), edad( edad ), sexo( sexo )
		{}
		
		std::string getNombre(){
			return nombre;
		}	
		
		std::string getApellido(){
			return apellido;
		}
		
		std::string getCI(){
			return CI;
		}
		
		std::string getMunicipio(){
			return municipio;
		}
		
		int getEdad(){
			return edad;
		}
		
		char getSexo(){
			return sexo;
		}
};

#endif
