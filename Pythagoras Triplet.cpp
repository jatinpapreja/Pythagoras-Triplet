#include<iostream>
using namespace std;
int main()
{
    ///input no. is considered to be the smallest of the triplet.
    long long int no;
    cin>>no;
    if(no<3){cout<<-1;return 0;}
    else if(no&1)
    {
        cout<<(no*no - 1)/2<<" "<<(no*no + 1)/2;
    }
    else cout<<no*no/4 - 1<<" "<<no*no/4 + 1;
    return 0;
}
