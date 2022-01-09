//
// Created by Cezar on 09.01.2022.
//

//
// Created by Cezar on 08.01.2022.
//

#include "Rezervare.h"

/*void Rezervare::confirma_rezervare(const Rezervare &R) {

    if(verifica_rezervari(R) == 1)
    {
        std::cout<<std::endl<<"Data este indisponibila ";
    }
    else
    {
        rez.push_back(R);
        std::cout<<std::endl<<"Rezervarea a fost facuta ";
    }

}*/



/*void Rezervare::arata_rezervare(const Artist &A) {
    for(int i=0;i<rez.size();i++)
    {
        if(rez[i].getNumele() == A.getNume())
        {
            std::cout<<std::endl<<rez[i].getNumele()<<" "<<rez[i].getZiua()<<" "<<rez[i].getLuna()<<" "<<rez[i].getAnul()<<" "<<rez[i].getLocatia()<<" "<<rez[i].getOraInceperii()<<" "<<rez[i].getOraTerminarii()<<std::endl;
        }
    }
}*/

const std::string &Rezervare::getNumele() const {
    return numele;
}

int Rezervare::getOraInceperii() const {
    return ora_inceperii;
}

int Rezervare::getOraTerminarii() const {
    return ora_terminarii;
}

Rezervare::Rezervare(const std::string &locatia, int ziua, const std::string &luna, int anul,
                     int oraInceperii, int oraTerminarii, Artist &A) : numele(A.getNume()), locatia(locatia), ziua(ziua), luna(luna),
                                                                       anul(anul), ora_inceperii(oraInceperii),
                                                                       ora_terminarii(oraTerminarii) {}

const std::string &Rezervare::getLocatia() const {
    return locatia;
}

int Rezervare::getZiua() const {
    return ziua;
}

const std::string &Rezervare::getLuna() const {
    return luna;
}

int Rezervare::getAnul() const {
    return anul;
}

Rezervare::Rezervare() {}

/*void Rezervare::arata_rezervari() {

    for(int i=0;i<rez.size();i++)
        std::cout<<std::endl<<rez[i].getNumele()<<" "<<rez[i].getZiua()<<" "<<rez[i].getLuna()<<" "<<rez[i].getAnul()<<" "<<rez[i].getLocatia()<<" "<<rez[i].getOraInceperii()<<" "<<rez[i].getOraTerminarii()<<std::endl;


}*/

int Rezervare::bilet_simplu(const Artist &a) {

    return (a.arata_pret()/100);

}


int Rezervare::bilet_premium(const Artist &a) {

    return 2*(a.arata_pret()/100) - 10*bilet_simplu(a)/100;

}

void Rezervare::arata_bilete(const Artist &a) {

    std::cout<<"bilet simplu: "<<bilet_simplu(a)<< " euro"<<std::endl;
    std::cout<<"bilet premium: "<<bilet_premium(a)<<" euro \n";

}

/*int Rezervare::verifica_rezervari(const Rezervare &R) {

    for(int i = 0;i<rez.size();i++)
    {
        if(rez[i].getNumele()==R.getNumele() && rez[i].getAnul()==R.getAnul() && rez[i].getLuna()==R.getLuna() && rez[i].getZiua() == R.getZiua())
        {
            if(R.getOraTerminarii() < rez[i].getOraInceperii() || R.getOraInceperii() > rez[i].getOraTerminarii())
            {
                return 0;
            }
            else
            {
                return 1;
            }

        }
    }

    return 0;

}
 */
