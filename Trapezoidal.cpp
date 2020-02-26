#include<bits/stdc++.h>
using namespace std;

float y(float x){
    return 1/(1+x*x);
}

float trapezoidal(float a, float b,float n){
    // grid spacing
    float h = (b-a)/n;

    // sum of first and last terms
    float s = y(a)+y(b);

    // adding middle terms in the above formula
    for(int i=1;i<n;i++){
        s = s + 2*y(a+i*h);
    }

    return (h/2)*s;
}

int main(){
    //Range of definite integral
    float x0=0;
    float x1=1;
    int n = 6; // no of grids
    cout<<"Value of integral is :"<<trapezoidal(x0,x1,n);
    return 0;
}
