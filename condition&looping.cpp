// ascii values
#include<iostream>
using namespace std;

int main(){
    char a;
    cin>>a;

    if(a>='A' && a<='Z'){
        cout<<"This is upper case"<<endl;
    }
    else if(a>='a' && a<='z'){
        cout<<"This is lowercase"<<endl;
    }
    else if(a>='0' && a<='9'){
        cout<<"This is a digit"<<endl;
    }
    return 0;
}


//sum of all even numbers from 1 to n.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    int i=2;
    while(i%2==0){
        if (i%2==0)
           sum = sum+i;
        i=i+1;   
    }
    cout<<"sum from"<<1<<"to"<<n<<"="<<sum<<endl;
    return 0;
}


//farenheit to celcius
#include<iostream>
using namespace std;

int main(){
    float farenheit;
    cin>>farenheit;
    float celcius=(5.0/9)*(farenheit-32);
    cout<<farenheit<<"F ="<<celcius<<"C"<<endl;

    return 0;
}


//prime number or not
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"Not prime"<<endl;
            return 0;
        }
        cout<<"prime number"<<endl;
        return 0;
    }
}