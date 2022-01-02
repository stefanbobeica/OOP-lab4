
#include "Sticla.h"

using namespace  std;
Sticla::Sticla():pret(0),marca(nullptr){
//cout<<"Constructor fara parametri"<<endl;
}
Sticla::Sticla(const int p, const char *m, const int d, const char *t ):Dop(d,t){
    marca=strdup(m);
    pret=p;
}

Sticla::Sticla(const Sticla &obj):Dop(obj.diametru,obj.tip){
pret = obj.pret;
marca = strdup(obj.marca);

}

Sticla::~Sticla() {
delete[] marca;
}
Sticla& Sticla::operator=(const Sticla & obj) {
  pret=obj.pret;
  diametru=obj.diametru;
  marca= strdup(obj.marca);
  tip= strdup(obj.tip);
}
istream& operator >>(istream& input,Sticla& obj){
    cout<<"Introduceti diametrul dopului: ";
    input>>obj.diametru;
    cout<<"Introduceti tipul dopului: ";
    char *aux= new char[20];
    input>>aux;
    obj.tip=strdup(aux);
    cout<<"Introduceti pretul sticlei: ";
    input>>obj.pret;
    cout<<"Introduceti marca sticlei: ";
    input>>aux;
    obj.marca=strdup(aux);
    delete[] aux;
    return input;
}
ostream& operator << (ostream& output,Sticla& obj){
    output<<"Diametrul dopului este: "<<obj.diametru<<endl;
    output<<"Tipul dopului este: "<<obj.tip<<endl;
    output<<"Pretul sticlei este: "<<obj.pret<<endl;
    output<<"Marca sticlei este: "<<obj.marca<<endl;
    output<<endl;
    return output;
}

int Sticla::getPret() {
    return pret;
}

char *Sticla::getMarca() {
   return marca;
}
void interschimbare(Sticla& a, Sticla &b){
Sticla aux;
aux = a;
a = b;
b= aux ;
}