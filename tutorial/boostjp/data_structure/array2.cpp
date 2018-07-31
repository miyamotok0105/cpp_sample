#include <iostream>
#include <boost/array.hpp>
using namespace std;

int main()
{
    boost::array<int, 3> ar = {3, 1, 4};

    const std::size_t size = ar.size();
    cout << "要素数" << endl;
    std::cout << size << std::endl;
}
