#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x[20],y[20];
    int sumX=0;
    int sumY=0;
    int sumXY=0;
    int sumX2=0;
    float a,b; // a=a1, b=a0

    cout<<"Number of terms: ";
    cin>>n;
    cout<<"Values of x:"<<endl;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    cout<<"Values of y:"<<endl;
    for(int i=0;i<n;i++){
        cin>>y[i];
    }

    // finding the sum of x,y,xy,x2
    for(int i=0;i<n;i++){
        sumX = sumX + x[i];
        sumY = sumY + y[i];
        sumXY = sumXY + x[i]*y[i];
        sumX2 = sumX2 + x[i]*x[i];
    }
    cout<< "X: "<<sumX<<endl;
    cout<< "Y: "<<sumY<<endl;
    cout<< "XY: "<<sumXY<<endl;
    cout<< "X2: "<<sumX2<<endl;

    // computing a
    a = ((n*(sumXY)-sumX*sumY)*1.0 ) / ((n*sumX2)-(sumX*sumX)*1.0);
    cout<<"a : "<<a<<endl;
    float avgX,avgY;
    avgX = float(sumX)/n;
    avgY = float(sumY)/n;
    cout<< "Average x : "<<avgX<<endl;
    cout<< "Average y : "<<avgY<<endl;

    b = avgY - (a*avgX);
    cout<<"b : "<<b<<endl;
    cout<<"The equation: Y = "<<setprecision(5)<<b<<"+"<<setprecision(5)<<a<<"x"<<endl;



}
