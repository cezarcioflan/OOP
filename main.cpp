#include <iostream>
#include<vector>

class ACT
{
    std::string nume_act; //muzica, teatru, stand-up etc.

public:
    ACT(const std::string &numeAct) : nume_act(numeAct)
    {
        this->nume_act=nume_act;
    }

    friend std::ostream &operator<<(std::ostream &os, const ACT &act) {
        os << "nume_act: " << act.nume_act;
        return os;
    }

    ACT(const ACT& copie)
    {
        this->nume_act=copie.nume_act;
    }
    ACT operator =(const ACT& copie)
    {
        this->nume_act=copie.nume_act;
    }

    virtual ~ACT() {

    }


};

class DATE_CONTACT
{
    std::string numar_telefon;
    std::string adresa_email;
    float pret_minim; //valoarea de la care pleaca pretul actului artistic
public:
    DATE_CONTACT(const std::string &numarTelefon, const std::string &adresaEmail, float pretMinim) : numar_telefon(
            numarTelefon), adresa_email(adresaEmail), pret_minim(pretMinim)
            {
        this->numar_telefon = numar_telefon;
        this->adresa_email = adresa_email;
        this->pret_minim = pret_minim;
            }

    friend std::ostream &operator<<(std::ostream &os, const DATE_CONTACT &contact) {
        os << "numar_telefon: " << contact.numar_telefon << " adresa_email: " << contact.adresa_email << " pret_minim: "
           << contact.pret_minim;
        return os;
    }


};

class ARTIST
{
    std::string nume;
    std::vector<ACT> act;
    std::vector<DATE_CONTACT> date;

public:
    /*ARTIST(const std::string &nume, const std::vector<ACT> &act, const std::vector<DATE_CONTACT> &date) : nume(nume),
                                                                                                          act(act),
                                                                                                          date(date)
                                                                                                          {
                                                                                                            this->nume=nume;
                                                                                                            this->act=act;
                                                                                                            this->date=date;
                                                                                                          };
                                                                                                          */


    virtual ~ARTIST()
    {

    }

    ARTIST(const std::string &nume) : nume(nume)
    {
        this->nume=nume;
    };
    void adauga_act(ACT act_nou)
    {
        act.push_back(act_nou);
    }

    void adauga_date(DATE_CONTACT date_noi)
    {
        date.push_back(date_noi);
    }

    friend std::ostream &operator<<(std::ostream &os, const ARTIST &artist)
    {
        os << artist.nume<<std::endl;
        for (const auto &p: artist.act)
            os << p;
        os << std::endl;
        for (const auto &j: artist.date)
            os << j;
        os << std::endl;
        return os;
    }


};


class APLICATIE
{
    std::vector<ARTIST> artist;

public:
    APLICATIE()
    {
        std::cout<<"creat Aplicatie";
    };

    virtual ~APLICATIE()
    {
        std::cout<<"distrus Aplicatie";
    }

    void adauga_artist(ARTIST artist_nou)
    {
        artist.push_back(artist_nou);
    }





};

int main() {

    ACT act1=ACT("muzica");
    DATE_CONTACT dc1 = DATE_CONTACT("0757504532","green@goe.ro",500);
    ARTIST artist1 = ARTIST("Green onions experience");
    artist1.adauga_act(act1);
    artist1.adauga_date(dc1);
    std::cout<<artist1;
    APLICATIE a;
    a.adauga_artist(artist1);



    return 0;
}
