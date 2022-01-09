//
// Created by Cezar on 18.12.2021.
//

#include "Aplicatie.h"

Aplicatie::Aplicatie() {

    std::cout<<std::endl<<"creat Aplicatie \n";
}

Aplicatie::~Aplicatie() {
    std::cout<<std::endl<<"distrus Aplicatie \n";
}

void Aplicatie::adauga_artist(const Artist &artist_nou) {
    artisti.push_back(artist_nou.clona());
    //nume.push_back(artist_nou.getNume());
}




std::ostream &operator<<(std::ostream &os, const Aplicatie &aplicatie) {
    for(const auto &p: aplicatie.artisti)
        os<<*p;
    return os;
}

const std::vector<std::shared_ptr<Artist>> &Aplicatie::getArtist() const {
    return artisti;
}



void Aplicatie::sorteaza_artisti_alfabetic() {

    std::sort(artisti.begin(), artisti.end(), [](const auto& a, const auto& b) {
        return a->getNume() < b->getNume();
    });
}

void Aplicatie::afiseaza_artisti() {

    for(int i=0; i < artisti.size(); i++)
        std::cout << "\n" << artisti[i]->getNume();

}

void Aplicatie::sorteaza_artisti_dupa_pret() {

    std::sort(artisti.begin(), artisti.end(), [](const auto& a, const auto& b) {
        return a->arata_pret() < b->arata_pret();
    });
}

int Aplicatie::verifica_rezervari(const Rezervare &R) {

    for(int i = 0;i<rez.size();i++)
    {
        if(rez[i].getNumele()==R.getNumele() && rez[i].getAnul()==R.getAnul() && rez[i].getLuna()==R.getLuna() && rez[i].getZiua() == R.getZiua())
        {
            if(R.getOraTerminarii() < rez[i].getOraInceperii() || R.getOraInceperii() > rez[i].getOraTerminarii())
            {
                return 0;
            }
            else
            {
                return 1;
            }

        }
    }

    return 0;

}

void Aplicatie::confirma_rezervare(const Rezervare &R) {

    if(verifica_rezervari(R) == 1)
    {
        std::cout<<std::endl<<"Data este indisponibila \n";
    }
    else
    {
        rez.push_back(R);
        std::cout<<std::endl<<"Rezervarea a fost facuta \n";
    }

}

void Aplicatie::arata_rezervare(const Artist &A) {

    for(int i=0;i<rez.size();i++)
        std::cout<<std::endl<<rez[i].getNumele()<<" "<<rez[i].getZiua()<<" "<<rez[i].getLuna()<<" "<<rez[i].getAnul()<<" "<<rez[i].getLocatia()<<" "<<rez[i].getOraInceperii()<<" "<<rez[i].getOraTerminarii()<<std::endl;


}

void Aplicatie::arata_rezervari() {

    for(int i=0;i<rez.size();i++)
        std::cout<<std::endl<<rez[i].getNumele()<<" "<<rez[i].getZiua()<<" "<<rez[i].getLuna()<<" "<<rez[i].getAnul()<<" "<<rez[i].getLocatia()<<" "<<rez[i].getOraInceperii()<<" "<<rez[i].getOraTerminarii()<<std::endl;



}































