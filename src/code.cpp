#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy
#include <bits/stdc++.h>
using namespace std;

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    return abs(left-right)*abs(left-right);
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    string s;
    if(bit_pos<0){
      return false;
    }else{
      while(mask>0){
        if (mask % 2==1){
          s=s+'1';
          mask/=2;
        }else{
          s=s+'0';
          mask/=2;
        }
      }
      if (s[bit_pos]=='1'){
        return  true;
      }else{
        return false;
      }
    }
  }

  // Task 3
  int max3(int left, int middle, int right) {
    return max(left,max(middle,right));
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if(left == nullptr || right == nullptr){
    }else{
      int pointer_to_left = *left;
      *left = *right;
      *right = pointer_to_left;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    int sum = 0;
    if(arr == nullptr || length<=0){
      return 0;
    }else{
      for(int i=0; i<length; i++){
        sum += arr[i];
      }
      return sum;
    }
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    int *p;
    int max=-100000000000;
    if(arr == nullptr || length<=0){
      return nullptr;
    }else{
      for(int i=0; i<length; i++){
        if(arr[i] > max){
          max = arr[i];
          p = &arr[i];
        }
      }
      return p;
    }
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if(length<=0){
      return nullptr;
    }else{
      int *arr = new int[length];
      std::fill(arr,arr+length,init_value);
      return arr;
    }
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if(arr_in == nullptr || length<=0){
      return nullptr;
    }else{
      int *arr = new int[length];
      std::copy(arr_in,arr_in+length,arr);
      return arr;
    }
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if(arr == nullptr){
      os<<"Invalid argument: arr\n";
    }else if(length <= 0){
      os<<"Invalid argument: length\n";
    }else if(k <= 0){
      os<<"Invalid argument: k\n";
    }else if(k > length){
      os<<arr[0]<<"\t";
    }else{
      for(int i=0; i<length; i++){
        if(i%k == 0){
          os<<arr[i]<<"\t";
        }
      }
    }
  }

}  // namespace assignment
