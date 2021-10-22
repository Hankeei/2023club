#include <bits/stdc++.h>
using namespace std;
int main() {
  int size , way , time = 0 , temp;
  cin >> size >> way;
  int arr[2001];
  for (int it = 0; it < size ; it++){
    cin >> arr[it];
  }
  for (int i = 0; i < size ; i++){
    for (int j = 0; j < size-1; j++){
      if (way == 1){
        if (arr[j] < arr[j+1]){
          temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
          time++;
        }
      }
      else{
        if (arr[j] > arr[j+1]){
          temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
          time++;
        }
      }
    }
  }
  cout << time << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}