/*
https://www.geeksforgeeks.org/program-count-digits-integer-3-different-methods/
*/

//Method 1


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int c = 0;
    
   if(n == 0)
    {
        cout<<1<<endl;
        return 0;
    }
    while(n)
    {
        n=n/10;
        ++c;
    }
    cout<<c<<endl;

    return 0;
}


//Method 2 using log10(n)

int countDigit(long long n) {
  return floor(log10(n) + 1);
}

//Method 3 ,convert no. to string
void count_digits(int n)
{
    // converting number to string using
    // to_string in C++
    string num = to_string(n);
 
    // calculate the size of string
    cout << num.size() << endl;
}
