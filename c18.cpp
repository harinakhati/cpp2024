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
                                    int feet1, inches1, feet2, inches2;

    // Read input from user
    cout << "Enter the first distance (feet inches): ";
    cin >> feet1 >> inches1;
    cout << "Enter the second distance (feet inches): ";
    cin >> feet2 >> inches2;
    // Create Distance objects
    Distance d1(feet1, inches1);
    Distance d2(feet2, inches2);
Distance d3;
    // Compare and display the larger distance
    
                                   
                                    d3=d1.maxDistance(d2);
                                    cout << "The larger distance is: " << endl;
                                    d3.display();
                              return 0;
                                }
