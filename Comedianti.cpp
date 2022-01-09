//
// Created by Cezar on 05.01.2022.
//

#include "Comedianti.h"

Comedianti::Comedianti(const std::string &nume, const std::vector<std::string> &disponibilitate,
                       const std::vector<std::string> &conditii, bool material) : Artist(nume),
                                                                                  disponibilitate(disponibilitate),
                                                                                  conditii(conditii),
                                                                                  material(material) {}

std::shared_ptr<Artist> Comedianti::clona() const{
    return std::make_shared <Comedianti>(*this);
}

void Comedianti::mesajul_de_rezervare() {
    std::cout<<std::endl<<"Daca doriti ca acest comediant sa va inveseleasca evenimentul, apelati numarul afisat pe ecran"<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const Comedianti &comedianti) {
    os <<std::endl<<std::endl<< static_cast<const Artist &>(comedianti)<<std::endl ;
    os<< "disponibilitate: ";
    for(int i=0;i<comedianti.disponibilitate.size();i++)
        os<<comedianti.disponibilitate[i]<<" ";
    os<<std::endl<<"conditii: ";
    for(int i=0;i<comedianti.conditii.size();i++)
        os<<comedianti.conditii[i]<<" "<<std::endl;
       os<<"material: ";
       if(comedianti.material==1)
           os<<"Da";
       else
           os<<"Nu";
    return os;
}

void Comedianti::adauga_disponibilitate(const std::string &a) {
    disponibilitate.push_back(a);
}

void Comedianti::adauga_conditie(const std::string &a) {
    conditii.push_back(a);
}

void Comedianti::prezentare() {
    std::string x;
    std::cout<<std::endl<<"Am o gluma seaca si o observatie. Pe care vrei s-o auzi?"<<std::endl;
    std::cin>>x;
    if(x=="observatia")
        std::cout<<observatie;
    if(x=="gluma")
        std::cout<<gluma_seaca;

}

void Comedianti::glume_prezentare(const std::string &a, const std::string &b) {

    gluma_seaca = a;
    observatie = b;

}


