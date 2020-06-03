#ifndef _PAIR_HPP_
#define _PAIR_HPP_

namespace xl{
    template <typename F, typename S>
    class Pair{
        public:
            Pair();
            Pair(F one, S two);
            F first;
            S second;
    };
};

#include "pair.tpp"

#endif