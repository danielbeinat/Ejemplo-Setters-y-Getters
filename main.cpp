#include <iostream>
#include <stdlib.h>
using namespace std;



class Persona
{
private:
    string nombre;
    int edad;
public:
    Persona();
    void setnombre(string _nombre);
    void setedad(int _edad);
    string getnombre();
    int getedad();
    ~Persona();
};


void Persona::setnombre(string _nombre){

nombre = _nombre;


}

void Persona::setedad(int _edad){

edad = _edad;


}

string Persona::getnombre(){

return nombre;

}

int Persona::getedad(){

return edad;

}

Persona::Persona(/* args */)
{
}

Persona::~Persona()
{
}


int main(){

Persona persona;
persona.setnombre("carlos");
persona.setedad(34);
cout<<"su nombre es: "<<persona.getnombre()<<" y su edad es: "<<persona.getedad()<<endl;

    return 0;
}