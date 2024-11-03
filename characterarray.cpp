                   // CHARACTER ARRAY 
// for single quote 

#include<iostream>
using namespace std;
int main(){
    char a[]={'A','N','K','I','T','\0'}; // note:- Add the null value (\n) at the end while initializing
    // mentioning the size of the array is optional
    cout<<a<<endl;
    return 0;
}



// Double quotes:

#include<iostream>
using namespace std;
int main(){
    char a[]={"welcome to my repository"}; // Note: in double quotes null value gets added by default
    cout<<a<<endl;
    return 0;
}



            // ITERATION in character array:

#include<iostream>
using namespace std;
int main(){
    char a[]={"hello world"};
    for(int i=0; a[i]!='\0'; i++){
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}   
     


          // USER INPUT:
    // Note:- using cin.get() (so that it can read white spaces)

#include<iostream>
using namespace std;
void readline(char a[],char delimiter){   // Note:- Delimiter = '\n'
    int i=0;
    char ch=cin.get();

    while(ch!= delimiter){
        a[i]=ch;
        i++;
        ch=cin.get();
    }
    a[i]='\0';
}
int main(){
    char a[50];
    readline(a,'\n');
    cout<<a<<endl;
    return 0;
} 
    


     // Read lines_cin.get():

#include<iostream>
using namespace std;
void readlines(char a[], char delimiter='\n'){
    int i=0;
    char ch=cin.get();
    while(ch!=delimiter){
        a[i]=ch;
        i++;
        ch=cin.get();
    }
    a[i]='\0';
}
int main(){
    char a[100];
    cin.getline(a,100);
    cout<<a<<endl;
    return 0;
}



// example 2: 

#include<iostream>
using namespace std;
void readline(char a[], char delimiter='\n'){
    int i=0;
    char ch=cin.get();
    while(ch!=delimiter){
        a[i]=ch;
        i++;
        ch=cin.get();
    }
    a[i]='\0';
}
int main(){
    char a[400];
    cin.getline(a,400,'$');
    cout<<a<<endl;
    return 0;
}



         // FIND LENGTH:
// Example: 1

#include<iostream>
using namespace std;
int length(char a[]){
    int i;
    for(i=0; a[i]!='\0'; i++){

    }
    return i;
}
int main(){
    char a[100];
    cin.getline(a,100);
    int ans =length(a);
    cout<<ans<<endl;
    return 0;
}



// Example 2:
// using inbuilt function:

#include<iostream>
#include<algorithm>
#include<cstring> // include this header file for strlen
using namespace std;
int length(char a[]){
    int i;
    for(i=0; a[i]!='\0';i++){

    }
    return i;
}
int main(){
    char a[100];
    cin.getline(a,100);
    int ans=length(a);
    cout<<ans<<endl;

    // inbuilt function to find the length of the character array
    cout<<strlen(a)<<endl;
    return 0;
}



             // CHECK PALLINDROME:

#include<iostream>
#include<cstring> // header file for using character array function
using namespace std;
bool ispallindrome(char a[]){
    int i=0;
    int j=strlen(a)-1;
    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    char a[100];
    cin>>a;
    if(ispallindrome(a)== true){
        cout<<"is pallindrome"<<endl;
    }
    else{
        cout<<"not a pallindrome"<<endl;
    }
}



        // Handling Numbers and Strings:   

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[400];
    cin.get(); // ignore the '\n' after taking input of the number n.
    // we read the ip pointer value but we did not store it anywhere, thus ignored.
    for(int i=0; i<n; i++){
        cin.getline(a,400);
        cout<<a<<endl;
    }
}



              // Largest length:

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    char a[500];
    char largest[500];
    int largest_len=0;
    
    int n;
    cin>>n; // number of string user will input
    cin.get();
    for(int i=0; i<n; i++){
        cin.getline(a,500);
        int len=strlen(a);
        
        if(largest_len<len){
            largest_len=len;
            strcpy(largest,a);
        }
    }
    cout<<largest<<endl;
    cout<<"length: "<<largest_len<<endl;
    return 0;
}



                 // Remove consecutive duplicates:
                 // asked in interviews:
            
#include<iostream>
#include<cstring>
using namespace std;
void removeduplicates(char a[]){
    int len=strlen(a);
    int j=1;
    int i=0;
    while(j<len){
        if(a[i]!=a[j]){
            i++;
            a[i]=a[j];
        }
        j++;
    }
    a[i+1]='\0';
}
int main(){
    char a[500];
    cin.getline(a,500);
    cout<<a<<endl;
    removeduplicates(a);
    cout<<a<<endl;
}



                // ROTATE STRING:
                // very commonly asked in interviews:

#include<iostream>
#include<cstring>
using namespace std;
void rotatestring(char a[],int n){
    // 1. Move every character n positions ahead 
    int len=strlen(a);
    int i=len-1;
    // cout<<a<<endl;
    while(i>=0){
        a[i+n]=a[i];
        i--;
    }
    // cout<<a<<endl;

    i=0;
    int j=len;
    while(i<n){
        a[i]=a[j];
        i++;
        j++;
    }
    // cout<<a<<endl;
    a[len]='\0';
    // cout<<a<<endl;
}
int main(){
    char a[10]="hello";
    int n=3;

    cout<<"before rotation: "<<a<<endl;
    rotatestring(a,n);
    cout<<"after rotation: "<<a<<endl;
    return 0;
}


//Example : cin.getline
#include<iostream>
using namespace std;
int main(){
    char arr[8];
    cout<<"enter char array: ";
    cin.getline(arr, 8);
    for(char ch : arr){
        cout<<ch<<" ";
    }
    cout<<endl;
    return 0;
}
