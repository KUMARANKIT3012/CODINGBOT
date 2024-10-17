                    // SCOPES
//Example 1:
/*
#include<iostream>
using namespace std;
int main(){
    //local scope
    int a=1;
    if(a>0){
        int x=10; // x: local variable to if block 
        cout<<x<<endl;
    }
    cout<<x<<endl;
    return 0;
}
*/

//Example 2:
/*
#include<iostream>
using namespace std;
int main(){
    //local scope 
    int a =1;
    int x= -100;
    if(a>0){
        int x=10; // x: is local variable to the if block 
        cout<<x<<endl;
    }
    cout<<x<<endl;
    return 0;
}
*/

//Example 3:
/*
#include<iostream>
using namespace std;
int main(){
    // Local scope 
    int a=1;
    int x=-1;
    if(a>0){
        x=10;
        cout<<x<<endl; // x: Local variable to main block 
    }
    cout<<x<<endl;
    return 0;
}
*/


                   // GLOBAL SCOPE
// example 1:
/*                   
#include<iostream>
using namespace std;
int x=1; // Global scope 
int main(){
    cout<<x<<endl; // 1
    //Local scope 
    int a=1;
    int x=1; // x:1, x:local variable to main block 
    if(a>0){
        int x=10; // x:10
        cout<<x<<endl; // 10
    }
    cout<<x<<endl; // x: local variable to main block-->1
    return 0;
}
*/


// Example 2:                                                 //////remember//////
// USE OF SCOPE RESOLUTION OPERATOR(::)
/*
#include<iostream>
using namespace std;
int x=-10; // Global scope 
int main(){
    cout<<(::x)<<endl; // -10
    //Local scope 
    int a=1;
    int x=1; // x:1, x:local variable to main block 
    if(a>0){
        int x=10; // x:10
        cout<<(::x)<<endl; // -10
    }
    ::x = ::x +10; // update the value of scope resolution 
    cout<<(::x)<<endl; // x: local variable to main block-->0
    return 0;
}
*/


                   // BITWISE OPERATOR 
// 1) BITWISE AND(&):
/*
#include<iostream>
using namespace std;
int main(){
    int a=7;
    int b=5;
    cout<<(a&b)<<endl;
    cout<<(8&5)<<endl;
    return 0;
}                   
*/

// 2) BITWISE OR(|):
/*
#include<iostream>
using namespace std;
int main(){
    int a=7;
    int b=5;
    cout<<(7|5)<<endl;
    cout<<(14|2)<<endl;
    return 0;
}
*/


// 3) BITWISE XOR(^):
/*
#include<iostream>
using namespace std;
int main(){
    int a=7;
    int b=5;
    cout<<(7^5)<<endl;
    cout<<(14^1)<<endl;
    return 0;
}
*/

// 4) LEFT SHIFT (<<):
/*
#include<iostream>
using namespace std;
int main(){
    int x=1;
    cout<<"after left shift "<<(x<<3)<<endl;
    return 0;
} 
*/

// 5) RIGHT SHIFT (>>):
/*
#include<iostream>
using namespace std;
int main(){
    int x=8;
    cout<<"after right shift "<<(x>>2)<<endl;
    return 0;
} 
*/

// 6) BITWISE NOT (~):
/*
#include<iostream>
using namespace std;
int main(){
    int x=8;
    cout<<(~x)<<endl;
    return 0;
}
*/


// UNIQUE NUMBER PROBLEM:                              ///////do again///////
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int no;
    int i;
    int ans=0;
    for(i=0;i<n;i++){
        cin>>no;
        ans=ans^no;
    }
    cout<<"unique number: "<<ans;
    cout<<endl;
    return 0;
}
*/


                     //DO WHILE
/*                   
#include<iostream>
using namespace std;
int main(){
    int i=1; // initialization
    do{
        cout<<i<<endl; 
        i=i+1; // updation check
    }
    while(i<5); // condition check
} 
*/                         


                    //SWITCH CASE
/*                    
#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;

    // N:north, S:south, E:east, W:west
    // NOTE: in this everything will be printed below from what you have entered ( like if i entered south, then it will print everything below south till defsault.)
    switch(ch){
        case 'N': // task for N
              cout<<"north"<<endl;
        case 's': // task for S
              cout<<"south"<<endl;
        case 'E': // task for E
              cout<<"east"<<endl;
        case 'W': // task for W
              cout<<"west"<<endl;
        default:
              cout<<"invalid input"<<endl;
    }
    cout<<endl;
    return 0;
}                    
*/

// USING BREAK STATEMENT IN SWITCH CASE:
/*
#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;

    // N:north, S:south, E:east, W:west
    switch(ch){
        case 'n':
        case 'N': // task for N
              cout<<"north"<<endl;
              break;
        case 's':      
        case 'S': // task for S
              cout<<"south"<<endl;
              break;
        case 'e':      
        case 'E': // task for E
              cout<<"east"<<endl;
              break;
        case 'w':      
        case 'W': // task for W
              cout<<"west"<<endl;
              break;
        default:
              cout<<"invalid input"<<endl;
    }
    cout<<endl;
    return 0;
} 
*/               


                // WHITESPACE INPUT            
// Count characters till dollar($):
/*
#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int count=0;
    while(ch!='$'){
        count++;
        cin>>ch;
    }
    cout<<"total characters:"<<count;
    cout<<endl;
    return 0;
}
*/

//cin.get                                     /////important/////
/*
#include<iostream>
using namespace std;
int main(){
    char ch;
    // cin>>ch;
    // to read witespace simply use cin.get()
    ch=cin.get();
    int count=0;
    while(ch!='$'){
        count++;

        // cin>>ch;
        ch=cin.get();
    }
    cout<<"total characters:"<<count;
    cout<<endl;
    return 0;
}
*/


                // REFERENCE VARIABLE        /////asked in interviews//////
/*                
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int &b=a;
    int &c=b;
    c++;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
} 
*/               
