
#include<iostream>
using namespace std;
#define max 100

// SADDLEBACK APPROACH  - DIFFERENT SIZES OF ROWS AND COLUMNS
bool findnum(int mat[][max],int m,int n,int x){
 int i=m-1,j=0;
 while(i>=0 && j<n){
    if(mat[i][j]==x){
        cout<<"Position:"<<i<<","<<j<<endl;
            return 1;
    }
    if(mat[i][j]>x)
        i--;
    else
        j++;
 }
 cout<<"Not found";
 return 0;
}

int main(){
  int m,n,x;
  cout<<"Enter sizes\n";
  cin>>m>>n;
  int mat[][max] = { {10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50},
                     {50, 60, 70, 80},
                  };
  cout<<"Enter number\n";
  cin>>x;
  (findnum(mat,m,n,x));
}
