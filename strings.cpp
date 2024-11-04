                        // STRING:-
// Example1: 
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="apna college";// dynamic => runtime resize
    cout<<str<<endl;

    str="hello";
    cout<<str<<endl;
    return 0;
}
*/


              // CONCATINATION OF TWO STRING:
// Example 2:
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1="hello";
    string str2="world";
    string str3=str1 + str2;// Concatination 
    cout<<str3<<endl;
    return 0;
}
*/


             // STRING COMPARE:-
// Example 3:-
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1="sushant";
    string str2="kumar";
    cout<<(str1==str2)<<endl;
    return 0;
}              
// output- 0 (false)
*/


// EXAMPLE 4:
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1="sushant";
    string str2="kumaran";
    cout<<(str1<str2)<<endl;
    return 0;
}       
// output- 0(false)
*/


// STRING LENGTH:
//Example 5:
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="ankitkumar";
    cout<<str.length()<<endl;
    return 0;
}
*/


                 // USER INPUT STRING:
/*                 
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    cout<<"output of the input: "<<str<<endl;
    return 0;
} 
*/


             // LOOPS ON STRING:
/*             
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="ankit kumar.";

    for(int i=0; i<str.length(); i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    return 0;
} 
*/


                 // REVERSE A STRING (USING STL):
/*
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str="ankit";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}
*/
