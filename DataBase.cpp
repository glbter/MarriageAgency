#include <iostream>
#include <stdexcept>
#include "DataBase.h"

using namespace std;
DataBase::~DataBase() {

}

DataBase::DataBase(const string& db_filename) {
    freopen(db_filename.c_str(), "r", stdin);
    int  ClientCode;
    std::string  PIB;
    std::string  Sex;
    std::string  Date;
    int          Age;
    int          Height;
    int          Weight;
    int          NumberOfChilds;
    std::string  BadHabits;
    std::string  Hoby;
    std::string  Description;
    int          SignCode;
    int          NationalityCode;
    std::string  Address;
    std::string  Phone;
    std::string  Passport;
    std::string  PartherInfo;
    bool         isMarried;
    
    std:string newLine;
    while (cin>>ClientCode)
    {
        Client db_client;
       getline(cin, newLine); 
       getline(cin, PIB);
       cin>>Sex>>Date>>Age>>Height>>Weight>>NumberOfChilds;
       getline(cin, newLine);
       getline(cin, BadHabits);
       getline(cin, Hoby);
       getline(cin, Description);
       cin>>SignCode>>NationalityCode;
       getline(cin, newLine);
       getline(cin, Address);
       cin>>Phone>>Passport;
       getline(cin, newLine);
       getline(cin, PartherInfo);
       cin>>isMarried;
       db_client.setClientCode(ClientCode);
       db_client.setPIB(PIB);
       db_client.setSex(Sex);
       db_client.setDate(Date);
       db_client.setAge(Age);
       db_client.setHeight(Height);
       db_client.setWeight(Weight);
       db_client.setNumberOfChilds(NumberOfChilds);
       db_client.setBadHabits(BadHabits);
       db_client.setHoby(Hoby);
       db_client.setDescription(Description);
       db_client.setSignCode(SignCode);
       db_client.setNationalityCode(NationalityCode);
       db_client.setAddress(Address);
       db_client.setPhone(Phone);
       db_client.setPassport(Passport);
       db_client.setPartherInfo(PartherInfo);
       db_client.setisMarried(isMarried);
       this->clients.push_back(db_client);
    }
    
}
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
    for(auto client : this->clients) {
        client.display();
    }
}
void DataBase::displayMarried() const {
    for(auto client : this->clients) {
        if(client.getisMarried()) 
             client.display();
    }
}
void DataBase::displayUnmarried() const {
    for(auto client : this->clients) {
        if(!client.getisMarried()) 
             client.display();
    }
}