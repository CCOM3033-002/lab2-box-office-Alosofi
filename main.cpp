#include <iostream>
#include <iomanip> 

// Alondra S. Rivera Román
// Alosofi
// 801-20-1218
// incluya cualquier colaboración que haga: N/A

using namespace std;

int main()
{
// Propósito del programa

cout << "Este programa calculara el ingreso bruto y neto\n";
cout << "que genera una sala de cine y las contribuciones que se\n";
cout << "le pagaran al distribuidor\n" << endl;

  // Variables

  double precioBoletoAdulto, precioBoletoNino, boletosAdultos, boletosNinos;
  double ingresoNeto, ingresoBruto, ingresoDistribuidor, ingresoBoletosAdultos;
  double ingresoBoletosNinos;

  string nombrePelicula;

  precioBoletoAdulto = 10.00;

  precioBoletoNino = 6.00;

// Recolección de datos

  cout << "Por favor escriba el nombre de la pelicula para la cual desea calcular los ingresos: ";
  getline(cin, nombrePelicula); 

  cout << "Numero de boletos vendidos para adultos: ";
  cin >> boletosAdultos; 

  cout << "Numero de boletos vendidos para ninos: ";
  cin >> boletosNinos; 
  cout << endl;

  // Calculando los boletos vendidos

  ingresoBoletosAdultos = (precioBoletoAdulto * boletosAdultos); 

  ingresoBoletosNinos = (precioBoletoNino * boletosNinos); 

  ingresoBruto = (ingresoBoletosAdultos + ingresoBoletosNinos);

  ingresoNeto = (ingresoBruto * 0.20);

  ingresoDistribuidor = ingresoBruto - ingresoNeto;
  // Desplegando resultados 

  cout << "Nombre de la Pelicula: " << setw(14) << '"' << nombrePelicula << '"' << endl; 

  cout << "Boletos vendidos para adultos: " << setw(12) << boletosAdultos << endl;

  cout << "Boletos vendidos para ninos: " << setw(14) << boletosNinos << endl;
  
  cout << setprecision(2) << fixed;

  cout << "Ingreso Bruto: " << setw(23) << "$" << setw(8) << ingresoBruto << endl;

  cout << "Ingreso Neto: " << setw(24) << "$" << setw(8) << ingresoNeto << endl; 

  cout << "Ingreso Distribuidor: " << setw(16) << "$" << setw(8) << ingresoDistribuidor << endl; 

  return 0;
}
