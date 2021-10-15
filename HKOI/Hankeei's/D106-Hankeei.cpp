#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, last, lasttwo;
    string suffix = "th";
    cin >> a;
    lasttwo = a % 100;
    last = lasttwo % 10;
    if (lasttwo <= 10 || lasttwo >= 14)
    {
      if (last == 1) suffix = "st";
      else if (last == 2) suffix = "nd";
      else if (last == 3) suffix = "rd";
      else suffix = "th";
    }
    cout << a << suffix;
    return 0;
}