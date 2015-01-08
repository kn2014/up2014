#include<iostream>
using namespace std;

void func(int i){
    cout<<i<<endl;
    if(i!=0)
        func (i-1);
}

int factoriel (int i){
    if(i == 1){
        return 1;
    }
    return i*factoriel (i-1);
}

int sumEven (int i){
    if(i == 0){
        return 0;
    }
    if(i % 2 == 0){
        return i + sumEven(i-2);
    }

    if(i%2 == 1){
        return sumEven(i-1);
    }
}

int fibonaci (int i){
    if(i==0)
        return 0;
    if(i==1)
        return 1;

    return fibonaci(i-1) + fibonaci(i-2);
}

int fibHelp (int i, int a, int b){
    if(i == 1)
        return b;
    fibHelp (i-1, b,a+b);
}

int fibonaci2 (int i){
    return fibHelp(i, 0 ,1);
}

int sumOfDigitsHelp (int n, int result){
    if(n == 0)
        return result;
    return sumOfDigitsHelp(n/10, result + n%10);
}

int sumOfDigits(int n){
    return sumOfDigitsHelp(n, 0);
}

int containsDigit(int n, int d){
    if(n==0){
        return false;
    }
    if(n%10 == d)
        return true;
    return containsDigit(n/10, d);
}

int sum(int a,int b)
{
    if(a>b) { return 0;}
    return a+sum(a+1,b);
}

int reverse_int_help(int n,int result)
{
    if(n==0) { return result;}
    return reverse_int_help(n/10,(n%10)+result*10);
}

int reverse_int(int n)
{
    return reverse_int_help(n,0);
}

int sum_of_divisors_help (int i,int n,int result)
{
    if(i==n) { return result + i; }
    if(n%i == 0 ) { return sum_of_divisors_help(i+1,n,result + i); }
    return sum_of_divisors_help(i+1,n,result);

}

int sum_of_divisors (int n)
{
    return sum_of_divisors_help(1,n,0);
}

bool is_prime(int n)
{
    return sum_of_divisors(n) == n+1;
}

int count_prime_divisors_help(int i,int n)
{
    if(i>n) { return 0;}
    if(is_prime(i)&& n%i==0) { return count_prime_divisors_help(i+1,n) + 1; }
    return count_prime_divisors_help(i+1,n);
}

int count_prime_divisors(int n)
{
    return count_prime_divisors_help(2,n);
}

int sumOfPrimesBetween (int a,int b)
{
    if(a>b) { return 0;}
    if(is_prime(a))
        return a+sumOfPrimesBetween(a+1,b);
    return sumOfPrimesBetween(a+1,b);
}

int main(){
    cout<<fibonaci2 (5)<<endl;
    cout<<sumOfDigits(12345)<<endl;
    cout<<containsDigit(12345, 6)<<endl;
    cout<<sum(2,5)<<endl;
    cout<<reverse_int(1234)<<endl;
    cout<<sum_of_divisors(4)<<endl;
    cout<<is_prime(7)<<endl;
    cout<<count_prime_divisors(12)<<endl;
    cout<<sumOfPrimesBetween(1,10)<<endl;
    return 0;
}
