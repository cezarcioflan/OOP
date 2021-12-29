#include <iostream>
//#include<vector>
#include"Act.h"
#include"Date_contact.h"
#include"Artist.h"
#include"Aplicatie.h"
#include"Cantareti.h"






int main() {
    std::vector<Cantareti> C;
    Aplicatie A;
    Act act1=Act("muzica","500 euro");
    Date_Contact dc1 = Date_Contact("0757504532", "green@goe.ro");
    Cantareti cantaret1 = Cantareti("Green onions experience");
    cantaret1.adauga_date(dc1);
    cantaret1.adauga_act(act1);
    cantaret1.adauga_melodie("Wind cries Mary cover");
    cantaret1.adauga_melodie("All along the watchtower");
    cantaret1.arata_playlist();
    A.adauga_artist(cantaret1);
    //std::cout<<A;
    C.push_back(cantaret1);
    std::cout<<C[0];







    return 0;
}
