#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.001

double f(double x){
    return x*x*x - x*x +2;
}

double df(double x){
    return 3*x*x - 2*x;
}

class NewtonRaphsonClass{
public:
    void NewtonRaphson(double x){
        double h = f(x)/df(x);
        while(abs(h)>=EPSILON){
            h = f(x)/df(x);
            x = x - h;  // (x+i) = x(i) - f(x)/f'(x)
            cout<<"x= "<<x<<"  f(x)= "<<f(x)<<endl;
        }
        cout<< "Actual Root: "<<x<<endl;
    }
};

int main(){
    NewtonRaphsonClass NR;
    double a;
    cout<< "Enter initial value: ";
    cin>>a;
    NR.NewtonRaphson(a);
    return 0;
}
