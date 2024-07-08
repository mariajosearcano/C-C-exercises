/*
	Name: Algoritmo Venta Tiquetes Funci�n
	Copyright: 
	Author: Mar�a Jos� Arcila Cano
	Date: 22/06/22 11:17
	Description: 
*/

# include <iostream>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <string.h>
# include <math.h>
# include <windows.h>

using namespace std;

int COMPRAS (int);

int main ()
{
	//Variables
		int Comp_My, Vr_Pagar, Ced, Ced_My, Cant, Vr_Compra;
		float Hora;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	Comp_My = 0;
	Ced_My = 0;
	Cant = 0;
	
	cout << "Ingrese la hora: ";
	cin >> Hora;
	fflush (stdin);
	
	while ((Hora >= 10) && (Hora <= 14))
	{
		cout << "Ingrese la c�dula del comprador: ";
		cin >> Ced;
		fflush (stdin);
		cout << "Ingrese la cantidad de tiquetes a comprar: ";
		cin >> Cant;
		fflush (stdin);
		
		Vr_Compra = COMPRAS (Cant);
		
		if (Vr_Compra > Comp_My)
		{
			Comp_My = Vr_Compra;
			Ced_My = Ced;
		}
		
		cout << "Ingrese la hora: ";
		cin >> Hora;
		fflush (stdin);
	}
	
	Vr_Pagar = Comp_My*0.55;
	
	cout << "El cliente con c�dula: " << Ced_My << ", hizo una compra por: " << Vr_Pagar << endl << endl;
}

int COMPRAS (int N)
{
	//Variables
		int Vr_C, Cont, Mes;
		float Vr_D;
		
	Vr_C = 0;
	
	for (Cont=0; Cont<N; Cont++)
	{
		cout << "Ingrese el valor del d�lar: ";
		cin >> Vr_D;
		fflush (stdin);
		cout << "Ingrese el n�mero del mes en que desea viajar: ";
		cin >> Mes;
		fflush (stdin);
		
			switch (Mes)
			{
			case 1:
			case 3:
			case 4:
			case 6:
			case 12:	Vr_C = Vr_C+305*Vr_D;
						
						break;
			case 2:
			case 5:
			case 9:
			case 10: 	Vr_C = Vr_C+270*Vr_D;
			
						break;
			case 7:
			case 8:
			case 11:	Vr_C = Vr_C+293*Vr_D;
					
						break;	
			}
	}
	
	return Vr_C;
}



































