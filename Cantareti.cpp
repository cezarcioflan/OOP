//
// Created by Cezar on 20.12.2021.
//

#include "Cantareti.h"



void Cantareti::adauga_melodie(const std::string &cantec) {
    playlist.push_back(cantec);

}

void Cantareti::arata_playlist() {
    for(int i=0; i<playlist.size();i++) {
        std::cout<<std::endl<<playlist[i];
    }


}
    std::shared_ptr<Artist> Cantareti::clona() const{
        return std::make_shared <Cantareti>(*this);
    }

std::ostream &operator<<(std::ostream &os, const Cantareti &cantareti) {
    os <<std::endl<<std::endl<<static_cast<const Artist &>(cantareti) <<std::endl<< "nume show: " << cantareti.nume_show<<std::endl
       << "durata: " << cantareti.durata<<" de minute" <<std::endl<< "restrictie varsta: ";
    if(cantareti.restrictie_varsta==1)
        os<<"Da";
    else
        os<<"Nu";
    return os;
}


Cantareti& Cantareti::operator=(const Cantareti &copie) {
    this->nume_show=copie.nume_show;
    this->durata=copie.durata;
    this->restrictie_varsta=copie.restrictie_varsta;

    return *this;
}



void Cantareti::mesajul_de_rezervare() {
    std::cout<<std::endl<<std::endl<<"Daca doresti ca ";
    if(tip==1)
        std::cout<<"acest cantaret ";
    if(tip==2)
        std::cout<<"aceasta căntareata ";
    if(tip==3)
        std::cout<<"aceasta trupa ";
    std::cout<<"sa cante la evenimentul tau, apeleaza numarul afisat pe ecran!"<<std::endl<<std::endl;
}

Cantareti::Cantareti(const std::string &nume, const std::string &numeShow, const std::vector<std::string> &playlist,
                     int durata, int tip, bool restrictieVarsta) : Artist(nume), nume_show(numeShow),
                                                                   playlist(playlist), durata(durata), tip(tip),
                                                                   restrictie_varsta(restrictieVarsta) {}

void Cantareti::prezentare() {

    srand(time(NULL));
    int j = rand() % playlist.size();

    std::cout<<"Daca iti doresti sa auzi "<<playlist[j]<<" live, aceasta este cea mai buna alegere";

}










