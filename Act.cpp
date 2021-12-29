//
// Created by Cezar on 18.12.2021.
//
#include "Act.h"

Act::Act(const std::string &numeAct, const std::string &pretMinim) : nume_act(numeAct), pret_minim(pretMinim)
{
    //this->nume_act=nume_act;
    //this->pret_minim=pret_minim;
}

Act::Act(const Act &copie) {
    this->nume_act=copie.nume_act;
    this->pret_minim=copie.pret_minim;
}

std::ostream &operator<<(std::ostream &os, const Act &act) {
   os << "nume_act: " << act.nume_act << " pret_minim: "<<act.pret_minim;
    return os;
}

Act Act::operator=(const Act &copie) {
    this->nume_act=copie.nume_act;
    this->pret_minim=copie.pret_minim;

    return *this;
}


