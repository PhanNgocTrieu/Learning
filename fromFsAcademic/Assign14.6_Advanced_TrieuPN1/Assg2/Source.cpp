#include <thread>
#include <iostream>
#include <vector>
#include <chrono>

typedef std::chrono::high_resolution_clock Clock;



using namespace std;
auto t1 = Clock::now();

bool isPrime(long long _numCheck)
{
    long long limit = _numCheck / 2;
    for (int idex = 2; idex < limit; idex++)
    {
        if (_numCheck % idex == 0)
        {
            return false;
        }
    }
    return true;
}

void fromAtoB(long long _fromA, long long _toB, std::vector<long long> list)
{
    long long k = _fromA;
    while (k < _toB)
    {
        if (isPrime(k))
        {
            auto t2 = Clock::now();
            std::cout << "Time  : " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << "nS" << endl;
            list.push_back(k);
        }
        k++;
    }
}


int main()
{
    long long mA, mB;
    int nThread;
    std::vector<long long> list;
    std::cout << "mA: ", std::cin >> mA;
    std::cout << "mB: ", std::cin >> mB;
    std::cout << "nThread: ", std::cin >> nThread;
    std::vector<std::thread> threadHandling;

    for (int idex = 0; idex < nThread; idex++)
    {
        threadHandling.push_back(thread(fromAtoB, mA, mB, list));
    }

    for (int idex = 0; idex < nThread; idex++)
    {
        threadHandling[idex].join();
    }
    return 0;
}