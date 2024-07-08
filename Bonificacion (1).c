/*
	Name: 					Bonificaci�n.c
	Copyright: 
	Author: 				LFGA
	Date: 					11/05/22 10:21
	Description: 			programa que calcula la bonificaci�n recibida por un vendedor

Analis


Dise�o


Prueb



*/

# include <stdio.h>
# include <stdlib.h>

int main()
{
	//Variables
		char Estado_C, G;
		int Vr_V, Vr_Tb;
		short C_h;
		float Vr_Bsin, I;
	printf ("Ingrese el valor de las ventas ");
	scanf ("%d", &Vr_V);
	if (Vr_V < 0)
	{
		printf ("Valor incorrecto!... Ingrese un valor mayor que 0 ");
		scanf ("%d", &Vr_V);
	}
	else
	{	
	
		printf ("Ingrese la cantidad de hijos del vendedor ");
		scanf ("%i", &C_h);
		fflush(stdin);
		printf ("Ingrese el genero del vendedor M, F");
		scanf ("%c", &G);
		fflush(stdin);
		printf ("Ingrese el estado civil del vendedor S, C, V, O");
		scanf ("%c", &Estado_C);
		switch(Estado_C)
		{
			case 'S' :	if (G=='M')
						{		
							Vr_Bsin = Vr_V * 0.05;
						}
						else
						{
							Vr_Bsin = Vr_V * 0.06;
						}
						break;
							
			case 'C' :	if (G=='M')
						{		
							Vr_Bsin = Vr_V * 0.07;
						}
						else
						{
							Vr_Bsin = Vr_V * 0.08;
						}
						break;
		
			case 'V' :	if (G=='M')
						{		
							Vr_Bsin = Vr_V * 0.09;
						}
						else
						{
							Vr_Bsin = Vr_V * 0.10;
						}
						break;
		
			case 'O' :	if (G=='M')
						{		
							Vr_Bsin = Vr_V * 0.02;
						}
						else
						{
							Vr_Bsin = Vr_V * 0.03;
						}
						break;
			default  :  Vr_Bsin = 0;
						break;
		}
	
		if (C_h > 3)
		{
			I = Vr_Bsin * 0.35;	
		}	
		else
		{
			I = 0;	
		}
		Vr_Tb = Vr_Bsin + I;
		printf ("La bonificaci�n ganada por el vendedor es de %d ", Vr_Tb);
	}	
	return 0;
}





