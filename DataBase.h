#pragma once
#include <string>
#include <vector>
#include <Client.h>

using namespace std;
class DataBase {
    public:
        DataBase() = default;
        DataBase(const string& db_filename);
        ~DataBase();
        Client& addClient(const string& pib, const  bool& isMarried);
        Client& getClient(const int& clientCode) ;
        Client& getClient(const string& pib, const  bool& isMarried) ;
        void displayAll() const;
        void displayMarried() const;
        void displayUnmarried() const;

    private:
        int nextClientCode = 666;
        vector<Client> clients;
        string db_filename;
};