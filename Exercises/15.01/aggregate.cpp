#include<iostream>
using namespace std;

double aggregate(double start, double end, double startValue, double (*op) (double, double), bool (*pred) (double), double(*step)(double), double(*map)(double)){
    if(start > end) { return startValue; }
    if(start == end){
            if(pred(start))
            {
                return op(startValue, map(end));
            }
            else return startValue;
    }
    if(pred(start)){
        return op(map(start), aggregate(step(start), end, startValue, op, pred, step, map));
    }else aggregate(step(start), end, startValue, op, pred, step, map);
}

double inc(double a){
    return a+1;
}

double id(double a){return a;}

double square(double a){
    return a*a;
}

double mult2(double a){
    return a*2;
}

double sum5(double a)
{
    return a+5;
}

double mul5(double a)
{
    return a*5;
}

double sum(double a, double b){
    return a + b;
}

bool even(int a){
    return a%2==0;
}

bool trueFunc(double a){
    return true;
}

double mult(double a, double b){
    return a*b;
}

double sumRange(int start, int end){
    return aggregate(start,end,0,sum,trueFunc,inc,id);
}

int main(){
    int a[5] {1,2,3,4,5};
    cout<<aggregate(1,10,0,sum,trueFunc,mult2,square)<<endl<<aggregate(1,5,1,mult,trueFunc,mult2,square)<<endl;

    cout<<sumRange(1,10);
  //  matrixRec(a,5);
}
