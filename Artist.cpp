//
// Created by Cezar on 18.12.2021.
//
#include"Artist.h"


Artist::Artist(const std::string &nume) : nume(nume)
{
    this->nume=nume;

}


void Artist::adauga_act(const Act &actul) {
    act.push_back(actul);
}

void Artist::adauga_date(const Date_Contact &datele_noi) {
    date.push_back(datele_noi);
}

std::ostream &operator<<(std::ostream &os, const Artist &artist) {
    os << artist.nume<<std::endl;
    for (const auto &p: artist.act)
        os << p;
    os << std::endl;
    for (const auto &j: artist.date)
        os << j;
    os << std::endl;
    return os;
}


void Artist::setNume(const std::string &numele) {
    this->nume = numele;
}



