#include <iostream>

using namespace std;

struct Persona
{
    static string nombre;

    static void imprime();
};

string Persona::nombre = "Juan";

int main()
{
    Persona::nombre = "Pedro";
    Persona::imprime();

    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "No pueden ser **const** Nunca ya que es Static Recuerda" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << endl;

    return 0;
}

void Persona::imprime()
{
    cout << endl;
    cout << nombre << endl;
}
