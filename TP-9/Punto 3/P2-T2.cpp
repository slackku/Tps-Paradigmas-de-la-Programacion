#include <iostream>

#include "Inmobiliaria.h"
using namespace std;

int main()
{

	/* ------------------------------------------------------------------------------------------------------
	 *	AGREGUE EL CODIGO DE PRUEBA QUE NECESITE PARA AVANZAR
	 *	DURANTE EL DESARROLLO
	 *	------------------------------------------------------------------------------------------------------
	 */

	// CREAR UNA INMOBILIARIA CON LOS SIGUIENTES DATOS:
	// - CODIGO AFIP = 777
	// - NOMBRE EMPRESA = Hogar dulce hogar
	// - CUIT = 12-34567890 - 1

	Inmobiliaria hdh_Inm(777, "Hogar dulce hogar", "12-34567890-1");
	Inmueble inm1(1, "Casa Grande", "La esquina 21", 100000);
	Inmueble inm2(2, "Casa Mediana", "La esquina 20", 15000);
	Inmueble inm3(3, "Casa chica", "La esquina 19", 10000);

	// DESDE LA INMOBILIARIA
	// - ALQUILAR UN INMUEBLE DESDE EL 08/04/2023 HASTA EL 08/12/2023 PARA UN CLIENTE CON ID 111
	Fecha fI1(8, 4, 2023);
	Fecha fF1(8, 12, 2023);
	hdh_Inm.alquilar(111, fI1, fF1, inm1);
	// - ALQUILAR UN INMUEBLE DESDE EL 16/01/2024 HASTA EL 21/04/2024 PARA UN CLIENTE CON ID 222
	Fecha fI2(16, 1, 2024);
	Fecha fF2(21, 4, 2024);
	hdh_Inm.alquilar(222, fI2, fF2, inm2);
	
	// - ALQUILAR UN INMUEBLE DESDE EL 24/05/2024 HASTA EL 24/05/2025 PARA UN CLIENTE CON ID 333
	Fecha fI3(24, 5, 2024);
	Fecha fF3(24, 5, 2025);
	hdh_Inm.alquilar(333, fI3, fF3, inm3);
	cout << endl;
	
	// OBTENER UN RESUMEN DE LA INMOBILIARIA
	
	hdh_Inm.resumen();

	return 0;
}
