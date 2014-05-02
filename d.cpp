#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>


using namespace std;

int main(int argc, char * argv[])
{
    // Program wczyta z pliku liczby (tyle ile ich bedzie) i wydrukuje je:
    //    d. posortowane rosnaco
    
    vector<int> vec;
    
    if (argc > 1)
    {
    	ifstream input;
    	input.open(argv[1]);
    	while (input.good())
    	{
    		int number;
    		input >> number;
    		vec.push_back(number);
    	}
    	input.close();
    }
    
    sort (vec.begin(), vec.end());
    
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	cout << *it << endl;
	
	int x;
	cin >> x;
	
	
    return 0;
}
