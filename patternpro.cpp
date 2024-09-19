            // PRO LEVEL QUESTIONS 


/*
         1
      1  2  1
   1  2  3  2  1
1  2  3  4  3  2  1
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   while(i<=n){

// PRINT (1ST TRIANGLE)
    int space=n-i;
    while(space){
        cout<<" ";
        space=space-1;
    }
// PRINT (2ND TRIANGLE)    
    int j=1;
    while(j<=i){
        cout<<j;
        j=j+1;
    }
// PRINT (3RD TRIANGLE)
    int start=i-1;
    while(start){
        cout<<start;
        start=start-1;
    }    
    cout<<endl;
    i=i+1;
   }
}            



/*

1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1 
1 * * * * * * * * 1

*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   while(i<=n){

// PRINT (1ST TRIANGLE)
    int j=1;
    while(j<=n-i+1){
        cout<<j<<" ";
        j=j+1;
    }
// PRINT (2ND TRIANGLE)    
    j=1;
    while(j<=(i-1)*2){
        cout<<"* ";
        j=j+1;
    }
// PRINT (3RD TRIANGLE)
    j=n-i+1;
    while(j<=1){
        cout<<j<<" ";
        j=j+1;
    }    
    cout<<endl;
    i=i+1;
   }
}