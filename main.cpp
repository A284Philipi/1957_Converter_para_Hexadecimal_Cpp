#include <iostream>
#include <iomanip> //biblioteca da convers�o para hexadecimal
#include <algorithm> //biblioteca da convers�o para mai�sculo
#include <string>

using namespace std;

//Link que utilizei para suporte:
//https://www.delftstack.com/pt/howto/cpp/how-to-convert-string-to-uppercase-cpp/
//https://stackoverflow.com/questions/5100718/integer-to-hex-string-in-c

//Nescess�rio mas n�o sei o que � exatamente
using std::cout; using std::string;
using std::endl; using std::cin;
using std::transform; using std::toupper;

string capitalizeString(string s) //Fun��o para transformar em mai�sculo
{
    transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return toupper(c); });
    return s;
}

int main()
{
    int numero;
    cin >> numero;

    //Faz a convers�o
    std::stringstream stream;
    stream << std::hex << numero;
    std::string result( stream.str() );

    //Converter para mai�sculo | N�o sei porque, durante a convers�o para Hexadecimal as letras estavam ficando min�sculas, ent�o tive que fazer a convers�o para mai�sculo tamb�m
    cout << capitalizeString(result) <<endl;

}
