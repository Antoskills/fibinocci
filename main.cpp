#include <iostream>
using namespace std;

class fibino
{
  public:
  int num;
  int t1,t2,next,i;
  fibino()
    {
      cout<< "Enter the number of terms: ";
      cin>>num;
      t1=0;
      t2=1;
      cout<<"fibinacci series";
      cout<<"\t"<<t1;
    }
  void calc()
    {
      for(i=0;i<num;i++)
        {
          cout<<"\t"<<t2;
          next=t1+t2;
          t1=t2;
          t2=next;
        }
    }
};

int main()
{
  fibino f;
  f.calc();
  return 0;
}