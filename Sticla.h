
#ifndef LAB4_STICLA_H
#define LAB4_STICLA_H
#include "Dop.h"
#include <iostream>
#include <cstring>
class Sticla: public Dop {
 int pret;
 char *marca;
public:
    Sticla();
    Sticla( const int , const char *, const int , const char *);
    Sticla(const Sticla& obj);
    ~Sticla();
    Sticla& operator=(const Sticla& );
    friend  istream& operator >>(istream& ,Sticla &);
    friend ostream& operator <<(ostream& ,Sticla&);
    int getPret();
    char *getMarca();
    friend void interschimbare(Sticla&, Sticla&);
};


#endif //LAB4_STICLA_H
