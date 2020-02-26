#include<bits/stdc++.h>
using namespace std;

double e=0.001;
double c;

double func(double x){
    return x*x*x - 2*x*x + 3;
}

class BisectionClass{
public:

    void bisection(double a, double b){
        if(func(a)*func(b)>=0){
            cout<< "Invalid input!"<<endl;
            return;
        }

        c=a; // initial guess for c
        while((b-a)>=e){
            c = (a+b)/2;
            if(func(c)==0.0){
                cout<< "Root = "<<c<<endl;
                break;
            }
            else if(func(c)*func(a)<0.0){  // if f(c) < 0, a=c
                cout<< "Root = "<<c<<endl;
                b=c;
            }
            else{
                cout<< "Root = "<<c<<endl;
                a=c;
            }
        }
    }

};


int main(){
    BisectionClass B;
    double a,b;
    cout<< "Enter a: ";
    cin>> a;
    cout<< "Enter b: ";
    cin>> b;
    B.bisection(a,b);
    cout<< "Accurate root: "<<c<<endl;
    return 0;

}
