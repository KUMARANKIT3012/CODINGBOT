              //MEDIUM LEVEL QUESTIONS

/*  1
    2 1
    3 2 1 
    4 3 2 1
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   int count=1;
   while(i<=n){
      int j=1;
      while(j<=i){
         cout<<(i-j+1)<<" ";
         j=j=1;
      }
      cout<<endl;
      i=i+1;
     
   }
   return 0;
}


/*
   A A A 
   B B B 
   C C C 
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   
   while(i<=n){
      int j=1;
      while(j<=n){
         char ch='A'+i-1;
         cout<<i<<" ";
         j=j=1;
      }
      cout<<endl;
      i=i+1;
     
   }
   return 0;
}


/*
   A B C 
   A B C
   A B C 
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   
   while(i<=n){
      int j=1;
      char ch='A';
      while(j<=n){
         cout<<ch<<" ";
         ch=ch+1;
         j=j=1;
      }
      cout<<endl;
      i=i+1;
     
   }
   return 0;
}


/*
   A B C 
   D E F
   G H I
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   char value='A';
   while(i<=n){
      int j=1;
      while(j<=n){
         cout<<value<<" ";
         value=value+1;
         j=j=1;
      }
      cout<<endl;
      i=i+1;
     
   }
   return 0;
}


/*
    A B C D 
    B C D E 
    C D E F 
    D E F G 
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   
   while(i<=n){
      int j=1;
      while(j<=n){
         char ch='A'+i+j-2;
         cout<<ch<<" ";
         ch=ch+1;
         j=j=1;
      }
      cout<<endl;
      i=i+1;
     
   }
   return 0;
}


/*
    A
    B B 
    C C C 
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   
   while(i<=n){
      int j=1;
      char ch='A'+i-1;
      while(j<=i){
         cout<<ch<<" ";
         ch=ch+1;
         j=j=1;
      }
      cout<<endl;
      i=i+1;
     
   }
   return 0;
}


/*
   A
   B C 
   D E F 
   G H I J
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   char value='A';
   while(i<=n){
      int j=1;
      while(j<=i){
         cout<<value<<" ";
         value=value+1;
         j=j=1;
      }
      cout<<endl;
      i=i+1;
     
   }
   return 0;
}
/*
   A 
   B C
   C D E 
   D E F G
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   
   while(i<=n){
      int j=1;
      while(j<=i){
         char ch='A'+i+j-2;
         cout<<ch<<" ";
         ch=ch+1;
         j=j=1;
      }
      cout<<endl;
      i=i+1;
     
   }
   return 0;
}
/*
   D 
   C D 
   B C D
   A B C D
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
      int j=1;
      char ch='A'+n-i;
      while(j<=n){
         cout<<ch<<" ";
         ch=ch+1;
         j=j=1;
      }
      cout<<endl;
      i=i+1;
     
   }
   return 0;
}