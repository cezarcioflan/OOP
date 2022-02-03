//
// Created by Cezar on 18.12.2021.
//
#include "Act.h"

Act::Act(const std::string &numeAct, int pretMinim, const std::string &codReducere, int reducere) : nume_act(numeAct),
                                                                                                    pret_minim(
                                                                                                            pretMinim),
                                                                                                    cod_reducere(
                                                                                                            codReducere),
                                                                                                    reducere(reducere){
}


std::ostream &operator<<(std::ostream &os, const Act &act) {
   os << "nume_act: " << act.nume_act << " pret_minim: "<<act.pret_minim;
    return os;
}




void Act::aplica_reducere(const std::string &codReducere) {

    if(codReducere==cod_reducere) {
        pret_minim = pret_minim - (pret_minim * reducere / 100);
        reducere = 0;
    }

}

int Act::getPretMinim() const {
    return pret_minim;
}

Act::Act(): nume_act("null"),pret_minim(0),cod_reducere("null"),reducere(0){}








