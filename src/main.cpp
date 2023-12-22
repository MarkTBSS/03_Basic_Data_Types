//#include <stdio.h>
#include <iostream>
//#include <ios>
#include <iomanip>

int main() {
    /* char ch = 'd';
    double d = 234.432;
    printf("%c %lf", ch, d); */

    // Disable synchronization between C and C++ standard streams
    /* std::ios_base::sync_with_stdio(false);
    char ch = 'd';
    double d = 234.432;
    std::cout << ch << " " << d << std::endl; */

    int a; long b; char c; float d; double e;
    //d = 334.23;
    //e = 14049.30493;
    std::cin >> a >> b >> c >> d >> e;
    std::cout << a <<"\n";
    std::cout << b <<"\n";
    std::cout << c <<"\n";
    std::cout << std::fixed << std::setprecision(3) << d << "\n";
    std::cout << std::fixed << std::setprecision(6) << e;
    
    return 0;
}

