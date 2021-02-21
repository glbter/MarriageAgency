// Client.h

#include <string>
class Client
{
 public:
  Client();
  ~Client();

  int  calculatePriceInDollars();

  int          getClientCode() const;
  void         setClientCode(const int& code);
  std::string  getPIB() const;
  void         setPIB(const std::string& PIB);
  std::string  getSex() const;
  void         setSex(const std::string& sex);
  std::string  getDate() const;
  void         setDate(const std::string& sex);
  int          getAge() const;
  void         setAge(const int& age);
  int          getHeight() const;
  void         setHeight(const int& height);
  int          getWeight() const;
  void         setWeight(const int& weight);
  int          getNumberOfChilds() const;
  void         setNumberOfChilds(const int& numberOfChilds);
  bool         getisMarried() const;
  void         setisMarried(const bool& MarriedStatus);
  std::string  getBadHabits() const;
  void         setBadHabits(const std::string& badHabits);
  std::string  getHoby() const;
  void         setHoby(const std::string& hoby);
  std::string  getDescription() const;
  void         setDescription(const std::string& badHabits);
  int          getSignCode() const;
  void         setSignCode(const int& code);
  int          getNationalityCode() const;
  void         setNationalityCode(const int& code);
  std::string  getAddress() const;
  void         setAddress(const std::string& address);
  std::string  getPhone() const;
  void         setPhone(const std::string& phone);
  std::string  getPassport() const;
  void         setPassport(const std::string&passport);
  std::string  getPartherInfo() const;
  void         setPartherInfo(const std::string& partherInfo);
 private:
  int  mClientCode;
  std::string  mPIB;
  std::string  mSex;
  std::string  mDate;
  int          mAge;
  int          mHeight;
  int          mWeight;
  int          mNumberOfChilds;
  std::string  mBadHabits;
  std::string  mHoby;
  std::string  mDescription;
  int          mSignCode;
  int          mNationalityCode;
  std::string  mAddress;
  std::string  mPhone;
  std::string  mPassport;
  std::string  mPartherInfo;
  bool         fisMarried;
}; 
