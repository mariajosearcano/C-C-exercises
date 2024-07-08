/*
	Name: Algoritmo calcula tu nota 2
	Copyright: 
	Author: Familia Arcila Cano
	Date: 25/06/22 12:15
	Description: 
*/
 
# include <iostream>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <string.h>
# include <math.h>
# include <windows.h>
#include <string>
#include <algorithm>

using namespace std;

int main ()
{
	string s;
	
	cout << "Ingresa palabra: ";
	cin >> s;
 
    auto vc = s.c_str();

	for (size_t i = 0; i < nombres.size(); i++)
	{
	    string nombreActual = nombres.at(i);
	    // También podría ser con:
	    // nombreActual = nombres[i]
	    cout << "Un nombre: " << nombreActual << endl;
	}
}
