#include<iostream>
#include <sys/time.h>
#define MICROSECONDS_PER_SECOND 1000000
using namespace std;
unsigned long long factiterative(int n){
unsigned long long fac=1;
for(int i=2;i<=n;i++)
fac=fac*i;
return fac;
}
unsigned long long factc(int n){
unsigned long long fac=1;
for(int i=2;i<=n;i++)
fac=fac*i;
return fac;}
unsigned long long factrecursion(int n){
unsigned long long fac=1;
if(n==1)
 return 1;
else
 return n*factrecursion(n-1);}
main(){
timeval start;

gettimeofday(&start, nullptr);
int n;
cout<<”enter the values that you want calculate it factorial”<<endl;
cin>>n;
cout<<factrecursion(n)<<endl;
timeval end;
gettimeofday(&end, nullptr);
long durationMicro = (end.tv_sec - start.tv_sec) * MICROSECONDS_PER_SECOND + (end.tv_usec - start.tv_usec);
cout << "execution time: " << durationMicro << " microsecond" << endl;
}
