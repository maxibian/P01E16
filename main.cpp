#include <iostream>
/*El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada
frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de
Micilina y 7 mg de Ácido Sinítico.
Nos solicitan un programa donde se ingrese la cantidad de frascos de un
pedido y muestre la cantidad de miligramos de Betamol, Micilina y de Ácido
Sinítico que son necesarios para elaborarlos.*/
using namespace std;

int main()
{
    int b, m, as, frasco = 75, cantF, betamol = 45, micilina = 2, acidoSinitico = 7;
    cout << "Ingrese la cantidad de frascos pedidos: ";
    cin >> cantF;
    b = cantF * frasco * betamol;
    m = cantF * frasco * micilina;
    as = cantF * frasco * acidoSinitico;
    cout << "La cantidad de Betamol es de: "<<b<<endl;
    cout << "La cantidad de Micilina es de: "<<m<<endl;
    cout << "La cantidad de Acido Sinitico es de: "<<as<<endl;
    return 0;
}
