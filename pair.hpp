#ifndef _PAIR_HPP_
#define _PAIR_HPP_

template <class F, class S>
class Pair{
    public:
        Pair();
        Pair(F one, S two);
        F first;
        S second;
};

template <class F, class S>
Pair <F, S>::Pair(F one, S two){
    this->first = one;
    this->second = two;
}

template <class F, class S>
Pair <F, S>::Pair(){}

#endif