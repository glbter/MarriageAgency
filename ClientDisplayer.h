//
// Created by hlib on 21.02.21.
//
#include "Client.h"

#ifndef O_LAB1_CLIENTDISPLAYER_H
#define O_LAB1_CLIENTDISPLAYER_H

class ClientDisplayer {
public:

    ClientDisplayer();
    ~ClientDisplayer();

    void display(Client& client);
    void displayAll(Client * clients);
};

#endif //O_LAB1_CLIENTDISPLAYER_H
