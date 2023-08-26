/* Ejercicio 3: En el centro de c�mputo de Azcuba se recibe un parte del cumplimiento de la limpia de ca�a en cada provincia y se tiene por cada una:
"	Cantidad de caballer�as a limpiar.
"	Cantidad de caballer�as limpias.
Confeccione un programa que permita:
a)	Determinar la provincia con menor cantidad de caballer�as limpias.
b)	Imprimir un listado con todas las provincias que tengan cumplido su plan de limpia por encima del 90 %.
c)	Imprima un listado con las provincias m�s rezagadas en cuanto al cumplimiento del plan, si se conoce que una provincia est� rezagada si el cumplimiento del plan de limpia est� por debajo del 70 %.
d)	Determinar el porciento de cumplimiento de todo el pa�s.*/

#include <iostream>
#include "class/Cazcuba.h"
#include "class/CplanLimpiaCana.h"

int main(){
	
	Cazcuba Azcuba;
	Azcuba.setNuevaProvincia("Granma", CplanLimpiaCana( 45.7, 54.3));
	Azcuba.setNuevaProvincia("Habana", CplanLimpiaCana( 32.1, 67.9));
	Azcuba.setNuevaProvincia("Villa Clara", CplanLimpiaCana( 65.3, 34.7));
	Azcuba.setNuevaProvincia("Guantanamo", CplanLimpiaCana( 7.2, 92.8));
	
	std::cout << "La provincia menos productiva fue: " << Azcuba.getProvinciaMenosProductiva() << std::endl;
	
	std::string *provDest = Azcuba.getProvinciasDestacadas();
	
	std::cout << "Provincias Destacadas: ";
	for(int i = 0; i < 1; i++){
		std::cout << provDest[i] << " ";
	}
	
	std::string *provResag = Azcuba.getProvinciasResagadas();
	
	std::cout << "Provincias Resagadas:";
	for(int i = 0; i < 3; i++){
		std::cout << provResag[i] << " ";
	}
	
	std::cout << "El porciento de cumplimiento del pais fue: " << Azcuba.getPorcientoCumplimiento() << std::endl;
	
	return 0;
}
