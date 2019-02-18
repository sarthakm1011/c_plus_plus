#include <iostream>
using namespace std;
	
class spin_mutex_t {
	std::mutex _m;
	std::atomic<long long> _p1{1};	

    public:
	void lock();
	void unlock();
};


void spin_mutex_t::lock {

}






