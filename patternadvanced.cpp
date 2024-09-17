          //ADVANCED LEVEL QUESTIONS

/*      &
      & &
    & & &
  & & & &
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int space=n-i;
    while(space){
        cout<<" ";
        space=space-1;
    }
    int j=1;
    while(j<=i){
        cout<<"&";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }
}   


/*
   * * * *
   * * *
   * * 
   * 
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int j=1;
    while(j<=n-i+1){
        cout<<"*"<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1; 
   }
}   


/*
   $ $ $ $ 
     $ $ $
       $ $
         $
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int space=1;
    while(space<i){
        cout<<" ";
        space=space+1;
    }
    int j=1;
    while(j<=n-i+1){
        cout<<"$"<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }
}
/*
   1 1 1 1 
     2 2 2 
       3 3 
         4
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int space=1;
    while(space<i){
        cout<<" ";
        space=space+1;
    }
    int j=1;
    while(j<=n-i+1){
        cout<<i<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }
}
/*
         1
       2 2
     3 3 3
   4 4 4 4 
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int space=n-i;
    while(space){
        cout<<" ";
        space=space-1;
    }
    int j=1;
    while(j<=i){
        cout<<i<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }
}
/*
          1
        2 3
      4 5 6
    7 8 9 10
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   int num=1;
   while(i<=n){
    int space=n-i;
    while(space){
        cout<<" ";
        space=space-1;
    }
    int j=1;
    while(j<=i-1){
        cout<<num<<" ";
        num=num+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }
}