// write your code here
#include <iostream>

#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	int N;
	cout << "Enter random input:" << endl;
	cin >> N;
	
	srand(time(0));
	
	for (int x = 1; x < N+1; x++) {
		cout << rand() % 100 << endl;

			
	}


	
	

	
}

