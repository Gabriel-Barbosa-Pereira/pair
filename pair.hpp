#ifndef _PAIR_HPP_
#define _PAIR_HPP_

namespace xl{
    template <class F, class S>
    class Pair{
        public:
            Pair();
            Pair(F one, S two);
            F first;
            S second;
    };
};

#endif