//
// Created by Cezar on 20.12.2021.
//

#include "Cantareti.h"

//void Cantareti::setShow(const std::string &numeShow,int durata_noua,bool restrictieVarsta)
//{
    //nume_show = numeShow;
    //this->durata=durata_noua;
   // restrictie_varsta=restrictieVarsta;
//}

//Cantareti::Cantareti(const std::string &nume): Artist(nume) {
   // std::cout<<std::endl<<"creat cantaret";

//}



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
    os << static_cast<const Artist &>(cantareti) << " nume_show: " << cantareti.nume_show
       << " durata: " << cantareti.durata << " restrictie_varsta: "
       << cantareti.restrictie_varsta;
    return os;
}


Cantareti& Cantareti::operator=(const Cantareti &copie) {
    this->nume_show=copie.nume_show;
    this->durata=copie.durata;

    return *this;
}

Cantareti::Cantareti(const std::string &nume, const std::string &numeShow,int durata, bool restrictieVarsta) : Artist(nume), nume_show(numeShow),
                                                          durata(durata), restrictie_varsta(restrictieVarsta) {}







