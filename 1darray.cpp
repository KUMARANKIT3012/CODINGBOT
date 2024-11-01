                     // ARRAY:
        // Initialization of an array

// Example 1:
/*
#include<iostream>
using namespace std;
int main(){
    int a[5]={10,20,30,40,50};
    for(int i=0; i<5; i++){ // printing an array via looping:
        cout<<a[i]<<endl;
    }
    return 0;
}
*/

// Example 2:
/*
#include<iostream>
using namespace std;
int main(){
    int a[10]={10,20,30,40,50};
    for(int i=0; i<10; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
*/


// Example 3:
/*
#include<iostream>
using namespace std;
int main(){
    int a[]={10,20,30,40,50};
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
*/


                 // USER INPUT: 
/*                 
#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cout<<"enter the value of n(max: 100): ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
} 
*/                


                 // LINEAR SEARCH (ALGORITHM):-
/*                 
#include<iostream>
using namespace std;
int main(){
    int a[4]={4,8,12,2};
    int n=4, i; // size of the array is 4
    int key=12; // key that we have to find in the array
    for(i=0; i<n; i++){
        // i==n-1
        if(a[i]==key){
            cout<<"key found at index "<<i;
            break; // to stop the loop 
        }
    }
    // two ways to exit the loop:
    // 1. when i==n, loop terminate
    // 2. break statement gets executed, i can never be equal to n-1
    if(i==n){
        cout<<"key is not present"<<endl;
    }
    cout<<endl;
    return 0;
}
// output is: key found at index 2
*/


                // LARGEST NUMBER:
/*                
#include<iostream>
#include<climits> // INT_MAX and INT_MIN 
using namespace std;
int main(){
    int a[]={1,6,5,7,0};
    int n=5;
    int mx=INT_MIN; // mx=-infinity
    for(int i=0; i<n; i++){
        if(mx<a[i]){
            mx=a[i];
        }
    }
    cout<<"largest number is "<<mx<<endl;
    return 0;
} 
// output = largest number is 7.
*/                


                 // SORTING:

// BUBBLE SORT:
/*
#include<iostream>
using namespace std;
int main(){
    int a[5]={5,6,3,8,2};
    int n=5;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<=n-2; i++){
        for(int j=0; j<=n-2; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
     for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/           

// SELECTION SORT:                 
/*
#include<iostream>
using namespace std;
int main(){
    int a[]={5,3,4,1,2};
    int n=5;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;    
    for(int i=0; i<=n-2; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min= j;
            }
        }
        swap(a[i],a[min]);
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/

//INSERTION SORT:
/*
#include<iostream>
using namespace std;
int main(){
    int a[]={5,3,1,2,4};
    int n=5,i,j;
    cout<<"before sorting"<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // insertion sort:
    for( i=0; i<n; i++){
        int pickedupcard= a[i];
        for( j=i-1; j>=0 && a[j]>pickedupcard; j--){
            a[j+1]=a[j];
        }
        a[j+1]=pickedupcard;
    }
    cout<<"After sorting "<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
*/

                          // INBUILT SORT:
// example 1:     
/*            
#include<iostream>
#include<algorithm> // remember to include this.
using namespace std;
int  main(){
    int a[]={1,2,4,6,7,3};
    int n= sizeof(a) /sizeof(int);
    cout<<"before sorting"<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    sort(a,a+n); // sort function is used to sort an array.

    cout<<"after sorting"<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/

//exapmle 2:
/*
#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a, int b){ // bool compare is used for comparision
    cout<<" comparing "<<a<<"and"<<b<<endl;
    return a<b; // ascending order
}
int main(){
int a[]={1,3,6,2,4};
int n= sizeof(a)/sizeof(int);

cout<<"before sorting"<<endl;
for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}
cout<<endl;

sort(a,a+n, compare); // sort function is used to sort an array.
cout<<"after sorting"<<endl;
for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}
cout<<endl;
return 0;
}
*/

//exapmle 3:
/*
#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a, int b){ // bool compare is used for comparision
    cout<<" comparing "<<a<<"and"<<b<<endl;
    return a>b; // descending order
}
int main(){
int a[]={5,7,8,2,1,4};
int n= sizeof(a)/sizeof(int);

cout<<"before sorting"<<endl;
for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}
cout<<endl;

sort(a,a+n, compare); // sort function is used to sort an array.
cout<<"after sorting"<<endl;
for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}
cout<<endl;
return 0;
}
*/


                   // USING ARRAY WITH FUNCTION:
/*
#include<iostream>
#include<algorithm>
using namespace std;

void printarray(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}       
int main(){
    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);
    
    cout<<n<<endl;
    cout<<"using printarray function: "<<endl;
    printarray(a,n);

    return 0;
}
*/


         // COMPARATOR USECASE:
/*         
#include<iostream>
#include<algorithm>
using namespace std;

void printarray(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}       

bool compare(int a,int b){
    return a>b;
}

void bubblesort(int a[],int n, bool(&mycompare)(int a, int b)){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if (mycompare(a[j],a[j+1])){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main(){
    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);

    cout<<"before bubble sort: ";
    printarray(a,n);

    // calling bubble sort
    bubblesort(a,n,compare);

    cout<<"after bubble sort: ";
    printarray(a,n);

    return 0;
}
*/


             // PAIR SUM:
/*
#include<iostream>
using namespace std;
int main(){
    int a[]={1, 4, 5, 6, 8, 10};
    int n=sizeof(a)/sizeof(int);

    int i=0,j=n-1;
    int sum=11;
    while(i<j){
        if(a[i]+a[j]==sum){
            cout<<a[i]<<" "<<a[j]<<endl;
            i++;
            j--;
        }
        else if(a[i]+a[j]<sum){ // Two Pointer A
            i++;
        }
        else if(a[i]+a[j]>sum){
            j--;
        }
    }
    return 0;
}      
*/



                    // SUB ARRAY:
// GENERATING SUBARRAY:                    
/*                    
#include<iostream>
#include<algorithm>
using namespace std;
void generatesubarrays(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    int a[]={1,2,3,4,5};
    int n= sizeof(a)/sizeof(int);
    generatesubarrays(a,n);
}                   
*/


// MAXIMUM SUM SUBARRAY:
/*
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void generatesubarrays(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
}
void maximumsubarrays(int a[], int n){
    int max_sum=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum=sum+a[k];
            }
            if(max_sum<sum){
                max_sum=sum;
            }
            cout<<sum<<endl;
        }
    }
    cout<<endl;
    cout<<"maximum sum of sub array is : "<<max_sum;
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/ sizeof(int);
    generatesubarrays(a,n);
    maximumsubarrays(a,n);
    return 0;
}
*/


// MAXIMUS SUM SUBARRAY:
/*
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void generatesubarrays(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
}
void maximumsubarrays(int a[], int n){
    int max_sum=INT_MIN;
    int wi, wj; // it tells us the first and the last index value of an array
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum=sum+a[k];
            }
            if(max_sum<sum){
                max_sum=sum;
                wi=i;
                wj=j;
            }
            cout<<sum<<endl;
        }
    }
    cout<<"maximum sub array: "<<endl;
    for(int i=wi;i<=wj; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"maximum sum of sub array is : "<<max_sum;
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/ sizeof(int);
    generatesubarrays(a,n);
    maximumsubarrays(a,n);
    return 0;
}
*/


// maximum subarray OPTIMIZED solution
/*
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

void maximumsumsubarray(int a[], int n){
    int max_sum=INT_MIN;
    int wi,wj;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum+=a[k];
            }
            if(max_sum<sum){
                max_sum=sum;
                wi=i;
                wj=j;
            }
        }
    }
    for(int i=wi; i<=wj; i++){
        cout<<a[i]<<" ";
}
cout<<endl;
cout<<"maximum sum subarray1: "<<max_sum<<endl;
}

void maximumsumsubarray2(int a[],int n){
    int max_sum=INT_MIN;
    int csum[1000]={0};

    // Pre computation to find csum array.
    for(int i=1;i<n;i++){
        csum[i]+=csum[i-1]+a[i];
    }
    int wi,wj;
    for(int i=0;i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            sum=csum[j]-csum[i-1];

            if(max_sum<sum){
                max_sum=sum;
                wi=i;
                wj=j;
            }
        }
    }
    for(int i=wi; i<=wj; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"max sum sub array 2: "<<max_sum<<endl;
}  

int main(){
    int a[]={0,-1,2,-2,3,6,-4,-3};
    int n=sizeof(a)/sizeof(int);
    maximumsumsubarray(a,n);
    maximumsumsubarray2(a,n);
}
*/