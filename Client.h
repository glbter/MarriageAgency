// Client.h

#include <string>
class Client
{
 public:
  Client();
  ~Client();

  int  calculatePriceInDollars();

  int          getClientCode();
  void         setClientCode(int code);
  std::string  getPIB();
  void         setPIB(std::string PIB);
  std::string  getSex();
  void         setSex(std::string sex);
  std::string  getDate();
  void         setDate(std::string sex);
  int          getAge();
  void         setAge(int age);
  int          getHeight();
  void         setHeight(int height);
  int          getWeight();
  void         setWeight(int weight);
  int          getNumberOfChilds();
  void         setNumberOfChilds(int numberOfChilds);
  bool         getisMarried();
  void         setisMarried(bool MarriedStatus);
  std::string  getBadHabits();
  void         setBadHabits(std::string badHabits);
  std::string  getHoby();
  void         setHoby(std::string hoby);
  std::string  getDescription();
  void         setDescription(std::string badHabits);
  int          getSignCode();
  void         setSignCode(int code);
  int          getNationalityCode();
  void         setNationalityCode(int code);
  std::string  getAddress();
  void         setAddress(std::string address);
  std::string  getPhone();
  void         setPhone(std::string phone);
  std::string  getPassport();
  void         setPassport(std::string passport);
  std::string  getPartherInfo();
  void         setPartherInfo(std::string partherInfo);
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
