//
// Created by Cezar on 18.12.2021.
//

#ifndef MAIN_PROJECT_ACT_H
#define MAIN_PROJECT_ACT_H
#include<string>
#include<iostream>
class Act
{
    std::string nume_act; //muzica, teatru, stand-up etc.
    std::string pret_minim; //valoarea de la care pleaca pretul actului artistic
public:


    Act(const std::string &numeAct,const std::string &pretMinim);

    friend std::ostream &operator<<(std::ostream &os, const Act &act);

    Act(const Act& copie);

    const std::string &getNumeAct() const;

    Act operator =(const Act& copie);

    ~Act()
    {

    };


};

#endif //MAIN_PROJECT_ACT_H
