#include "DataBase.h"
#include <iostream>

using namespace std;

int main() {
    string filename = "DataBase.txt";
    DataBase* my_db = new DataBase(filename);
    cout<<"Test Start"<<endl;
    my_db->displayAll();
    cout<<"Test End"<<endl;

}