//
// Created by hlib on 23.02.21.
//

#include <iostream>
#include <stdexcept>
#include <exception>
#include "DataBase.h"

using namespace std;

int displayMenu();
void displayAll(DataBase* db);
void displayMarried(DataBase* db);
void displayUnmarried(DataBase* db);
void addClient(DataBase* db);
void getClient(DataBase* db);

int main()
{
    string filename = "DataBase.txt";
    DataBase* marriageDB = new DataBase(filename);

    bool done = false;
    while (!done) {
        int selection = displayMenu();
        switch (selection) {
            case 0:
                done = true;
                break;
            case 1:
                displayAll(marriageDB);
                break;
            case 2:
                displayMarried(marriageDB);
                break;
            case 3:
                displayUnmarried(marriageDB);
                break;
            case 4:
                addClient(marriageDB);
                break;
            case 5:
                getClient(marriageDB);
                break;
            default:
                cerr << "Unknown command." << endl;
                break;
        }
    }
    return 0;
}

int displayMenu()
{
    int selection;
    cout << endl;
    cout << "Marriage Database" << endl;
    cout << "-----------------" << endl;
    cout << "1) Display all people" << endl;
    cout << "2) Display married people" << endl;
    cout << "3) Display unmarried people" << endl;
    cout << "4) Add Client" << endl;
    cout << "5) Get client" << endl;
    cout << "0) Quit" << endl;
    cout << endl;
    cout << "---> ";
    cin >> selection;
    return selection;
}

void displayAll(DataBase* db)
{
    cout << "All people used our marriage agency! ";
    cout << "-----------------------------------";
    db->displayAll();
}

void displayMarried(DataBase* db)
{
    cout << "Married people in our marriage agency! ";
    cout << "-----------------------------------";
    db->displayMarried();
}

void displayUnmarried(DataBase* db)
{
    cout << "Unmarried people in our marriage agency! ";
    cout << "-----------------------------------";
    db->displayUnmarried();
}

void addClient(DataBase* db)
{
    string pib;
    bool isMarried;
    cout << "Enter PIB ";
    cin >> pib;
    cout << "Is married? (0/1) ";
    cin >> isMarried;
    db->addClient(pib, isMarried);
}

void getClient(DataBase* db)
{
    int clientCode;
    cout << "Enter Client Code ";
    cin >> clientCode;
    db->getClient(clientCode);
}