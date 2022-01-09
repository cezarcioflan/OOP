#include<iostream>
#include"Act.h"
#include"Date_contact.h"
#include"Artist.h"
#include"Aplicatie.h"
#include"Cantareti.h"
#include"Comedianti.h"
#include"Animatori.h"
#include"Rezervari.h"






int main() {
    Aplicatie A;
    Rezervari R;
    Cantareti cantaret1 = Cantareti("Green onions experience","concert",{"hey joe","all along the watchtower","purple haze"},120,1,false);
    Comedianti comediant1 = Comedianti("Costel Bojog",{"oricand"},{"n-am"},true);
    Date_Contact dc1 = Date_Contact("0755394274","green@goe.ro");
    Act act1 = Act("muzica",500,"yecgaa",10);
    Date_Contact dc2("0746352948","costel@bojog.ro");
    Act act2 = Act("stand-up",1000,"costel99",15);
    cantaret1.adauga_act(act1);
    cantaret1.adauga_date(dc1);
    comediant1.adauga_act(act2);
    comediant1.adauga_date(dc2);
    //std::cout<<cantaret1;
    //cantaret1.mesajul_de_rezervare();
    A.adauga_artist(cantaret1);
    A.adauga_artist(comediant1);
    Rezervari R1 = Rezervari("Cluj",20,"martie",2022,18,20,cantaret1);
    R.confirma_rezervare(R1);
    //R.arata_rezervare(cantaret1);
    Rezervari R2 = Rezervari("Bucuresti",23,"iunie",2022,20,22,comediant1);
    R.confirma_rezervare(R2);
    R.arata_rezervari();
    //std::cout<<R.bilet_simplu(cantaret1);
    //std::cout<<R.bilet_premium(cantaret1);
    R.arata_bilete(comediant1);
    std::cout<<std::endl;
    Rezervari R3 = Rezervari("Cluj",20,"martie",2022,10,22,cantaret1);
    R.confirma_rezervare(R3);
    R.arata_rezervari();
    cantaret1.prezentare();
    comediant1.glume_prezentare("Cum se numeste un labrador care e magician? -Un Labracadabrador"
            ,"Cand dormi prost toata noaptea, este imposibil sa te trezesti destept dimineata.");
    comediant1.prezentare();
    Animatori animator1=Animatori("Vlad Grigorescu",{"prestidigitatie","mentalism","iluzionism"},"magician");
    animator1.prezentare();
    std::cout<<animator1;





    //std::cout<<A;
    //C.push_back(cantaret1);
    //std::cout<<C[0];








    return 0;
}
