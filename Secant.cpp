#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.0001

double x0,xm,c,n;
double f(double x){
    return x*x*x + x - 1;
}
class SecantClass{
public:
    void Secant(double a, double b){
        if(f(a)*f(b)<0.0){
            do{
                x0 = (a*f(b)-b*f(a))/(f(b)-f(a));
                c = f(a)*f(x0);
                a=b; // interchanging the values
                b=x0;
                if(c==0) break;
                xm = (a*f(b)-b*f(a))/(f(b)-f(a));
                n++;
            } while (abs(xm-x0) >= EPSILON);
            cout<< "Root: "<<x0<<endl;
            cout<< "Iteration: "<<n<<endl;
        }

        else{
            cout<< "Can't find a root in the given interval!"<<endl;
        }
    }
};

int main(){
    SecantClass S;
    double a,b;
    cout<< "Enter a: ";
    cin>>a;
    cout<< "Enter b: ";
    cin>>b;
    S.Secant(a,b);
    return 0;
}
