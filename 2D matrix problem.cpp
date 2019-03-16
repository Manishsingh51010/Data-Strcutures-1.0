// Search a given number in row wise and column wise sorted 2D matrix

#include<iostream>
using namespace std;

int findnum(int mat[3][3],int n,int x){
    int i=0,j=n-1;
    while(i<n && j>=0){
        if(mat[i][j]==x){
            cout<<"Position:"<<i<<","<<j<<endl;
            return 1;
        }
        if(mat[i][j]>x)
            j--;
        else
            i++;
    }
 cout<<"Element not found\n";
 return 0;
}
int main(){
int mat[3][3];
cout<<"Enter array\n";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>mat[i][j];
    }
}
//print
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<"\n";
}
int x;
cout<<"Enter number to be searched\n";
cin>>x;
findnum(mat,3,x);
return 0;
}
