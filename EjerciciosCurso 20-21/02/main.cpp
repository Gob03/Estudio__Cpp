/*En el centro provincial de direcci�n de la zafra de La Habana, se recibe diariamente, un parte con los resultados de cada uno de los centrales de la provincia. El formato de la informaci�n es el siguiente:
"	C�digo del central (n�mero de 3 cifras).
"	Cantidad de ca�a molida (en toneladas).
"	Cantidad de az�car producida (en toneladas).
Confeccione un programa que permita recibir la informaci�n de cada central y ofrezca la siguiente informaci�n:
a)	Total de az�car producida en la provincia.  
b)	Promedio de ca�a molida por los centrales.
c)	 La relaci�n tonelada de ca�a molida por tonelada de az�car producida en cada central. Mostrarlo en un listado ordenado descendentemente.
d)	El c�digo del central con mayor cantidad de toneladas producidas.*/

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
