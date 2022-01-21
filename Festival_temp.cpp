//
// Created by Cezar on 21.01.2022.
//
#include "Festival.cpp"

template class Festival <int>;
template class Festival <float>;
template class Festival_factory<int>;
template class Festival_factory<float>;

template
std::ostream& operator<< <>(std::ostream& os, const Festival<int>& x);

template
std::ostream& operator<< <>(std::ostream& os, const Festival<float>& x);
