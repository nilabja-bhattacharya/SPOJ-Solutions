#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define epsilon 0.0001
using namespace std;
int main()
{
 int t;
 long long int n, k, m;
 scanf("%d", &t);
 while(t-->0)
 {
 scanf("%lld%lld%lld", &n, &k, &m);
 if( m <= n )
 {
 printf("0\n");
 continue;
 }
 float result = log(m/n)/log(k) ;
 printf("%d\n", (int)result);
 }
 return 0;
}
