// Client.h

#include <string>
using namespace std;
class Client
{
 public:
  Client();
  Client(const string& pib, const bool& isMarried);
  ~Client();

  int  calculatePriceInDollars() const;

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
  void  display() const;
 private:
  int  mClientCode = 0;
  std::string  mPIB = "Unknown";
  std::string  mSex = "Man";
  std::string  mDate = "2002-05-13";
  int          mAge = 18;
  int          mHeight = 183;
  int          mWeight = 65;
  int          mNumberOfChilds = 0;
  std::string  mBadHabits = "Unknown";
  std::string  mHoby = "Write c++ programs";
  std::string  mDescription = "Unknown";
  int          mSignCode = -1;
  int          mNationalityCode = -1;
  std::string  mAddress = "Ukraine";
  std::string  mPhone = "Unknown";
  std::string  mPassport = "Unknown";
  std::string  mPartherInfo = "Unknown";
  bool         fisMarried = false;
};
