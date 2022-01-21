//
// Created by Cezar on 10.01.2022.
//

#include "Festival.h"

template <typename T>
Festival<T>::Festival(const std::string &nume, int luna, int ziInceput, int ziSfarsit, const std::string &oras,
                   T pretBilet) : nume(nume), luna(luna), zi_inceput(ziInceput), zi_sfarsit(ziSfarsit), oras(oras),
                                    pret_bilet(pretBilet) {}

template <typename T>
std::ostream &operator<<(std::ostream &os, const Festival<T> &festival) {
    os << "nume: " << festival.nume << " luna: " << festival.luna << " zi_inceput: " << festival.zi_inceput
       << " zi_sfarsit: " << festival.zi_sfarsit << " oras: " << festival.oras << " pret_bilet: "
       << festival.pret_bilet;
    return os;
}

template <typename T>
Festival<float> Festival_factory<T>::electric_castle() {
    return Festival<float>("Electric_Castle",8,20,25,"Bontida-Cluj",349.99);
}
template <typename T>
Festival<int> Festival_factory<T>::untold() {
    return Festival<int>("Untold",8,12,17,"Cluj",450);
}

template <typename T>
Festival<float> Festival_factory<T>::comedy_fest() {
    return Festival<float>("Comedy Fest",12,12,13,"Brasov",100.99);
}
