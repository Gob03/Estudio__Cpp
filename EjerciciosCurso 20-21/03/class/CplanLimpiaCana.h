#ifndef CPLANLIMPIACANA_H
#define CPLANLIMPIACANA_H

class CplanLimpiaCana{
	private:
		double caballeriasSinLimpiar;
		double caballeriasLimpias;
	
	public:
		CplanLimpiaCana( double caballeriasSinLimpiar, double caballeriasLimpias):
			caballeriasSinLimpiar( caballeriasSinLimpiar), caballeriasLimpias( caballeriasLimpias){}
			
		double getCaballeriasSinLimpiar(){
			return caballeriasSinLimpiar;
		}
		
		double getCaballeriasLimpias(){
			return caballeriasLimpias;
		}
};

#endif
