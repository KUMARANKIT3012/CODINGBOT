                  // 2d array:
// Example 1:
/*
#include<iostream>
using namespace std;
int main(){
    int a[4][5]{ // a[row]a[col];
        {1,2,3,4},
        {5,6,7},
        {8,9,10,11},
        {1,2,3,4},
    };
    int n=4; // total number of rows
    int m=5; // total number of columns
    for(int row=0; row<n; row++){
        for(int col=0; col<m; col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/


// Example 2:
/*
#include<iostream>
using namespace std;
int main(){
    int a[][5]={ // here number of rows are not necessary;
        {1,1,3,4,5},
        {2,3,5,6},
        {5,5},
        {6,8,9},
    };
    int n=4, m=5;
    for(int row=0; row<n; row++){
        for(int col=0; col<m; col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

     
            // USER INPUT:
// Example 1:            
/*            
#include<iostream>
using namespace std;
int main(){
    int a[5][5];
    int row, col;
    int r,c;
    cout<<"number of rows and column";
    cin>>r>>c;
    cout<<"enter the values"<<endl;
    for(row=0; row<r; row++){
        for(col=0; col<c; col++){
            cin>>a[row][col];
        }
    }
    for( row=0; row<r; row++){
        for(col=0; col<c; col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }    
    return 0;
}
*/


// Example 2:
// (not used commonly while coding / just for understanding)
/*
#include<iostream>
using namespace std;
int main(){
    int a[5][5];
    int row, col;
    int r,c;
    cout<<"number of rows and column";
    cin>>r>>c;
    // cout<<"enter the values"<<endl;
    int val=1;
    for(row=0; row<r; row++){
        for(col=0; col<c; col++){
            // cin>>a[row][col];
            a[row][col]=val;
            val++;
        }
    }
    for( row=0; row<r; row++){
        for(col=0; col<c; col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }    
    return 0;
}
*/


// Wave print:
/*
#include<iostream>
using namespace std;
int main(){
    int a[3][4]{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int n=3, m=4;
    for(int col=0; col<m; col++){
        if(col%2==0){
            // column is even 
            for(int row=0; row<n; row++){
                cout<<a[row][col]<<" ";
            }
            // column is odd
            for(int row=n-1; row>=0; row--){
                cout<<a[row][col]<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}
*/


            // 2D array (FUNCTION):
/*
#include<iostream>
using namespace std;
void waveprint(int a[][4],int n, int m){
    
    for(int col=0; col<m; col++){
        if(col%2==0){
            // column is even 
            for(int row=0; row<n; row++){
                cout<<a[row][col]<<" ";
            }
            // column is odd
            for(int row=n-1; row>=0; row--){
                cout<<a[row][col]<<" ";
            }
        }
    }

}
int main(){
    int a[3][4]{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int n=3, m=4;
    waveprint(a,n,m);
    return 0;
}            
*/


         // SPIRAL PRINT:
         // Important(asked in interview)
    /* note- 1)sr- starting row
             2)sc- starting column
             3)er- end row
             4)ec- end column */      
/*
#include<iostream>
using namespace std;
void spiralprint(int a[50][50], int n, int m){
    // initialize the four iterator:
    int sr=0, sc=0, er=n-1, ec=m-1;
    while(sr<=er and sc<=ec){

        // 1) print sr from sc to ec, sr++
        for(int col=sc; col<=ec; col++){
            cout<<a[sr][col]<<" ";
        }
        sr++;

        // 2) print ec from sr to er, ec--
        for(int row=sr; row<=er; row++){
            cout<<a[row][ec]<<" ";
        }
        ec--;

        // 3) print er from ec to sc, er--
        if(sr<er){
            for(int col=ec; col>=sc; col--){
                cout<<a[er][col]<<" ";
            }
            er--;
        }
        
        // 4) print sc from er to sr, sc++
        if(sc<ec){
            for(int row=er; row>=sr; row--){
                cout<<a[row][sc]<<" ";
            }
            sc++;
        }
    }
    cout<<endl;
}
int main(){
    int a[50][50];
    int r,c;
    cin>>r>>c;
    int val=1;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            a[i][j]=val;
            val++;
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    spiralprint(a,r,c);
    return 0;
}
*/


             // ROTATE IMAGE:
             // Important for interview:
/*
#include<iostream>
using namespace std;
void rotateimage(int a[][50], int n){
    // reverse the roes first:
    for(int row=0; row<n; row++){
        int x=0,y=n-1;
        while(x<y){
            swap(a[row][x],a[row][y]);
            x++;
            y--;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    // take the transpose:
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }
    // print the output:
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a[50][50];
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    rotateimage(a,n);
    return 0;
}
*/



                   // STAIRCASE SEARCH:
                   // note: use of "Binary Search" (Algorithm)
                   // VERY VERY IMPORTANT FOR INTERVIEW:
/*
#include<iostream>
using namespace std;
void staircasesearch(int a[][4], int n, int m){

    int key=14;
    bool iskeypresent =false;
    int i=0,j=m-1;

    while(i<n and j>=0){
        if(a[i][j]==key){
        cout<<"key is found at index: "<<i<<","<<j<<endl;
        iskeypresent=true;
        break;
        }
        else if(a[i][j]<key){
            i++;
        }
        else{
            j--;
        }
    }
    if(iskeypresent==false){
        cout<<"key is not found"<<endl;
    }
}
int main(){
    int a[4][4]={
        {1,4,8,10},
        {2,5,9,15},
        {6,13,18,20},
        {13,14,21,25}
    };
    int n=4,m=4;
    staircasesearch(a,n,m);
}
*/