//
// Created by Cezar on 09.01.2022.
//

//
// Created by Cezar on 08.01.2022.
//

#include "Rezervare.h"

const std::string &Rezervare::getNumele() const {
    return numele;
}

int Rezervare::getOraInceperii() const {
    return ora_inceperii;
}

int Rezervare::getOraTerminarii() const {
    return ora_terminarii;
}

Rezervare::Rezervare(const std::string &locatia, int ziua, const std::string &luna, int anul,
                     int oraInceperii, int oraTerminarii, Artist &A) : numele(A.getNume()), locatia(locatia), ziua(ziua), luna(luna),
                                                                       anul(anul), ora_inceperii(oraInceperii),
                                                                       ora_terminarii(oraTerminarii) {}

const std::string &Rezervare::getLocatia() const {
    return locatia;
}

int Rezervare::getZiua() const {
    return ziua;
}

const std::string &Rezervare::getLuna() const {
    return luna;
}

int Rezervare::getAnul() const {
    return anul;
}

Rezervare::Rezervare() {}

int Rezervare::bilet_simplu(const Artist &a) {

    return (a.arata_pret()/100);

}


int Rezervare::bilet_premium(const Artist &a) {

    return 2*(a.arata_pret()/100) - 10*bilet_simplu(a)/100;

}

void Rezervare::arata_bilete(const Artist &a) {

    std::cout<<"bilet simplu: "<<bilet_simplu(a)<< " euro"<<std::endl;
    std::cout<<"bilet premium: "<<bilet_premium(a)<<" euro \n";

}

rezervare_builder &rezervare_builder::nume(std::string nume) {

    R.numele = nume;
    return *this;
}

rezervare_builder &rezervare_builder::locatia(std::string locatia) {
    R.locatia = locatia;
    return *this;
}

rezervare_builder &rezervare_builder::ziua(int zi) {
    R.ziua = zi;
    return *this;
}


rezervare_builder &rezervare_builder::luna(std::string luna) {
    R.luna = luna;
    return *this;
}


rezervare_builder &rezervare_builder::anul(int an) {
    R.anul = an;
    return *this;
}

rezervare_builder &rezervare_builder::ora_i(int ora) {
    R.ora_inceperii = ora;
    return *this;
}


rezervare_builder &rezervare_builder::ora_s(int ora) {
    R.ora_terminarii = ora;
    return *this;
}

Rezervare rezervare_builder::build() {
    return R;
}
