//
// Created by stefa on 11/11/2021.
//

#include "Dop.h"
using namespace  std;
Dop::Dop():diametru(0),tip(nullptr){
//cout<<"Constructor fara parametri"<<endl;
}
Dop::Dop(const int d, const char *t) {
 diametru =d;
 tip= strdup(t);
}

Dop::~Dop() {
delete [] tip;
//cout<<"Obiectul de tip dop a fost distrus"<<endl;
}

Dop::Dop(const Dop &obj) {
 diametru=obj.diametru;
 tip=strdup(obj.tip);
}

Dop& Dop::operator=(Dop & obj) {
   Dop temp(obj);
    return  temp;
}

int Dop::getDiametru() {
    return diametru;
}

char *Dop::getTip() {
    return tip;
}
