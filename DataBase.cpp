#include <iostream>
#include <stdexcept>
#include <DataBase.h>

using namespace std;

Client& DataBase::addClient(const string& pib, const bool& isMarried){
        Client client{pib, isMarried};
        client.setClientCode(this->nextClientCode++);
        this->clients.push_back(client);
        return client;
}
 Client& DataBase::getClient(const string& pib, const bool& isMarried) {
        for(Client& client : this->clients) {
            if(client.getPIB() == pib && client.getisMarried() == isMarried) return client;
        }

        throw logic_error("No client found!");
}
 Client& DataBase::getClient(const int& clientCode) {
        for(Client& client : this->clients) {
            if(client.getClientCode() == clientCode) return client;
        }

        throw logic_error("No client found!");
}

void DataBase::displayAll() const {
    for(const Client& client : this->clients) {
        client.display();
    }
}
void DataBase::displayMarried() const {
    for(const Client& client : this->clients) {
        if(client.getisMarried()) 
             client.display();
    }
}
void DataBase::displayUnmarried() const {
    for(const Client& client : this->clients) {
        if(!client.getisMarried()) 
             client.display();
    }
}