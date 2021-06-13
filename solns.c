/* Enter your solutions in this file */
#include <stdio.h>
# include<cs50.h>
# include<assert.h>
int max(int [],int);
int min(int [],int);
float average(int [],int);
int mode(int [],int);
int factors(int,int []);
int max(int a[],int n){
int m=a[0];
for(int i=0;i<n;i++){
if(a[i]>m){
m=a[i];
}
}
return m;
}
int min(int b[],int p){
int q=b[0];
for(int j=0;j<p;j++){
if(b[j]<q){
q=b[j];
}
}
return q;
}
float average(int c[],int t){
float sum=0;
float avg;
for(int k=0;k<t;k++){
sum=sum+c[k];
}
avg=sum/t;
return avg;
}
int mode(int d[],int s){
int counts[s];
int mx=0;
int i=0;
int j=0;
int vl;
for(i=0;i<s;i++){
counts[i]=0;
}
for(i=0;i<s;i++){
for(j=0;j<s;j++){
if(d[i]==d[j]){
counts[i]++;
}
}
}
for(i=0;i<s;i++){
if(counts[i]>mx){
mx=counts[i];
vl=d[i];
}
}
return vl;
}
int factors(int num,int e[]){
int i=0;
int count=0;
for(i=2;num>1;i++){
while(num%i==0){
e[count]=i;
count++;
num=num/i;
}
}
return count;
}
int main(void){
int x[]={9,5,6,10,2,-3,4};
assert(max(x,7)==10);
int y[]={5};
assert(max(y,1)==5);
printf("Max: passed\n");
assert(min(x,7)==-3);
assert(min(y,1)==5);
printf("Min: passed\n");
assert((average(x,7)-4.7142)<0.001);
assert(average(y,1)==5.0);
printf("Average: passed\n");
int v[]={4, 9,5,6,5,10,0,2,-3, -3,4, 4};
assert((mode(v, 12) == 4));
int z[]={5};
assert(mode(z, 1) == 5);
printf("Mode: passed\n");
int ret[100] = {0};
int count = factors(180, ret);
assert (count == 5);
assert (ret[0] == 2);
assert (ret[1] == 2);
assert (ret[2] == 3);
assert (ret[3] == 3);
assert (ret[4] == 5);
count = factors(143, ret);
assert (count == 2);
assert (ret[0] == 11);
assert (ret[1] == 13);
printf("Factors: passed\n");
}
