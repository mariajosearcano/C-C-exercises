/*
	Name: Algoritmo descuento compra
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
		long NumA, NumB, NumC, NumM, Numm;
	
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese un primer n�mero: ");
	scanf ("%ld", &NumA);
	fflush (stdin);
	printf ("Ingrese un segundo n�mero: ");
	scanf ("%ld", &NumB);
	fflush (stdin);
	printf ("Ingrese un tercer n�mero: ");
	scanf ("%ld", &NumC);
	fflush (stdin);
	
	if ((NumA>NumB) && (NumA>NumC))
	{
		NumM=NumA;
		
		if (NumB<NumC)
		{
			Numm=NumB;
		}
		else
		{
			Numm=NumC;
		}
	}
	else
	{
		if ((NumB>NumA) && (NumB>NumC))
		{
			NumM=NumB;
			
			if (NumA<NumC)
			{
				Numm=NumA;
			}
			else
			{
				Numm=NumC;
			}
		}
		else
		{
			if ((NumC>NumA) && (NumC>NumB))
			{
				NumM=NumC;
				
				if (NumA<NumB)
				{
					Numm=NumA;
				}
				else
				{
					Numm=NumB;
				}
			}
		}
	}
	
	printf ("El n�mero mayor es %ld y el n�mero menor es %ld\n\n", NumM, Numm);
	
	system ("pause");
	
	return 0;
}
