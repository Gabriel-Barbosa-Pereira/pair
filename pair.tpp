namespace xl{
    template <typename F, typename S>
    Pair <F, S>::Pair(F one, S two){
        this->first = one;
        this->second = two;
    }

    template <typename F, typename S>
    Pair <F, S>::Pair(){}
};
