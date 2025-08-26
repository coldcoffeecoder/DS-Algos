#include<bits/stdc++.h>
using namespace std;

int main(){
     
    //method 1
    string s1 = "Bhumi", s2= "Choudhary";
    string s3 = s1 + s2;
    cout<< s3<<endl;

    //method 2
    string s4= s1.append(s2);
    cout << s4 <<endl;

    //add element at the last of the string
    string s5 = "bhumi";
    s5.push_back('s');
    cout << s5<<endl;

    //to remove last element
    s5.pop_back();
    cout<< s5 << endl;

    //another method to attach element at the last of the string
    s5 = s5+"S";   //you can use 'S' also(single chr) cant use 'sc' because this is not chr 
    //you can use "sc" for string to add
    cout<< s5;
}