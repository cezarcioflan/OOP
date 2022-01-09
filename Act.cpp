//
// Created by Cezar on 18.12.2021.
//
#include "Act.h"

Act::Act(const std::string &numeAct, int pretMinim, const std::string &codReducere, int reducere) : nume_act(numeAct),
                                                                                                    pret_minim(
                                                                                                            pretMinim),
                                                                                                    cod_reducere(
                                                                                                            codReducere),
                                                                                                    reducere(
                                                                                                            reducere) {}


std::ostream &operator<<(std::ostream &os, const Act &act) {
   os << "nume_act: " << act.nume_act << " pret_minim: "<<act.pret_minim;
    return os;
}

Act &Act::operator=(const Act &copie) {
    this->nume_act=copie.nume_act;
    this->pret_minim=copie.pret_minim;
    this->cod_reducere=copie.cod_reducere;
    this->reducere=copie.reducere;

    return *this;
}

void Act::aplica_reducere(const std::string &codReducere) {

    if(codReducere==cod_reducere)
        pret_minim=pret_minim-(pret_minim*reducere/100);
    reducere = 0 ;

}

int Act::getPretMinim() const {
    return pret_minim;
}






