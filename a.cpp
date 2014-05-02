// https://github.com/ehmeth/commandline_excersises

#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    // a. wypisze wszystkie otrzymane argumenty w osobnych liniach
    cout << argc << endl << endl;
    
    for (int i = 0; i < argc; i++)
       	cout << argv[i] << endl;
    
    
    char c;
    
    cin >> c;

    return 0;
}
