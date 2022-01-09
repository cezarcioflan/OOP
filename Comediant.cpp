//
// Created by Cezar on 05.01.2022.
//

#include "Comediant.h"

Comediant::Comediant(const std::string &nume, const std::vector<std::string> &disponibilitate,
                       const std::vector<std::string> &conditii, bool material,const std::vector<std::string> &gluma_seaca,const std::vector<std::string> &observatie) : Artist(nume),
                                                                                  disponibilitate(disponibilitate),
                                                                                  conditii(conditii),
                                                                                  material(material),
                                                                                  gluma_seaca(gluma_seaca),
                                                                                  observatie(observatie){}

std::shared_ptr<Artist> Comediant::clona() const{
    return std::make_shared <Comediant>(*this);
}

void Comediant::mesajul_de_rezervare() {
    std::cout<<std::endl<<"Daca doriti ca acest comediant sa va inveseleasca evenimentul, apelati numarul afisat pe ecran"<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const Comediant &comedianti) {
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

void Comediant::adauga_disponibilitate(const std::string &a) {
    disponibilitate.push_back(a);
}

void Comediant::adauga_conditie(const std::string &a) {
    conditii.push_back(a);
}

void Comediant::prezentare() {
    std::string x;
    std::cout<<std::endl<<"Am o gluma seaca si o observatie. Pe care vrei s-o auzi?"<<std::endl;
    std::cin>>x;
    if(x=="observatia")
        std::cout<<observatie[rand()%observatie.size()];
    if(x=="gluma")
        std::cout<<gluma_seaca[rand()%gluma_seaca.size()];

}

void Comediant::glume_prezentare(const std::string &a, const std::string &b) {

    gluma_seaca.push_back(a);
    observatie.push_back(b);

}

Comediant &Comediant::operator=(const Comediant &copie) {
    this->conditii=copie.conditii;
    this->disponibilitate=copie.disponibilitate;
    this->observatie=copie.observatie;
    this->gluma_seaca=copie.gluma_seaca;
    this->material=copie.material;


    return *this;
}

Comediant::Comediant(const std::string &nume, const Comediant &copie): Artist(nume),conditii(copie.conditii),disponibilitate(copie.disponibilitate),
                                                                        observatie(copie.observatie),gluma_seaca(copie.gluma_seaca),material(copie.material){}



