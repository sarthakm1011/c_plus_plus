#include <iostream>
using namespace std;

struct MemjetStack() 
{
	
	stack<int> s;
	
	int mininumuElement;

	void getMinimum() 
	{

		if (s.empty()) 
		{
			cout << "stack is empty" << endl;
		}
		else cout << "Minimum elelement in the stack is:" << mininumuElement << endl;
	}


	void peekTop() 
	{

		if (s.empty()) 
			{
				cout << "stack is empty"; return;
			}
		
		int t = s.top();
		cout << "Top Most Element is: ";
		(t < mininumuElement) ? cout << mininumuElement: cout << t;
	}



	void pop() 
	{

		if (s.empty()) 
			{
				cout << "stack is empty" << endl; return;
			}
			
		cout << " Top most elelement is removed: ";
		int t = s.top();
		s.pop();

		if (t < mininumuElement) 
		{
			cout << mininumuElement << endl;
			mininumuElement = 2 * mininumuElement - t;
		}
		
		else 
		{
			cout << t << endl;
		}	

	}



	void push(int x) 
	{ 

        if (s.empty()) 
        { 
            mininumuElement = x; 
            s.push(x); 
            cout <<  "Number Inserted: " << x << endl; 
            return; 
        } 
  
        
        if (x < mininumuElement) 
        { 
            s.push(2*x - mininumuElement); 
            mininumuElement = x; 
        } 
  
        else 
        {
           s.push(x); 
        }
  
        cout <<  "Number Inserted: " << x << endl; 
    } 


};


int main() {

	MemjetStack s;

	return 0;
}