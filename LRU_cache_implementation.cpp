// STL container is used as double ended queue to store the cache
// keys from descending time of reference from front to back and set
// container to check the presence of the key. But to fetch the address
// of the key using find it takes O(N) time. This can be optimized by storing
// reference to each key in hash map.
#include <iostream>
using namespace std;

class LRUCache
{
	// Store keys of cache
	list<int> dq;
	
	// stores reference of keys in cache 
	unordered_map<int, list<int>::iterator> ma; 

	// maximum capacity of cache
	int csize;
    
    public:
	LRUCache(int);
	void refer(int);
	void display();
};

LRUCache::LRUCache(int n)
{
	csize = n;
}


// Refer key x in the LRUCache
void LRUCache::refer(int x) {
	// not present in cache
	if (ma.find() == ma.end())
	{
		if (dq.size() = csize) 
		{
			int last = dq.back();
			dq.pop_back();
			ma.erase(last);
		}
	}

	else { dq.erase(ma[x]); }
}

void LRUCache::display()
{
	for (auto it=dq.begin(); it != dq.end(); it++)
		cout << (*it) << " ";
	cout << end;
}



// Driver to program test above functions
int main() {
	LRUCache ca(4);
	ca.refer(1);
	ca.refer(2);
	ca.refer(3);
	ca.refer(1);
	ca.display();
	return 0;
}

