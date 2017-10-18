#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
  int size; //the sizewhich we want to dynamically allocate
  cout<<"Enter the size you want"<<endl;
  cin>>size;
  int *p; // to hold the pointer returned.
  //defaukt syntax=(void*)malloc(size_in_bytes); which can be casted into any other format so,
  //ptr=(type*)malloc(size);
  //But rather doing this:
  //p=(int*)malloc(size);
  //This would be more accurate as int takes 2 bytes
  //if we pass 10 size then it can only store 5 int values.
  //so multiplying with 2 would help us get what we want i.e. memory for 10 ints=20 bytes=sizeof(int)*size SIMPLE!
  p=(int*)malloc(sizeof(int)*size); //default value=garbage
  //calloc() = same just adds the number of blocks we wants, every block would be of the size we want, default value=0;
  for(int i=0;i<size;i++)
  {
    cout<<"Enter element "<<i<<endl;
    cin>>*p;
    *p++;
  }
  return 0;
}
