#include <iostream>
#include <thread>
using namespace std;

void foo() { cout << "foo chal raha hain" << endl; }
void bar() { cout << "bar jaa raha hoo abhi" << endl; }


int main() {
	std::thread t1(bar);
	std::thread t2(foo);

	t1.join();
	t2.join();
	
	
	return 0;
}
