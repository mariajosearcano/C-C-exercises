/*
	Name: Algoritmo calculo edad
	Copyright: 
	Author: Maria Jose Arcila Cano
	Date: 26/04/22 20:48
	Description:
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>

int main ()
{
	//Variables
		int AN, AC, Edad;
	
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese el a�o de nacimiento: ");
	scanf ("%d", &AN);
	fflush (stdin);
	printf ("Ingrese el a�o actual: ");
	scanf ("%d", &AC);
	fflush (stdin);
	
	Edad=AC-AN;
	
	printf ("La edad es de: %d ", Edad);
	printf ("a�os\n\n");
	
	system ("pause");
	
	return 0;
}
