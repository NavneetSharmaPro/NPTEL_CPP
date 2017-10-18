#include <iostream>
#include <cstdlib>
namespace NS { // Fill the blank with proper keyword
    int abs(int n) {
    if (n < -128) return 0;
    if (n > 127) return 0;
    if (n < 0) return -n;
    return n;
} }
int main() {
    double x, y, z;
    std::cin >> x >> y >> z ;
    std::cout << NS::abs(x) << " "
    << NS::abs(y) << " "
    << NS::abs(z) <<  std::endl;
    std::cout <<abs(x) << " "
    << abs(y) << " "
   << abs(z) << std::endl;
   return 0;
}
