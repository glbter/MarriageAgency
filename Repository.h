//
// Created by hlib on 18.02.21.
//
#include "Client.h"
#ifndef O_LAB1_REPOSITORY_H
#define O_LAB1_REPOSITORY_H

class Repository {
public:
    Repository();
    ~Repository();

    void create(Client& client);
    Client& get(int id);

};

#endif //O_LAB1_REPOSITORY_H
