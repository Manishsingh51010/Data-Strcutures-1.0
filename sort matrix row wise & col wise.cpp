#include<bits/stdc++.h>
using namespace std;
#define max 10
void sortrow(int mat[max][max],int n){
 for(int i=0;i<n;i++){
    sort(mat[i],mat[i]+n);
 }
}

void transpose(int mat[max][max],int n){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        swap(mat[i][j],mat[j][i]);
    }
  }
}

void sortrowandcol(int mat[max][max],int n){
 sortrow(mat,n);
 transpose(mat,n);
 sortrow(mat,n);
 transpose(mat,n);
}

void print(int mat[max][max],int n){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main(){
int mat[max][max] = { { 4, 1, 3 },
                      { 9, 6, 8 },
                      { 5, 2, 7 } };
    int n = 3;
    cout<<"Before:\n";
    print(mat,n);
    sortrowandcol(mat,n);
    cout<<"after:\n";
    print(mat,n);
    return 0;

}

