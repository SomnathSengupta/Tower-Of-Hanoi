#include<iostream>
using namespace std;
void hanoi(int, char , char, char); // Hanoi Function Prototype
int main()
{
    int n;
    cout << "Hello! You are welcome to the Tower Of Hanoi Game" << endl;
    cout << "How many disc you want to shift? " << endl;
    cin >> n;
    hanoi(n, 's', 'd', 't'); // Calling Hanoi Function

    return 0;
}
void hanoi(int n, char source, char destination, char temp) // Hanoi Fuction Defination
{
    if( 1 == n ){
        cout << "Move disc 1 " << source << " to " << destination << endl;
        return;
    }
    hanoi(n-1, source, temp, destination);
    cout << "Move disc " << n << " " << source << " to " << destination << endl;
    hanoi(n-1, temp, destination, source);

}