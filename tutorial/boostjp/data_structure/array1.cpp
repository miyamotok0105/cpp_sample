#include <iostream>
#include <boost/array.hpp>
#include <algorithm>
#include <string>
using namespace std;

void disp(int x) { std::cout << x << ' '; }

int main()
{

    boost::array<int, 3> ar = {3, 1, 4};
    boost::array<int, 4> ar2 = {3, 1, 4, 1};

    std::for_each(ar.begin(), ar.end(), disp);
    cout << "\n" << endl;
    std::for_each(ar2.begin(), ar2.end(), disp);
}

