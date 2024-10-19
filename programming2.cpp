// print numbers from 1 till 10
//whileloop 

#include<iostream>
using namespace std;
int main(){
    int a = 1;//initialization
    while(a<=10){
        cout<<a<<endl;
        a=a+1;//updation
    }
    cout<<endl;
    return 0;
}



//print numbers from 1 till n

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i=i+1;
    }
    cout<<endl;
    return 0;
}



//print even numbers

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        if(i%2==0){
        cout<<i<<" ";
    }
    i=i+1;
    }
    cout<<endl;
    return 0;
}



//sum of the dights 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; // this is how n is initialized
    int sum=0;
    while(n!=0){
        sum=sum+n%10;
        n=n/10; // updation of n
    }
    cout<<"sum of digits"<<sum;
    cout<<endl;
    return 0;
}




// BREAK STATEMENT 

#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=10){
        if(i==7){
            break;
        }
        cout<<i<<" ";
        i=i+1;
    }
    cout<<endl;
    return 0;
}



//BREAK STATEMENT INFINITE LOOPS

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i>=1){
        cout<<i<<" ";
        if(i>=n){
            break;
        }
        i=i+1;
    }
    cout<<endl;
    return 0;
}



//number is prime or not(using break statement)

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        // if n gets divided by any i, that means not a prime
        if(n%i==0){
            cout<<"not a prime number";
            break;// this takes us out of the inner most loop
        }
        i=i+1;
    }
    if(i==n){
        cout<<"prime number";
    }
    cout<<endl;
    return 0;
}



// CONTINUE STATEMENT 

#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=10){
        cout<<i<<" ";
        if(i==5){
        i=i+1;
            continue;
        }
        i=i+1;
    }
    cout<<endl;
    return 0;
}



// example:
#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=10){
        if(i==3){
            i=i+1;
            continue;// if i==3 then it will skip 3 in the output
        }
        cout<<i<<" ";
        i=i+1;
    }
    cout<<endl;
    return 0;
}



// LARGEST NUMBER

#include<iostream>
#include<climits>// to get the least value of buckets 
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int no;
    int largest = INT_MIN; // INT_MIN == -2^31, INT_MAX-for largest value
    while(i<=n){
        cin>>no;
        if(largest<no){
            largest=no;
        }
        i=i+1;
    }
    cout<<"largest number is"<<largest;
    cout<<endl;
    return 0;
} 





                        // FOR LOOPS 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i; 
    for(i=1;i<=n;i=i+1){
    cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}



//print all the even numbers using for loops 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    for(i=1;i<=n;i=i+1){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}



//PRINT ALL THE PRIME NUMBERS 

#include<iostream>
using namespace std;
int main(){
    int i;
    int n,no;
    cin>>n;
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
    cout<<endl;
    i=i+1;
}




//STAR PATTERN 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row,col;
    for(row=1;row<=n;row=row+1){
        for(col=1;col<=row;col=col+1){
            cout<<"*";
        }
        cout<<'\n';// or we can use endl; instead.
    }
    cout<<endl;
    return 0;
}



//NUMBER PATTERN 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row,i,no;
    for(row=1;row<=n;row=row+1){
        // 1.print n-row times spaces
        for(i=1;i<=n-row;i=i+1){
            cout<<" ";
        }
        // 2.print 2*row-1 times number, starting from 1
        no=1;
        for(i=1;i<=2*row-1;i=i+1){
            cout<<no;
            no=no+1;
        }
        // 3.Go to next line by endl;
        cout<<endl;
    }
    return 0;
}
