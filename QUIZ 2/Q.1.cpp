/* QUIZ NO 02
   Submitted by: Abdullah Bin Altaf
   Reg. No: 4635;
   Course: Introduction to Programming (CS106)
   Department: CS (1st Sem)
   Submitted to: Mam Aroosa
   ABASYN UNIVERSITY ISLAMABAD
   
   Q-1 Write a C++ program to find the max  and min of an integral data set. The program should  ask the user to input the size of array and  then ask user to input the values of array. The program prints on screen a pointer that points to the max and min value of array.
    */
#include<iostream>
using namespace std;
int *findMax(int arr[],int n);
int *findmin(int arr[],int n);
int main(){    
   int n,i,*p;    
  cout<<"Enter the size of array:";    
  cin>>n;    
  int arr[n];        
  for(i=0;i<n;i++)     {      
    cout<<"Enter value "<<i+1<<":";      
   cin>>arr[i];            
}          
  p=findMax(arr,n);    
  cout<<"The max value is:"<<*p; 
  p=findmin(arr,n);
  cout<<"The min value is:"<<*p;   
  return 0;
}  
int *findMax(int data[],int n){    
  int *max=data;    
  int i;    
 for(i=1;i<n;i++){           
   if(*max<*(max+i)) *max=*(max+i);                             
  }    
  return max;
}
int *findmin(int data[],int n){    
  int *min=data;    
  int i;    
 for(i=1;i<n;i++){           
   if(*min>*(min+i)) *min=*(min+i);                             
  }    
  return min;
}
