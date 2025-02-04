#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
#include <iomanip>   //lib for setting precision
using namespace std;

int main(){

    //array reverse
    int arr[5] = {1,3,2,4,5};
    int n=5;
    // int start = 0;
    // int end  = n-1;
    // while(start<end){
        
    //         swap(arr[start],arr[end]);
    //         start++;end--;
        
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<"    ";
    // }

    //max and min
    // int max  = arr[0];
    // for(int i=0;i<n;i++){
        
    //     if(max <arr[i]){
    //         max  = arr[i];
    //     }
    // }
    // cout<<"max is "<<max <<endl;

    // int min = arr[0];
    // for(int i=0;i<n;i++){
        
    //     if(min >arr[i]){
    //         min  = arr[i];
    //     }
    // }
    // cout<<"min is "<<min <<endl;

    //sum and avg of an array
    // int sum = 0;
    // for(int i=0;i<n;i++){
    //     sum+=arr[i];
    // }
    // cout<<"sum  is "<<sum<<endl;
    // float average  = sum/n;
    // cout<<"average is "<<average<<endl;


    //sort an array
    int start = 0;
    int end = n-1;
    while(start<end){
        if(arr[start]>arr[end]){
            swap(arr[start], arr[end]);
        }
    }
        for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}