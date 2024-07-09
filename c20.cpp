/*Create a class Number with two int instance variable x and y.
 The class will have one constructor. The class also will contain 
 member function getMax () that will return larger number.
  From main () function create an object of Number and print the larger number.*/

  #include<iostream>
  using namespace std;
  class Number
  {
    private:
     int x,y;
     public:
     Number(int a,int b)
     {
        x=a;
        y=b;
     }
     void display()
     {
        cout<<"x= "<<x<<" and "<<"y= "<<y<<endl;
     }
    int getMax()
     {
        if(x>y)
        {
            cout<<"x is greater"<<endl;
            }
            else
            {
                cout<<"y is greater"<<endl;
                }
         }
  };
  int main()
{
    Number n(2,3);
    n.display();
    n.getMax();
    return 0;
}
