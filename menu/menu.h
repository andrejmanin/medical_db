#ifndef MENU_H
#define MENU_H

#include "database.h"

class Menu {
    Database database;

public:
    void displayMainMenu();
    void handleInput();
};

#endif // MENU_H