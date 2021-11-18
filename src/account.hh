#include <string>

class Account
{
private:
    unsigned id;
    double balance;
    std::string full_name;

public:
    double getBalance();
    std::string getName();
};