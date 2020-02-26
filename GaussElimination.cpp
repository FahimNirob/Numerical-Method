#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    float A[20][20],x[20],sum=0.0;
    float c;
    cout<<"Number of terms: ";
    cin>>n;
    cout<<"Enter elements of augmented matrix in row-wise:"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1;j++){
            cout<<"A["<<i<<"]"<<"["<<j<<"]"<<":";
            cin>>A[i][j];
        }
    }

    //triangular matrix
    for(int j=1;j<=n;j++){
        for(int i=1;i<=n;i++){
            if(i>j){
                c = A[i][j]/A[j][j];
            }
            for(int k=1;k<=n+1;k++){
                A[i][k] = A[i][k] - c*A[j][k];
            }
        }
    }
    x[n] = A[n][n+1]/A[n][n];

    //Back substitution
    for(int i=n-1;i>=1;i--){
        sum=0;
        for(int j=i+1;j<=n;j++){
            sum = sum + A[i][j]*x[j];
        }
        x[i] = (A[i][n+1]-sum)/A[i][i];
    }

    for(int i=1;i<=n;i++){
        cout<<"x"<<i<<": "<<x[i]<<endl;
    }
    return 0;
}
