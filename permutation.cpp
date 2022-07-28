#include <iostream>
#include "includes/fact.h"
using namespace std;

int main()
{
    int n, r;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter r : ";
    cin >> r;
    cout << "The Permutation is : " << fact(n) / (fact(r) * r * fact(n - r));
    // int nfact=1, rfact=1, nrfact=1;
    // for (i = n; i > 1; i--)
    // {
    //     nfact = nfact * i;
    // };
    // for (i = r; i > 1; i--)
    // {
    //     rfact = rfact * i;
    // };
    // for (i = (n - r); i > 1; i--)
    // {
    //     nrfact = nrfact * i;
    // };
    // cout << "The Permutation is : " << (nfact) / (rfact * r * nrfact);
}