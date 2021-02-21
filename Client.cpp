// AirlineTicket.cpp

#include <iostream>
#include "Client.h"

using namespace std;


Client::~Client()
{
  // nothing much to do in terms of cleanup
}

int Client::calculatePriceInDollars() const
{
  if (getNumberOfChilds() > 3) {

    return 0;
  }
 
 
  return static_cast<int>((getNumberOfChilds() * 500));
}

int Client::getClientCode() const
{
  return mClientCode;
}

void Client::setClientCode(const int& inCode)
{
  mClientCode = inCode;
}

string Client::getPIB() const
{
  return mPIB;
}

void Client::setPIB(const string& inPIB)
{
  mPIB = inPIB;
}
string Client::getSex() const
{
  return mSex;
}

void Client::setSex(const string& inSex)
{
  mSex = inSex;
}

string Client::getDate() const
{
  return mDate;
}

void Client::setDate(const string& inDate)
{
  mDate = inDate;
}

int Client::getAge() const
{
  return mAge;
}

void Client::setAge(const int& inAge)
{
  mAge = inAge;
}

int Client::getHeight() const
{
  return mHeight;
}

void Client::setHeight(const int& inHeight)
{
  mHeight = inHeight;
}

int Client::getWeight() const
{
  return mWeight;
}

void Client::setWeight(const int& inWeight)
{
  mWeight = inWeight;
}

int Client::getNumberOfChilds() const
{
  return mNumberOfChilds;
}

void Client::setNumberOfChilds(const int& inNumberOfChilds)
{
  mNumberOfChilds = inNumberOfChilds;
}

bool Client::getisMarried() const
{
  return fisMarried;
}

void Client::setisMarried(const bool& inMarried)
{
  fisMarried = inMarried;
}
string Client::getBadHabits() const
{
  return mBadHabits;
}

void Client::setBadHabits(const string& inBadHabits)
{
  mBadHabits = inBadHabits;
}

string Client::getHoby() const
{
  return mHoby;
}

void Client::setHoby(const string& inHoby)
{
  mHoby = inHoby;
}

string Client::getDescription() const
{
  return mDescription;
}

void Client::setDescription(const string& inDescription)
{
  mDescription = inDescription;
}

int Client::getSignCode() const
{
  return mSignCode;
}

void Client::setSignCode(const int& inSignCode)
{
  mSignCode = inSignCode;
}

int Client::getNationalityCode() const
{
  return mNationalityCode;
}

void Client::setNationalityCode(const int& inNationalityCode)
{
  mNationalityCode = inNationalityCode;
}

string Client::getAddress() const
{
  return mAddress;
}

void Client::setAddress(const string& inAddress)
{
  mAddress = inAddress;
}

string Client::getPhone() const 
{
  return mPhone;
}

void Client::setPhone(const string& inPhone)
{
  mPhone = inPhone;
}

string Client::getPassport() const
{
  return mPassport;
}

void Client::setPassport(const string& inPassport)
{
  mPassport = inPassport;
}

string Client::getPartherInfo() const
{
  return mPartherInfo;
}

void Client::setPartherInfo(const string& inPartherInfo)
{
  mPartherInfo = inPartherInfo;
}