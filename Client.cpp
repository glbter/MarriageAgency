// AirlineTicket.cpp

#include <iostream>
#include "Client.h"

using namespace std;

Client::Client()
{
  // initialize data members
  fisMarried = false; 
  mPIB = "Unknown Client";
  mNumberOfChilds = 0;
  mAge = 0;
  mClientCode = 0;
  mSex = "Unknown";
  mDate = "Unknown";
  mHeight = 0;
  mWeight = 0;
  mBadHabits = "Write C code";
  mDescription = "Unknown";
  mSignCode = 0;
  mNationalityCode = 0;
  mPhone = "Unknown";
  mPassport = "Unknown";
  mPartherInfo = "Unknown";

}

Client::~Client()
{
  // nothing much to do in terms of cleanup
}

int Client::calculatePriceInDollars()
{
  if (getNumberOfChilds() > 3) {

    return 0;
  }
 
 
  return static_cast<int>((getNumberOfChilds() * 500));
}

int Client::getClientCode()
{
  return mClientCode;
}

void Client::setClientCode(int inCode)
{
  mClientCode = inCode;
}

string Client::getPIB()
{
  return mPIB;
}

void Client::setPIB(string inPIB)
{
  mPIB = inPIB;
}
string Client::getSex()
{
  return mSex;
}

void Client::setSex(string inSex)
{
  mSex = inSex;
}

string Client::getDate()
{
  return mDate;
}

void Client::setDate(string inDate)
{
  mDate = inDate;
}

int Client::getAge()
{
  return mAge;
}

void Client::setAge(int inAge)
{
  mAge = inAge;
}

int Client::getHeight()
{
  return mHeight;
}

void Client::setHeight(int inHeight)
{
  mHeight = inHeight;
}

int Client::getWeight()
{
  return mWeight;
}

void Client::setWeight(int inWeight)
{
  mWeight = inWeight;
}

int Client::getNumberOfChilds()
{
  return mNumberOfChilds;
}

void Client::setNumberOfChilds(int inNumberOfChilds)
{
  mNumberOfChilds = inNumberOfChilds;
}

bool Client::getisMarried()
{
  return fisMarried;
}

void Client::setisMarried(bool inMarried)
{
  fisMarried = inMarried;
}
string Client::getBadHabits()
{
  return mBadHabits;
}

void Client::setBadHabits(string inBadHabits)
{
  mBadHabits = inBadHabits;
}

string Client::getHoby()
{
  return mHoby;
}

void Client::setHoby(string inHoby)
{
  mHoby = inHoby;
}

string Client::getDescription()
{
  return mDescription;
}

void Client::setDescription(string inDescription)
{
  mDescription = inDescription;
}

int Client::getSignCode()
{
  return mSignCode;
}

void Client::setSignCode(int inSignCode)
{
  mSignCode = inSignCode;
}

int Client::getNationalityCode()
{
  return mNationalityCode;
}

void Client::setNationalityCode(int inNationalityCode)
{
  mNationalityCode = inNationalityCode;
}

string Client::getAddress()
{
  return mAddress;
}

void Client::setAddress(string inAddress)
{
  mAddress = inAddress;
}

string Client::getPhone()
{
  return mPhone;
}

void Client::setPhone(string inPhone)
{
  mPhone = inPhone;
}

string Client::getPassport()
{
  return mPassport;
}

void Client::setPassport(string inPassport)
{
  mPassport = inPassport;
}

string Client::getPartherInfo()
{
  return mPartherInfo;
}

void Client::setPartherInfo(string inPartherInfo)
{
  mPartherInfo = inPartherInfo;
}