#include <string>
#include <iostream>

#include "/home/ballingall/.gvm/pkgsets/go1.5.1/abTest/src/github.com/haylingsailor/libecl/elastic.h"

int main() {
    int returnVal;
    std::string feature;
    std::cout << "myApp: Hi from C++ Enter a feature to checkout" << std::endl;

    std::cin >> feature;
    returnVal = ::elastic_activateFeature(feature.c_str());

    if (3 == returnVal) {
        std::cout << "Checked out successfully!";
    }
    else {
        std::cout << "FAIL";
    }
    return 0;
}
