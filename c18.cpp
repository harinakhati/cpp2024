/*Write a program that takes two Distance values as arguments and returns the larger one.
 Include a main () program that accepts two Distance figures from the user, compares them,
  and display the larger*/
  #include <iostream>
  using namespace std;
  class Distance
  {
    private:
    int feet;
    int inches;
    public:
    Distance()
    {
        feet=0;
        inches=0;
        }
        Distance(int f,int i)
        {
            feet=f;
            inches=i;
            }
            
                void display()
                {
                    cout<<"The distance is "<<feet<<" feet and "<<inches<<" inches"<<endl;
                    }
                    Distance maxDistance(Distance d)
                    {
                        Distance temp;
                        if(feet>d.feet|| (feet == d.feet && inches > d.inches))
                        {
                            temp.feet=feet;
                            temp.inches=inches;
                            }
                            else
                            {
                                temp.feet=d.feet;
                                temp.inches=d.inches;
                                }
                                return temp;
                                }
  };
                                int main()
                                {
                                    Distance d1(2,11);
                                    Distance d2(3,12);
                                    Distance d3;
                                    d3=d1.maxDistance(d2);
                                    cout << "The larger distance is: " << endl;
                                    d3.display();
                              return 0;
                                }
