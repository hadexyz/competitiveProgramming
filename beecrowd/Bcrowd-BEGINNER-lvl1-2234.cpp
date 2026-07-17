#include <stdio.h>
#include <iostream>
#include <iomanip>
int main() {
 
 long long H,P;
    std::cin >> H >> P;
    std::cout << std::fixed << std::setprecision(2);
 std::cout << (double)H/P << "\n";
    return 0;
}