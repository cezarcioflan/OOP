//
// Created by Cezar on 18.12.2021.
//

#ifndef MAIN_PROJECT_ACT_H
#define MAIN_PROJECT_ACT_H
#include<string>
#include<iostream>
#include<cstring>
#include"Exceptii.h"
class Act
{

    std::string nume_act; //muzica, teatru, stand-up etc.
    int pret_minim; //valoarea de la care pleaca pretul actului artistic
    std::string cod_reducere;
    int reducere;
public:


    Act(const std::string &numeAct, int pretMinim, const std::string &codReducere, int reducere);

    friend std::ostream &operator<<(std::ostream &os, const Act &act);

    //const std::string &getNumeAct() const;

    Act& operator =(const Act &copie) = default;

    void aplica_reducere(const std::string &codReducere);

    ~Act() = default;

    int getPretMinim() const;

    //Act(Act &copie);


};

#endif //MAIN_PROJECT_ACT_H
