//
// Created by Cezar on 19.01.2022.
//

#include "Exceptii.h"

eroare_nume::eroare_nume() :
    eroare_artist("Nume prea scurt"){};


eroare_artist::eroare_artist(const std::string &arg):
    std::runtime_error("Eroare artist:" +arg){};


eroare_durata::eroare_durata() :
    eroare_artist("durata prea scurta"){};


eroare_act::eroare_act(const std::string &arg) :
    std::runtime_error("Eroare act:" +arg){};

eroare_pret::eroare_pret() :
    eroare_act("pretul este invalid"){};


