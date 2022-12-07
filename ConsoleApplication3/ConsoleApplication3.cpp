// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>                                    // для оператора cout
#include <cmath>                                       // для функции sin
 
#define PI 3.14159265                                  // число ПИ
using namespace std;

int main()
{
    setlocale(0, "");
  double a ;
  double z1;
  double z2;
  cout << "угол \n";
  cin >> a;
   z1= 1- 0.25 * (pow (sin(2 * a * PI / 180),2)) + (3 * cos(a * PI / 180));
   z2 = pow(cos(a * PI / 180),2) + pow(cos(a * PI / 180),4);
   cout << "z1 =" << z1 <<"\nz2 ="<< z2;
}
//1 - 0.25 * pow(sin 2 * a * PI / 180, 2);   𝑧1=1−14sin22𝛼+3cos𝛼 𝑧2=cos2𝛼+cos4𝛼