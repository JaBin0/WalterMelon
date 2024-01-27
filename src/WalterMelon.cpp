// System headers
#include <iostream>
// Project headers
#include <WalterMelon.h>

#define VERSION "0.01"

WalterMelon::WalterMelon() 
    : Engine()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    // _settings.setProperty<Sopel::Resolution>("resolution", {800, 600});

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
    game.run();

}