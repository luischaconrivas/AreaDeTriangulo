#include <iostream>
/*
21 de abril del 2021
Práctica Curso Programación con C++
Estudiante: Luis Angel Chacón Rivas
email:      luischaconrivas@gmail.com
*/
using namespace std;
int main(void) 
{
  float base, altura, area;
  cout << "Este programa calcula el área de un triángulo.\n" << endl;
  cout << "Ingrese la medida (en metros) de la base del triángulo.\n(Para los decimales use el punto como separador)\nBASE = ";
  cin >> base;
  cout << "\nIngrese la medida (en metros) de la altura del triángulo.\n(Para los decimales use el punto como separador)\nALTURA = ";
  cin >> altura;
  area = base * altura / 2;
  cout << endl << "ÁREA DEL TRIÁNGULO = " << (float)area << " metros cuadrados";
  return 0;
}