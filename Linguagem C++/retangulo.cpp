#include <iostream>
#include <iomanip> //para setprecision
#include <cmath> //pra utilizar o sqrt de outro modo

using namespace std;

int main(){
    double base, altura, area, perimetro, diagonal;

    cout << "Base do retangulo: ";
    cin >> base;

    cout << "Altura do retangulo: ";
    cin >> altura;

    area = base * altura;

    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;

    perimetro = 2 * (base + altura);

    cout << "PERIMETRO = " << perimetro << endl;

    diagonal = sqrt(base * base + altura * altura);
    
    //diagonal = sqrt(pow(base, 2.0) * pow(altura, 2.0));

    cout << "DIAGONAL = " << diagonal << endl;

	return 0;
}
