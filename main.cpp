#include <iostream>
#include "Sticla.h"
 using namespace  std;
int main() {
    Sticla *v;
   v= new Sticla[3];
   for (int i=0 ; i<3 ; i++){
       cout<<"Sticla "<<i+1<<": "<<endl;
       cin>>v[i];
   }
   for (int i=0; i<3;i++)
       for(int j=i;j<3;j++){
       if(v[i].getPret()>v[j].getPret())
           interschimbare(v[i],v[j]);
       }
   for(int i=0; i<3 ; i++){
       if(v[i].getDiametru()>5)
       cout<<"Sticla "<<i+1<<":"<<endl<<v[i];

   }

    return 0;
}
