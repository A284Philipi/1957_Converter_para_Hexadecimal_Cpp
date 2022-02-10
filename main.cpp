#include <iostream>
#include <iomanip> //biblioteca da conversão para hexadecimal
#include <algorithm> //biblioteca da conversão para maiúsculo
#include <string>

using namespace std;

//Link que utilizei para suporte:
//https://www.delftstack.com/pt/howto/cpp/how-to-convert-string-to-uppercase-cpp/
//https://stackoverflow.com/questions/5100718/integer-to-hex-string-in-c

//Nescessário mas não sei o que é exatamente
using std::cout; using std::string;
using std::endl; using std::cin;
using std::transform; using std::toupper;

string capitalizeString(string s) //Função para transformar em maiúsculo
{
    transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return toupper(c); });
    return s;
}

int main()
{
    int numero;
    cin >> numero;

    //Faz a conversão
    std::stringstream stream;
    stream << std::hex << numero;
    std::string result( stream.str() );

    //Converter para maiúsculo | Não sei porque, durante a conversão para Hexadecimal as letras estavam ficando minúsculas, então tive que fazer a conversão para maiúsculo também
    cout << capitalizeString(result) <<endl;

}
