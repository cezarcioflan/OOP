//
// Created by Cezar on 20.12.2021.
//

#include "Cantaret.h"



void Cantaret::adauga_melodie(const std::string &cantec) {
    playlist.push_back(cantec);

}

void Cantaret::arata_playlist() {
    for(int i=0; i<playlist.size();i++) {
        std::cout<<std::endl<<playlist[i];
    }


}
    std::shared_ptr<Artist> Cantaret::clona() const{
        return std::make_shared <Cantaret>(*this);
    }

std::ostream &operator<<(std::ostream &os, const Cantaret &cantareti) {
    os <<std::endl<<std::endl<<static_cast<const Artist &>(cantareti) <<std::endl<< "nume show: " << cantareti.nume_show<<std::endl
       << "durata: " << cantareti.durata<<" de minute" <<std::endl<< "restrictie varsta: ";
    if(cantareti.restrictie_varsta==1)
        os<<"Da";
    else
        os<<"Nu";
    return os;
}


Cantaret& Cantaret::operator=(const Cantaret &copie) {
    this->nume_show=copie.nume_show;
    this->durata=copie.durata;
    this->restrictie_varsta=copie.restrictie_varsta;
    this->playlist=copie.playlist;
    this->gen=copie.gen;

    return *this;
}



void Cantaret::mesajul_de_rezervare() {
    std::cout<<std::endl<<std::endl<<"Daca doresti ca ";
    if(gen==tip::cantaret)
        std::cout<<"acest cantaret ";
    if(gen==tip::cantareata)
        std::cout<<"aceasta cantareata ";
    if(gen==tip::formatie)
        std::cout<<"aceasta trupa ";
    std::cout<<"sa cante la evenimentul tau, apeleaza numarul afisat pe ecran!"<<std::endl<<std::endl;
}

Cantaret::Cantaret(const std::string &nume, const std::string &numeShow, const std::vector<std::string> &playlist,
                     int durata, const tip gen, bool restrictieVarsta) : Artist(nume), nume_show(numeShow),
                                                                   playlist(playlist), durata(durata), gen(gen),
                                                                   restrictie_varsta(restrictieVarsta) {}

void Cantaret::prezentare() {

    int j = rand() % playlist.size();

    std::cout<<"Daca iti doresti sa auzi "<<playlist[j]<<" live, aceasta este cea mai buna alegere";

}

Cantaret::Cantaret(const std::string &nume, const Cantaret &copie) : Artist(nume), nume_show(copie.nume_show),
                                                                     durata(copie.durata),
                                                                     restrictie_varsta(copie.restrictie_varsta),
                                                                     gen(copie.gen) {}












