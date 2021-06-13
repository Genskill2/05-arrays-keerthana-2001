/* Enter your solutions in this file */
#include <stdio.h>
# include<assert.h>
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
