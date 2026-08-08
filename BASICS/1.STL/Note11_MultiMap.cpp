#include <bits/stdc++.h>
using namespace std;

int main(){

    multimap<int, int> mmpp;

    /*
        KEYS are:
            Not-Unique
            Sorted
        Everything is same as map, only thing:

            It stored Multiple Keys(Duplicate Keys)
            mmpp[key] cannot be used here

    */
    // mmpp[1] = 10; // THIS IS NOT APPLICABLE, We cant do this
    mmpp.emplace(1, 21);

    return 0;
}