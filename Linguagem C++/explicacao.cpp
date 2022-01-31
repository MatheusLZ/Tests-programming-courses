//Primeiramente temos o cabeçalho//
//<iostream> ficará como a biblioteca padrão do C++//

#include <iostream>

//namespace é a forma de organizar os arquivos e bibliotecas do programa//
//Portanto, ao colocá-lo, o que vier á seguir definirá o que funciona, digamos assim//

using namespace std;

int main(){

//"cout" é a forma de ler do C++//
//Tudo se conecta graças ao "namespace" logo acima//
    cout << "Olá mundo!" << endl;
    
return 0;
    
}


//ou//

//#include <iostream>


//int main(){
    
//    std::cout << "Olá mundo!" << std::endl;
    
//return 0;
   
   
   //Uma forma que também funciona, sem o uso do "namespace"
//}//