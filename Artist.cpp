//
// Created by Cezar on 18.12.2021.
//
#include"Artist.h"


Artist::Artist(const std::string &nume) : nume(nume){

    if (nume.size() < 2)
        throw eroare_nume();
    this->nume=nume;

}


void Artist::adauga_act(const Act &actul) {
    act=actul;
}

void Artist::adauga_date(const Date_Contact &datele_noi) {
    date=datele_noi;
}

std::ostream &operator<<(std::ostream &os, const Artist &artist) {
    os << artist.nume<<std::endl;
        os << artist.act;
    os << std::endl;
        os << artist.date;

    return os;
}

void Artist::setNume(const std::string &numele) {
    this->nume = numele;
}

const std::string &Artist::getNume() const {
    return nume;
}

int Artist::arata_pret() const {
    return act.getPretMinim();
}

void Artist::adauga_festival(const Festival<float> &festival) {

    festivaluri.push_back(festival);

}
















