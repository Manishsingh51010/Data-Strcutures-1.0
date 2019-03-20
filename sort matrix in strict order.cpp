#include<bits/stdc++.h>
using namespace std;
#define max 10

void sortmat(int mat[max][max],int n){
  int temp[n*n];
  int k=0;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        temp[k++]=mat[i][j];
    }
  }
  sort(temp,temp+k);
  k=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        mat[i][j]=temp[k++];
    }
  }
}
  void print(int mat[max][max],int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<mat[i][j]<<" ";

    }
    cout<<endl;
   }
  }

int main()
{
    int mat[max][max];
    int n=3;
    cout<<"Enter matrix\n";
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>mat[i][j];
    }
  }
    cout << "Before sorting:\n";
    print(mat,n);
    sortmat(mat,n);
    cout << "\nAfter Sorting:\n";
    print(mat, n);
    return 0;
}
