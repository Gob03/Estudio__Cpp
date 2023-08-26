#ifndef INFORMECENTRAL_H
#define INFORMECENTRAL_H

class CInformeCentral{
	private:
		int codigoCentral;
		double canaMolida;
		double azucarProducida;
		char unidadMedida = 'T';
		
	public:
		CInformeCentral( int codigoCentral, double canaMolida, double azucarProducida)
		:codigoCentral(codigoCentral), canaMolida(canaMolida), azucarProducida(azucarProducida){}
		
	int getCodigoCentral(){
		return codigoCentral;
	}
	
	double getCanaMolida(){
		return canaMolida;
	}
	
	double getAzucarProducida(){
		return azucarProducida;
	}
};


#endif
