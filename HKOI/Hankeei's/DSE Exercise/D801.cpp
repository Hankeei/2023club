#include <bits/stdc++.h>
using namespace std;

int targets;
bool found;

int binarysearch(int targets,int numbers[], int n) {
  int start, mid, end;
  start = 0;
  end = n-1;
  //cout << start << " " << mid << ' ' << end << endl;
  while ((start <= end) && (numbers[mid] != targets)) {
    mid = (end + start)/2;
    //cout << start << " " << mid << ' ' << end << endl;
    if (targets > numbers[mid]){
        start = mid + 1;
        //mid = (mid + end - 1)/2;
      }
    else if (targets < numbers[mid]){
        end = mid - 1;
        //mid = (mid + start + 1)/2;
      }
    
    //mid = (end + start)/2;
  }

  if (numbers[mid] == targets) {
    found = true;
  }
  
} 

int main() {
  int n, q;
  cin >> n >> q;
  int numbers[100000];
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }
  for (int i = 0; i < q; i++) {
    cin >> targets;
    found = false;
    binarysearch(targets, numbers, n);
    cout << (found ? "Yes" : "No") << endl;
  }
  return 0;
}
