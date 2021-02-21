#include <iostream>
#include <stdexcept>
#include <DataBase.h>

using namespace std;
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
    Client db_client;
    while (cin>>ClientCode)
    {
       cin>>PIB>>Sex>>Date>>Age>>Height>>Weight>>NumberOfChilds>>BadHabits>>Hoby>>Description;
       cin>>SignCode>>NationalityCode>>Address>>Phone>>Passport>>PartherInfo>>isMarried;
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