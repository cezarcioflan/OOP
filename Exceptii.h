//
// Created by Cezar on 19.01.2022.
//

#ifndef MAIN_PROJECT_EXCEPTII_H
#define MAIN_PROJECT_EXCEPTII_H
#include<stdexcept>
#include<string>


class eroare_artist : public std::runtime_error {
public:
    eroare_artist(const std::string &arg);
};

class eroare_nume : public eroare_artist{
public:
    eroare_nume();
};

class eroare_durata :public eroare_artist{
public:
    eroare_durata();

};

class eroare_act : std::runtime_error{
public:
    eroare_act(const std::string &arg);

};

class eroare_pret : public eroare_act{
public:
    eroare_pret();
};



#endif //MAIN_PROJECT_EXCEPTII_H
