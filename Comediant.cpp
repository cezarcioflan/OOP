//
// Created by Cezar on 05.01.2022.
//

#include "Comediant.h"



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
    std::cout<<std::endl<<"Am o gluma seaca si o observatii. Pe care vrei s-o auzi?"<<std::endl;
    std::cin>>x;
    if(x=="observatia")
        std::cout << observatii[rand() % observatii.size()];
    if(x=="gluma")
        std::cout << glume_seci[rand() % glume_seci.size()];

}

void Comediant::glume_prezentare(const std::string &a, const std::string &b) {

    glume_seci.push_back(a);
    observatii.push_back(b);

}

Comediant &Comediant::operator=(const Comediant &copie) {
    this->conditii=copie.conditii;
    this->disponibilitate=copie.disponibilitate;
    this->observatii=copie.observatii;
    this->glume_seci=copie.glume_seci;
    this->material=copie.material;


    return *this;
}



Comediant::Comediant(const std::string &nume, const Act &act, const Date_Contact &date,
                     const std::vector<Festival<float>> &festivaluri, const std::vector<std::string> &disponibilitate,
                     const std::vector<std::string> &conditii, bool material,
                     const std::vector<std::string> &glumaSeaca, const std::vector<std::string> &observatie) : Artist(
        nume, act, date, festivaluri), disponibilitate(disponibilitate), conditii(conditii), material(material),
                                                                                                               glume_seci(
                                                                                                                       glumaSeaca),
                                                                                                               observatii(
                                                                                                                       observatie) {}



