#include <iostream>
#include <vector>
using namespace std;
#define MAX 100
int main()
{
  vector<int> arr(MAX); // Define-time size
  cout <<"Enter the no. of elements: ";
  int count, j, sum = 0;
  cin >>count;
  //arr.resize(3);
  //cout<<arr.size();
  for(int i = 0;i < count; i++)
  {
    arr[i] = i;
    sum += arr[i];
  }
  cout << "Array Sum: " << sum << endl;
  return 0;
}
