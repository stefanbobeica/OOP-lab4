

#ifndef LAB4_DOP_H
#define LAB4_DOP_H
#include <iostream>
#include <cstring>
using namespace  std;
class Dop {
protected:
    int diametru;
    char *tip;
public:
    Dop();
    Dop( const int , const char *t);
    ~Dop();
    Dop( const Dop& obj);
     Dop& operator = (Dop&);
    int getDiametru();
    char * getTip();

};




#endif //LAB4_DOP_H
