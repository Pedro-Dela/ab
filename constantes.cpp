#include <iostream>
using namespace std;

/*Existem tipos de constantes:
Decimal==>numeros na base 10 sao escritos de forma direta
ex.:25,403,8390
Hexadecimal==>numeros na base 16 devem ser precedidos por 0x
(representacao comum para enderecos de memoria)
ex.:0x19,0x193,0x20C6
Octal==>numeros na base 8 devem ser precedidos por um 0(zero)
ex,:031,0623,020306
Binario==>numeros na base 2 devem ser precedidos por 0b
ex.:0b11001, 0b110010011,0b10000011000110
*/

int main ()
{
    cout<<25<<"\n";
    cout<<0x19<<"\n";
    cout<<031<<"\n";
    cout<<0b11001<<"\n";

    return 0;
}

//aspas simples para 1 charactere, e a com aspas duplas para um conjunto de characteres