#ifndef DIRECCIONZAFRA_H
#define DIRECCIONZAFRA_H

#include "informeCentral.h"

class CDireccionZafra{
	private:
		CInformeCentral** listaCentrales;
		int cantCentrales;
	
	public:
		CDireccionZafra(){
			listaCentrales = new CInformeCentral*;
			cantCentrales = 0;
		}
		
	//a)	Total de azúcar producida en la provincia.  
	double getTotalAzucarProducida(){
		double totalAzucarProducida = 0;
		for(int i = 0; i < cantCentrales; i++){
			totalAzucarProducida += listaCentrales[i] -> getAzucarProducida();
		}
		return totalAzucarProducida;
	}
	
	//b)	Promedio de caña molida por los centrales.
	double getPromedioCanaMolida(){
		double sumatoria = 0;
		for(int i = 0; i < cantCentrales; i++){
			sumatoria += listaCentrales[i] -> getCanaMolida();
		}
		
		return sumatoria / cantCentrales;
	}
	
	double getRelacionProduccion(int codigoCentral){
		double canaMolida;
		double azucarProducida;
		
		for(int i = 0; i < cantCentrales; i++){
			if(listaCentrales[i] -> getCodigoCentral() == codigoCentral){
				canaMolida = listaCentrales[i] -> getCanaMolida();
				azucarProducida = listaCentrales[i] -> getAzucarProducida();
			}
		}
		
		return canaMolida / azucarProducida;
	}
	
	/*double* getListaDescRelacionProduccion(){
		double ListaRelacionProduccion
	}*/
	
	//d)	El código del central con mayor cantidad de toneladas producidas.*/
	int getCodigoMayorProductor(){
		int mayorProductorPos;
		for( int i = 0; i < cantCentrales; i++){
			if(i == 0){
				mayorProductorPos = i;
				continue;
			}
			
			if(listaCentrales[ mayorProductorPos ] -> getAzucarProducida() < listaCentrales[i] -> getAzucarProducida()){
				mayorProductorPos = i;			
			}
		}
		
		return listaCentrales[ mayorProductorPos ] -> getCodigoCentral();
	}
	
	//Tests
	void anadirCentral( CInformeCentral* nuevaCentral){
		listaCentrales[ cantCentrales ] = nuevaCentral;
		cantCentrales++;
	}
	
};



#endif
