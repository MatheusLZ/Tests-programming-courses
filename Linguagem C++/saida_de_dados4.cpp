#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
int idade;
double salario;
string nome;
char sexo;

idade = 23;
salario = 1201.4;
nome = "Renata Irina";
sexo = 'F';

cout << fixed << setprecision(2);

cout << "A funcionaria " << nome << " , sexo " << sexo << " ganha " << salario << " e tem " << idade << " anos" << endl;

    
return 0;
    
}