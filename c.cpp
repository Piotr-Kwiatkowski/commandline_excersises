#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char * argv[])
{
    // Program wczyta z pliku liczby (tyle ile ich bedzie) i wydrukuje je:
    //    c. w odwrotnej kolejnosci
    
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
    
  	for (vector<int>::reverse_iterator it = vec.rend(); it != vec.rbegin(); it--)
  		cout << *it << endl;
   
   int x;
   cin >> x;

    return 0;
}
