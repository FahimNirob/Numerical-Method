#include<bits/stdc++.h>
using namespace std;

double cal_U(double u, double n){
    double temp;
    for(int i=1;i<n;i++){
        temp = temp*(u-i);
       //cout << temp;
    }
    return temp;
}

int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f = f*i;
    }
    return f;
}

int main(){
    int n=4;
    double x[] = {45,50,55,60};
    double y[n][n];
    y[0][0] = 0.7071;
    y[1][0] = 0.7660;
    y[2][0] = 0.8192;
    y[3][0] = 0.8660;

    // Calculate the forward difference table
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            y[j][i] = y[j+1][i-1] - y[j][i-1];
        }
    }

    // Display the table
    for(int i=0;i<n;i++){
        cout<<setw(4)<<x[i]<<"\t";
        for(int j=0;j<n-i;j++){
            cout<<setw(4)<<y[i][j]<<"\t";
        }
        cout<<endl;
    }

    // value to interpolate
    double value;
    cout<< "Enter value: ";
    cin>>value;

    // initializing u and sum
    double sum=y[0][0];
    double u = (value - x[0]) / (x[1]-x[0]);
    for(int i=1;i<n;i++){
        sum = sum + (cal_U(u,i)*y[0][i]) / fact(i);
    }

    cout<< "Value at "<<value<<"is: "<<sum<<endl;
    return 0;
}
