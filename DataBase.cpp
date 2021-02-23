#include <iostream>
#include <stdexcept>
#include "DataBase.h"
#include <fstream>
using namespace std;
DataBase::DataBase() {

};
DataBase::~DataBase() {};
DataBase::DataBase(const string& db_filename) {
    // freopen(db_filename.c_str(), "r", stdin);
     ifstream read_file(db_filename.c_str(), ios::in);
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
    int numberOfCients = 0;
    read_file>>numberOfCients;
    std:string newLine;
    while (numberOfCients--)
    {
        Client db_client;
        read_file>>ClientCode;
       getline(read_file, newLine); 
       getline(read_file, PIB);
       read_file>>Sex>>Date>>Age>>Height>>Weight>>NumberOfChilds;
       getline(read_file, newLine);
       getline(read_file, BadHabits);
       getline(read_file, Hoby);
       getline(read_file, Description);
       read_file>>SignCode>>NationalityCode;
       getline(read_file, newLine);
       getline(read_file, Address);
       read_file>>Phone>>Passport;
       getline(read_file, newLine);
       getline(read_file, PartherInfo);
       read_file>>isMarried;
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
    // this->displayAll();
    read_file.close(); 


    
    
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
    for(auto& client : this->clients) {
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