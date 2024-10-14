#include<iostream>
using namespace std;

// int main(){
//     cout<< "Namaste Duniya" <<endl;

//     int a = 45;
//     cout<< a  <<endl;

//     char b = 'S';
//     cout<< b  << endl;

//     float f = 3.14;
//     cout<< f <<endl;

//     double d = 3.14435345;
//     cout<< d <<endl;

//     bool n = true;
//     cout<< n <<endl;

//     int size = sizeof(d);
//     cout<< size << endl;


// //  Type casting
//     int aa = 45;
//     char c = 'h';
//     int sum  = aa + c;
//     cout << sum << endl;

//     unsigned int aaa = 112;
//     cout<< aaa << endl;

//     int aaaa = 2.0/5;
//     cout << aaaa << endl;

// //  |RElational operator
//     int ab = 23;
//     int bz = 45;

//     bool first = (ab == bz);
//     cout<< first<<endl;

//     bool second = (ab < bz);
//     cout<< second <<endl;

//     bool third = (ab > bz);
//     cout<< third <<endl;
// }


// int main(){

//     int a , b;
//     cout<< "Enter the value of a: ";
//     cin >>a;
   
//     cout<< "Enter the value of b: ";
//     cin >>b;

//     if (a>b) {
//         cout<<"A is greater"<< endl;
//         } 
//     else{
//         cout<<"B is greater"<< endl;
//     }
// }

// int main(){

//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int sum = 0;
//     int i = 1;
//     while(i<=n){
//         sum = sum + i;
//         i++;
//     }
//     cout<<"The sum of numbers from 1 to "<<n<<" is :"<<sum<<"";
// }


// int main(){
//     int num;
//     cout << "enter the number that you want check wheather it is a prime or not: ";
//     cin>> num;

//     int i = 2;
//     while(num>i){
//         if(num%i==0){
//             cout<<"entered number is not a prime number for: "<<i<<""<<endl;
//         }
//         else{
//             cout<<"entered number is a prime number for: "<<i<<""<<endl;
//         }
//         i++;
//     }   
// }

// int main(){
//     int n;
//     cout<<"Enter the number of patterns  you want to print: ";
//     cin >>n;
    
//     int i =1;
//     while (i<n){

//         int j =1;
//         while(j<=n){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
 

//////////////////////star pattern not//
// int main(){
//     int n;
//     cin>>n;

//     int i=1; /*row*/outer loop for row
//     while(i<=n){
//         int j = 1; /*column*/inner loop for column
//         while (j<=n){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     int count = 1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             count = count + 1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*star pattern in ascending order*/
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j =1;
//         while(j<=i){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main (){
//     int n;
//     cin >>n;

//     int i= 1;
//     int value = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<value<<" ";
//             value = value + 1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while (i<=n){
//         int j =1;
//         while(j<=i){
//             cout<<(i-j+1);
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
// }

/*Alphabet patterns====================*/
// int main(){
//     int n;
//     cin>>n;

//     int row = 1;
//     while(row<=n){
//         int  col = 1;
//         while(col <= n){
//             char ch = 'A' + row - 1 ;
//             cout<<ch;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// /*Bitwise operators*/
// int main(){
//     int a = 43;
//     int b = 45;

//     cout<<"a&b="<<(a & b)<<endl;
//     cout<<"a|b="<<(a | b)<<endl;
//     cout<<"~a"<<(~a)<<endl;
//     cout<<"a^b="<<(a ^ b)<<endl;
//     cout<< (17>>1) <<endl;
//     cout<< (17<<1) <<endl;
// }

/*Fibonacci series==============*/
// int main(){
//     int n = 10;

//     int a = 0;
//     int b = 1;

//     for (int i = 1; i<= n; i++){
//         int c = a + b;
//         cout<<c<<" ";

//         a = b;
//         b = c;
//     }
// }

// Prime number======================
// int main (){
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;

//     for(int i = 2; i<n; i++){
//         if(n % i == 0){
//             cout<< n<<" is not a prime number"<<endl;
//             break;
//         }
//         else{
//             cout<< n<<" is a prime number"<<endl;
//             break;

//         }
//     }
// }


// Switch=====================k
// int main(){
//     int num = 3;

//     switch (num) {
//         case 1:
//         cout<< "First"<<endl;
//         break;

//         case 2:
//         cout << "Second"<<endl;
//         break;

//         case 3:
//         cout << "Third"<<endl;
//         break;

//         default:
//         cout << "Not found"<<endl;
//         break;
//     }

//     char ch  = 'w';
//     switch (ch){
//         case 1:
//         cout << "one"<< endl;
//         break;
        
//         case 'w':
//         cout << "Charlie"<< endl;
//         break;
        
//         default:
//         cout << "Not Found!"<< endl;
//         break;
//     }
//     // calculator============================

//     int a , b ;
//     cout<<"enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b : ";
//     cin>>b;

//     char op;
//     cout<<"Enter operation (+, -, *, /): ";
//     cin>>op;

//     switch(op){
//         case '+':
//         cout<<"The sum of the "<<a << " and " <<b<< " is : "<<a + b;
//         break;

//         case '-':
//         cout<<"The subtraction of "<<a<< " and " <<b<< " is: "<<a -b;
//         break;

//         case '*':
//         cout<<"The  multiplication of " <<a<< " and " <<b<< " is: " <<a*b;
//         break;

//         case '/':
//         cout<<"The division of " <<a<< " by " <<b<< " is :" <<a/b;
//         break;

//         default:
//         cout<<"Enter a valid opertaion"<<endl;
//     }

// }


// int power(int a, int b){
//     int ans = 1;

//     for(int i = 1 ; i <= b ; i++ ){
//         ans = ans * a;
//     }
//     return ans;
// }
// int main(){
//     int a , b;
//     cin>> a >> b ;

//     int answer = power(a, b);
//     cout<< "answer is "<<answer<<endl;
//     return 0;
// }


// int factorial(int n){
//     int fact = 1;

//     for(int i =1; i<=n; i++){
//         fact = fact * i;
//     }
//     return fact ;

// }
// int nCr(int n , int r){
//     int num = factorial(n);
//     int demo = factorial(r) * factorial(n-r);
//     return num/demo;
// }

// int main(){
//     int n , r;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<"Enter r: ";
//     cin>>r;
//     cout<< "Answer is: "<<nCr(n,r)<<endl;
//     return 0;
// }

bool isPrime(int num){
    for(int i=2;i < num; i++) {
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if (isPrime(num)){
        cout<<"The number is prime."<<endl;
    } else{
        cout<<"The number is not prime."<<endl;
        }
    
    
    return 0;
}
