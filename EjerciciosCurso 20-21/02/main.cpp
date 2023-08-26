/*En el centro provincial de dirección de la zafra de La Habana, se recibe diariamente, un parte con los resultados de cada uno de los centrales de la provincia. El formato de la información es el siguiente:
"	Código del central (número de 3 cifras).
"	Cantidad de caña molida (en toneladas).
"	Cantidad de azúcar producida (en toneladas).
Confeccione un programa que permita recibir la información de cada central y ofrezca la siguiente información:
a)	Total de azúcar producida en la provincia.  
b)	Promedio de caña molida por los centrales.
c)	 La relación tonelada de caña molida por tonelada de azúcar producida en cada central. Mostrarlo en un listado ordenado descendentemente.
d)	El código del central con mayor cantidad de toneladas producidas.*/

#include <iostream>
#include "class/direccionZafra.h"
#include "class/informeCentral.h"
int main(){
	
	CDireccionZafra direccion;
	
	CInformeCentral centro1(100, 50.7, 38.2);
	CInformeCentral centro2(101, 43.2, 38.9);
	CInformeCentral centro3(102, 64.2, 45.7);
	
	direccion.anadirCentral(&centro1);
	direccion.anadirCentral(&centro2);
	direccion.anadirCentral(&centro3);
	
	std::cout << "El mayor productor de azucar fue: " << direccion.getCodigoMayorProductor() << std::endl;
	
	std::cout << "Total de azucar producida en la provincia: " << direccion.getTotalAzucarProducida() << std::endl;
	
	std::cout << "Promedio de cana molida por los centrales: " << direccion.getPromedioCanaMolida() << std::endl;
	
}
