// FUNCTION:
/*
#include<iostream>
using namespace std;
// lets create a function to print helloworld
void helloworld(){
    // statements
    cout<<"hello world"<<endl;
}
void multiply(int a,int b){ // arguments is available to us over here 
    cout<<a*b<<endl; // argument
}
int main(){
    helloworld(); // call or invoke a function
    int a=10,b=20;
    multiply(a,b); // main called the function and while calling main gave these arguments
    cout<<endl;
    return 0;
}
*/


// FUNCTION BASICS:
/*
#include<iostream>
using namespace std;
//void multiply(int a,int b){
//    cout<<a*b<<endl;
//}
int multiply(int a, int b){
    int product = a*b;
    return product;
}
float multiplyfloat(float a,float b){ // argument
     return a*b;
}
int main(){
    int a=10,b=20;
    int ans=multiply(a,b); // main created a bucket called 'ans' so that it can store the value output which is given to main by the multiply function.
    cout<<ans+10<<endl;

    float x=10.1, y=10.11;
    float z=multiplyfloat(x,y);
    cout<<z;

    cout<<endl;
    return 0;
}
*/


// FORWARD DECLARATION:
/*
#include<iostream>
using namespace std;

// forward declaration part comes into the picture
int multiply(int a, int b); // if we want to remove 'a' and 'b' from int a and int b we can do that.

int main(){
    int a=10,b=20;
    int ans=multiply(a,b); 
    cout<<ans+10<<endl;

    int ans= multiply(100,30);
    cout<<ans<<endl;

    cout<<endl;
    return 0;
}
int multiply(int a, int b){
    int product = a*b;
    return product;
}
*/


// PRINT PRIME:
/*
#include<iostream>
using namespace std;
void printprimes(int n){
    int i,no;
    for(no=1;no<n;no=no+1){
        //check if the number is prime 
        for (i=2;i<no;i=i+1){
            if(no%i==0){
                break; // take us out of the innermost loop
            }
        }
        if(i==no){
            cout<<no<<" ";// print the number because it is prime 
        }
        //if prime print it else ignore it 
    }
}
int main(){
    int n;
    cin>>n;
    printprimes(n);
    cout<<endl;
    printprimes(n);
    return 0;
}    
*/


// CALCULATE nCr:
/*
#include<iostream>
using namespace std;

int fact(int n){
    int ans=1;
    for(int no=1;no<=n;no++){
        ans *= no;
    }
    return ans;
}
int nCr(int n,int r){
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);

    int ans =a/(b*c);
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    return 0;
}    
*/


// FIBONACCI SEQUENCE:
/*
#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1){
        // because we know that the first term is 0
        return 0;
    }
    else if(n==2){
        // because we know that the second term is 1
        return 1;
    }
    else{
        int a=0; // initializing the first value 
        int b=1,c; // initializing the second value
        for(int i=1;i<=n-2;i++){ // looping happens 
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}
int main(){ 
    int n;
    cin>>n;
    cout<<fibo(n);
}
*/


           // CALL BY VALUE AND CALL BY REFERENCE:
// call by VALUE value is not updating
/*
#include<iostream>
using namespace std;

void update(int a){
    a=a+1;
}
int main(){
    int x=1;
    cout<<"Before Update : "<<x<<endl;
    update(x);
    cout<<"After Update : "<<x<<endl;
    return 0;
}
*/

// call by REFERENCE value is updating
/*
#include<iostream>
using namespace std;

void update(int &a){ // we just have to add '&'.
    a=a+1;
}
int main(){
    int x=1;
    cout<<"Before Update : "<<x<<endl;
    update(x);
    cout<<"After Update : "<<x<<endl;
    return 0;
}
*/


// TRAILING ZEROS:
/*
#include<iostream>
using namespace std;

int trailingzeroes(int n){
    int ans=0;
    for(int d=5; n/d>=1; d*=5){
        ans+=n/d;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<trailingzeroes(n)<<endl;
    return 0;
}
*/

