// AirlineTicketTest.cpp

#include <iostream>
#include "Client.h"

using namespace std;

int main(int argc, char** argv)
{
 Client clientStack;
    Client* clientHeap;
    clientHeap = new Client();

    clientStack.setAge(20);
    clientStack.setBadHabits("smoke");
    clientStack.setPIB("John Brown");
    clientStack.setSex("male");
    clientStack.setHeight(183);
    clientStack.setHoby("surfing");
    clientStack.setAddress("Kyiv");
    clientStack.setNumberOfChilds(1);
    clientStack.setisMarried(false);


    clientHeap->setAge(29);
    clientHeap->setBadHabits("none");
    clientHeap->setPIB("Alice White");
    clientHeap->setSex("female");
    clientHeap->setHeight(168);
    clientHeap->setHoby("knitting");
    clientHeap->setAddress("Kyiv");
    clientHeap->setNumberOfChilds(5);
    clientHeap->setisMarried(false);

    std::cout << clientStack.getPIB() << " "
            << clientStack.getisMarried() << " "
            << clientStack.getAge() << " "
            << clientStack.getSex() << " "
            << clientStack.getHoby() << " "
            << clientStack.getHeight() << " "
            << clientStack.getNumberOfChilds() << " "
            << clientStack.getAddress() << " "
            << clientStack.calculatePriceInDollars()
            << std::endl;


    std::cout << clientHeap->getPIB() << " "
            << clientHeap->getisMarried() << " "
            << clientHeap->getAge() << " "
            << clientHeap->getSex() << " "
            << clientHeap->getHoby() << " "
            << clientHeap->getHeight() << " "
            << clientHeap->getNumberOfChilds() << " "
            << clientHeap->getAddress() << " "
            << clientHeap->calculatePriceInDollars() 
            << std::endl;

    delete clientHeap;

  return 0;
} 
