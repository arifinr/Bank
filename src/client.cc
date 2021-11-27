#include <iostream>
#include <chrono>
#include <thread>

#include "account.hh"
#include "transaction.hh"

int main()
{
    using namespace std::chrono_literals;
    std::thread my_thread([]
                          { std::this_thread::sleep_for(2000ms); });

    return 0;
}