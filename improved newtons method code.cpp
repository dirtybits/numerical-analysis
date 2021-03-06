#include <iostream>
using namespace std;

template<typename FLOAT, typename Functor, typename Functor_Prime>
FLOAT newton_method(FLOAT x0, Functor f, Functor_Prime f_prime, int iteration_count = 100){
    while (iteration_count) {
        x0 = (x0 - (f(x0) / f_prime(x0)));
        cout << " P(n) is now at: " << x0 << endl;
        --iteration_count;
    }
    return x0;
}


int main()
{
    newton_method(3.5, [](double a){ return a*a-2; },  [](double a){ return 2*a; });
}
