/*
	Name: Algoritmo_saber_numero_par.O.impar
	Copyright: 
	Author: Mar�a Jos� Arcila Cano
	Date: 25/06/22 16:09
	Description: 
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <math.h>
# include <string.h>

int main ()
{
	//Variables
		int Num1, Num2, Num3;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese el primer n�mero: ");
	scanf ("%d", &Num1);
	fflush (stdin);
	printf ("Ingrese el segundo n�mero: ");
	scanf ("%d", &Num2);
	fflush (stdin);
	printf ("Ingrese el tercer n�mero: ");
	scanf ("%d", &Num3);
	fflush (stdin);
	
	if ((Num1==Num2) && (Num1>=0) && (Num2>=0))
	{
		printf ("El primer y segundo n�mero hacen pareja positiva\n\n");
	}
	else
	{
		if ((Num1==Num3) && (Num1>=0) && (Num3>=0))
		{
			printf ("El primer y tercer n�mero hacen pareja positiva\n\n");
		}
		else
		{
			if ((Num2==Num3) && (Num2>=0) && (Num3>=0))
			{
				printf ("El segundo y tercer n�mero hacen pareja positiva\n\n");
			}
			else
			{
				if ((Num1==Num2) && (Num1<0) && (Num2<0))
				{
					printf ("El primer y segundo n�mero hacen pareja negativa\n\n");
				}
				else
				{
					if ((Num1==Num3) && (Num1<0) && (Num3<0))
					{
						printf ("El primer y tercer n�mero hacen pareja negativa\n\n");
					}	
					else
					{
						if ((Num2==Num3) && (Num2<0) && (Num3<0))
						{
							printf ("El segundo y tercer n�mero hacen pareja negativa\n\n");
						}
						else
						{
							printf ("Ingrese dos n�meros iguales para poder identificar que tipo de pareja har�an\n\n");
						}
					}
				}
			}
		}
	}	
	
	system ("pause");
	
	return 0;
}


























