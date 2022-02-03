//
// Created by Cezar on 10.01.2022.
//

#ifndef MAIN_PROJECT_FESTIVAL_H
#define MAIN_PROJECT_FESTIVAL_H
#include<string>
#include<iostream>

template <typename T>
class Festival;

template <typename T>
std::ostream& operator<<(std::ostream& os, const Festival<T> &festival);

template <typename T>
class Festival {
    std::string nume;
    int luna;
    int zi_inceput;
    int zi_sfarsit;
    std::string oras;
    T pret_bilet;

public:
    Festival(const std::string &nume, int luna, int ziInceput, int ziSfarsit, const std::string &oras, T pretBilet);

    friend std::ostream &operator<< <>(std::ostream &, const Festival<T> &);

};
template <typename T>
class Festival_factory;

template <typename T>
class Festival_factory{
public:
    static Festival<T> electric_castle();
    static Festival<T> untold();
    static Festival<T> comedy_fest();


};


#endif //MAIN_PROJECT_FESTIVAL_H
