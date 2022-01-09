//
// Created by Cezar on 06.01.2022.
//

#include "Animator.h"


std::shared_ptr<Artist> Animator::clona() const{
    return std::make_shared <Animator>(*this);
}

void Animator::mesajul_de_rezervare() {
    std::cout<<"Daca doresti ca acest animator sa faca evenimentul tau memorabil, apeleaza numarul afisat pe ecran";
}

Animator::Animator(const std::string &nume, const std::vector<std::string> &aptitudini,
                     const meserie &tip) : Artist(nume), aptitudini(aptitudini),
                                                                tip(tip) {}

void Animator::adauga_aptitudine(const std::string &a) {
    aptitudini.push_back(a);
}

void Animator::prezentare() {

    if(tip==meserie::magician)
    {   std::cout<<std::endl;
        std::cout<<"                  ."<<std::endl;
        std::cout<<std::endl;
        std::cout<<"                     ."<<std::endl; //ascii arturile sunt de pe https://asciiart.website/
        std::cout<<"         /^\\\\    ."<<std::endl;
        std::cout<<"    /\\   \"V\""<<std::endl;
        std::cout<<"   /__\\   I      O  o"<<std::endl;
        std::cout<<"  //..\\\\  I     ."<<std::endl;
        std::cout<<"  \\].`[/  I"<<std::endl;
        std::cout<<"  /l\\/j\\  (]    .  O"<<std::endl;
        std::cout<<" /. ~~ ,\\/I          ."<<std::endl;
        std::cout<<" \\\\L__j^\\/I       o"<<std::endl;
        std::cout<<"  \\/--v}  I     o   ."<<std::endl;
        std::cout<<"  |    |  I   _________"<<std::endl;
        std::cout<<"  |    |  I c(`       ')o"<<std::endl;
        std::cout<<"  |    l  I   \\.     ,/"<<std::endl;
        std::cout<<"_/j  L l\\_!  _//^---^\\\\_ jgs "<<std::endl;

    }
    else if(tip == meserie::clown)
    {
        std::cout<<std::endl;
        std::cout<<"       ,            _..._            ,"<<std::endl;
        std::cout<<"      {'.         .'     '.         .'}"<<std::endl;
        std::cout<<"     { ~ '.      _|=    __|_      .'  ~}"<<std::endl;
        std::cout<<"    { ~  ~ '-._ (___________) _.-'~  ~  }"<<std::endl;
        std::cout<<"   {~  ~  ~   ~.'           '. ~    ~    }"<<std::endl;
        std::cout<<"  {  ~   ~  ~ /   /\\     /\\   \\   ~    ~  }"<<std::endl;
        std::cout<<"  {   ~   ~  /    __     __    \\ ~   ~    }"<<std::endl;
        std::cout<<"   {   ~  /\\/  -<( o)   ( o)>-  \\/\\ ~   ~}"<<std::endl;
        std::cout<<"    { ~   ;(      \\/ .-. \\/      );   ~ }"<<std::endl;
        std::cout<<"     { ~ ~\\_  ()  ^ (   ) ^  ()  _/ ~  }"<<std::endl;
        std::cout<<"       '-._~ \\   (`-._'-'_.-')   / ~_.-'"<<std::endl;
        std::cout<<"          '--\\   `'._'\"'_.'`   /--'"<<std::endl;
        std::cout<<"              \\     \\`-'/     /"<<std::endl;
        std::cout<<"               `\\    '-'    /'"<<std::endl;
        std::cout<<"           jgs   `\\       /'"<<std::endl;
        std::cout<<"                   '-...-'"<<std::endl;

    }
    else if(tip==meserie::actor)
    {
        std::cout<<std::endl;
        std::cout<<"                         ,A"<<std::endl;
        std::cout<<"                        g@@"<<std::endl;
        std::cout<<"    A.                 d@V@"<<std::endl;
        std::cout<<"    i@b               iA` @                    .A"<<std::endl;
        std::cout<<"    i@V@s            dA`  @                   ,@@i"<<std::endl;
        std::cout<<"    i@ '*@Ws______mW@f    @@                  ]@@@"<<std::endl;
        std::cout<<"     @]  '^********f`     @@@                g@!l@"<<std::endl;
        std::cout<<"     @b           .  ,g   @@@W             ,W@[ l@"<<std::endl;
        std::cout<<"     ]@   Mmmmmf  ~**f^   @@^@@Wm_.      _g@@`  l@"<<std::endl;
        std::cout<<"      M[    ^^      ^^    @@  ^*@@@@@@@@@@@f`   l@"<<std::endl;
        std::cout<<"      ]@i  '[]`  . '[]`   @@      ~~~~~~~`      l@"<<std::endl;
        std::cout<<"      '@W       |[        @@               _.   l@"<<std::endl;
        std::cout<<"       Y@i      'Ns    .  @@   _m@@m,    g*~VWi l@"<<std::endl;
        std::cout<<"        M@. ,.       g@` ]@@  gP    V,  '  m- ` l@"<<std::endl;
        std::cout<<"        '@W  Vmmmmmm@f   @@@. ~  m-    g   '    l@"<<std::endl;
        std::cout<<"         '@b  'V***f    g@A@W    '     @        l@"<<std::endl;
        std::cout<<"          '*W_         g@A`M@b       g M_.      l@"<<std::endl;
        std::cout<<"            'VMms___gW@@f   @@.      '- ~`      W@"<<std::endl;
        std::cout<<"               ~*****f~`     @@.     ,_m@Ws__   @@"<<std::endl;
        std::cout<<"                             '@@.   gA~`   ~~* ]@P"<<std::endl;
        std::cout<<"                               M@s.'`         g@A"<<std::endl;
        std::cout<<"                                V@@Ws.    __m@@A"<<std::endl;
        std::cout<<"                                  ~*M@@@@@@@@*`   David Laundra"<<std::endl;


    }


}

std::ostream &operator<<(std::ostream &os, const Animator &animatori) {
    os << static_cast<const Artist &>(animatori) <<std::endl<<"meserie: ";
    //<<animatori.tip<<std::endl<<"aptitudini: ";
    if(animatori.tip==meserie::magician)
        std::cout<<"magician\n";
    else if(animatori.tip==meserie::clown)
        std::cout<<"clown\n";
    else if(animatori.tip==meserie::actor)
        std::cout<<"actor\n";
    std::cout<<"aptitudini: ";
    for(int i=0;i<animatori.aptitudini.size();i++)
    os<<animatori.aptitudini[i]<<" ";


    return os;
}
