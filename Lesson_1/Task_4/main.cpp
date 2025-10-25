#include <iostream>

using namespace std;

int main()
{
    int stars;
    cout << "Write the number of stars: ";
    cin >> stars;
    int row = 1;
    while(row <= stars){
        int column = 1;
        while(column <= row){
           cout << "*";
           ++column;
        }
        cout << endl;
        ++row;
    }
    return 0;
}
