/*
	Name: Algoritmo calculo pulsaciones
	Copyright: 
	Author: Mar�a Jos� Arcila Cano
	Date: 26/06/22 06:46
	Description: 
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <math.h>
# include <string.h>
# include <windows.h>

int main ()
{
	//Variables
		short Edad, Num_Pulsaciones;
		char Gen[7];
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese su edad: ");
	scanf ("%i", &Edad);
	fflush (stdin);
	printf ("Ingrese su g�nero Mujer o Hombre (Recuerde diferenciar entre may�sculas y min�sculas): ");
	scanf ("%s", &Gen);
	fflush (stdin);
	
	if ((Edad<30) && (strcmp(Gen, "Hombre")==0))
	{
		Num_Pulsaciones = (220-Edad)/10;
		
		printf ("Cada 10 segundos de ejercicio debe tener: %i\n\n", Num_Pulsaciones);
		printf (" pulsaciones\n\n");
	}
	else
	{
		if ((Edad>=30) && (strcmp(Gen, "Mujer")==0))
		{
			Num_Pulsaciones = (220-Edad)/7;
		
			printf ("Cada 10 segundos de ejercicio debe tener: %i", Num_Pulsaciones);
			printf (" pulsaciones\n\n");
		}
		else
		{
			printf ("No tenemos c�lculos para usted\n\n");
		}
	}
	
	system ("pause");
	
	return 0;
}
