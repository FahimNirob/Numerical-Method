#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,i,j,r;
    int N;
    cin>>N;
    float x[N][N+1],a[N];
    float ae,mxit,mx,sum,t,e;

    for(i=0;i<N;i++) a[i]=0;
    //cout<<"Number of terms: ";
    //cin>>n;
    cout<<"Enter elements of augmented matrix in row-wise:"<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N+1;j++){
            cout<<"x["<<i<<"]"<<"["<<j<<"]"<<":";
            cin>>x[i][j];
        }
    }

    cout<< "Allowed error: ";
    cin>> ae;
    cout<< "Maximum iteration: ";
    cin>>mxit;
    cout<<"Iteration\t[x1]\t[x2]"<<endl;

    for(r=1;r<=mxit;r++){
        mx=0.0;
        for(i=0;i<N;i++){
            sum=0;
            for(j=0;j<N;j++){
                if(j!=i){
                    sum = sum + x[i][j]*a[j];
                }
            }
            t = (x[i][N]-sum)/x[i][i];
            e= fabs(a[i]-t);
            a[i]=t;
        }
        printf("%5d\t",r);
        for(i=0;i<N;i++){
            printf("%9.4f\t",a[i]);
        }
        printf("\n");
        if(mx<ae){
            printf("Converses in %3d iteration",r);
            for(i=0;i<N;i++){
                printf("a[%3d]=%7.4f\n", i+1,a[i]);
                return 0;
            }
        }
    }
}
