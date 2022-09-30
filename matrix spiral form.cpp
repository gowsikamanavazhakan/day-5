#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the N :";
    cin>>n;
    
    int a[n][n], col=n, row=n;
    cout<<"Enter the elements of the matrix:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
          cin>>a[i][j];
    }
    
    int k = 0, l = 0;
    cout<<"Matrix in spiral form:\n";
    while (k < row and l < col){
        
        for (int i = l; i < col; i++)
            cout<<a[k][i]<<" ";
        k++;
        
        for (int i = k; i < row; i++)   
            cout<<a[i][n - 1]<<" ";
        col--;
    
        if (k < row){
            for (int i = col - 1; i >= l; i--)
                cout<<a[n - 1][i]<<" ";
            row--;
        }
            
        if (l < col){
            for (int i = row - 1; i >= k; --i)
              cout<<a[i][l]<<" ";
            l++;
        }
    }
    
    return 0;
}
