#include <iostream>
#include <cmath>
using namespace std;
float f(float y){
    return pow(y,2)*cos(y)+1;
}

float err(float a, float b){
    return abs((b-a)/2);
}

void bisez(float a, float b, int i){
    float x=0;
    do {
        x=(a+b)/2;
        if(f(x)!=0) {
            if (f(a) * f(b) < 0) {
                a = x;
            } else {
                b = x;
            }
            i++;
        }else
            break;
    }while(err(a,b)>=exp(-61));
    cout<<i<<endl;
    cout.precision(4);
    cout<<x<<endl<<f(x);
}

int main() {
    float a=0,b=0;
    do {
        cout << "inserire estremi"<<endl;
        cin >> a;
        cin >> b;
    }while(f(a)*f(b)>=0);
    bisez(a,b,0);
    return 0;
}
