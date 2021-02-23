//
// Created by hlib on 21.02.21.
//
#include "Client.h"

#ifndef O_LAB1_CLIENTFILTER_H
#define O_LAB1_CLIENTFILTER_H
class ClientFilter {
public:
    ClientFilter();
    ~ClientFilter();

    bool check(Client& client);
};
#endif //O_LAB1_CLIENTFILTER_H
