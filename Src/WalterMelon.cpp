// System headers
#include <iostream>
// Project headers
#include <WalterMelon.h>

#define VERSION "0.001"

WalterMelon::WalterMelon() 
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

WalterMelon::~WalterMelon() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}
// ================ ================ ================ ================
int main() {
    std::cout << "Project: Walter Melon" << std::endl
              << "   author: Bartlomiej Zmuda" << std::endl
              << "   version: " << VERSION << std::endl;
    
    WalterMelon game;
}