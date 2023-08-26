#ifndef CAZCUBA_H
#define CAZCUBA_H

#include "CplanLimpiaCana.h"
#include <iostream>

class Cazcuba{
	private:
		CplanLimpiaCana **partesCumplimiento;
		std::string *listadoProvincias;
		int provinciasCont;
	
	public:
		Cazcuba(){
			partesCumplimiento = new CplanLimpiaCana*;
			listadoProvincias = new std::string[16];
			provinciasCont = 0;
		}
		
		//a)	Determinar la provincia con menor cantidad de caballerías limpias.
		
		std::string getProvinciaMenosProductiva(){
			int posProvinciaMenosProductiva = 0;
			
			for( int i = 1; i < provinciasCont; i++){
				if( partesCumplimiento[ posProvinciaMenosProductiva] -> getCaballeriasSinLimpiar() <
				 partesCumplimiento[i] -> getCaballeriasSinLimpiar()){
					posProvinciaMenosProductiva = i;
				}
			}
			return listadoProvincias[ posProvinciaMenosProductiva];
		}
		
		//b)	Imprimir un listado con todas las provincias que tengan cumplido su plan de limpia por encima del 90 %.
		std::string* getProvinciasDestacadas(){
			std::string *provinciasDestacadas = new std::string[ provinciasCont];
			
			int contProvinciasDestacadas = 0;
			
			for(int i = 0; i < provinciasCont; i++){
				double calc90Porciento = (partesCumplimiento[i] -> getCaballeriasSinLimpiar() 
										+ partesCumplimiento[i] -> getCaballeriasLimpias())
										* 0.9;
				if( partesCumplimiento[i] -> getCaballeriasLimpias() > calc90Porciento){
					provinciasDestacadas[ contProvinciasDestacadas] = listadoProvincias[i];
					contProvinciasDestacadas++;
				}
			}
			
			return provinciasDestacadas;
		}
		
		//c)	Imprima un listado con las provincias más rezagadas en cuanto al cumplimiento del plan, si se conoce que una provincia está rezagada si el cumplimiento del plan de limpia está por debajo del 70 %.
		
		std::string* getProvinciasResagadas(){
			std::string *provinciasResagadas = new std::string[ provinciasCont];
			
			int contProvinciasResagadas = 0;
			
			for(int i = 0; i < provinciasCont; i++){
				double calc70Porciento = (partesCumplimiento[i] -> getCaballeriasSinLimpiar() 
										+ partesCumplimiento[i] -> getCaballeriasLimpias())
										* 0.7;
				if( partesCumplimiento[i] -> getCaballeriasLimpias() < calc70Porciento){
					provinciasResagadas[ contProvinciasResagadas] = listadoProvincias[i];
					contProvinciasResagadas++;
				}
			}
			
			return provinciasResagadas;
		}
		
		//d)	Determinar el porciento de cumplimiento de todo el país.*/
		double getPorcientoCumplimiento(){
			double sumatoriaCumplimiento = 0;
			
			for( int i = 0; i < provinciasCont; i++){
				sumatoriaCumplimiento += partesCumplimiento[i] -> getCaballeriasLimpias();
			}
			
			return sumatoriaCumplimiento / provinciasCont;
		}
	//Test
	void setNuevaProvincia( std::string provincia, CplanLimpiaCana parteCump){
		partesCumplimiento[ provinciasCont] = new CplanLimpiaCana(parteCump);
		listadoProvincias[ provinciasCont] = provincia;
		provinciasCont++;
	}
};


#endif
