/*Write a program that calculates the average of up to 100 English distance 
input by the user. Create an array of objects of the Distance class.*/
#include <iostream>
#include <string>
using namespace std;
class Distance
{
    private:
    int feet;
    float inches;
    public:
    Distance()
    {
      feet=inches=0;
      }
      Distance(int f,float i)
      {
        feet=f;
        inches=i;
        }
        void getdist()
        {
            cout<<"Enter feet: ";
            cin>>feet;
            cout<<"Enter inches: ";
            cin>>inches;
            }
            void showdist()
            {
                cout<<feet<<" feet, "<<inches<<" inches"<<endl;
                }
                float getfeet()
                {
                    return feet;
                    }
                    float getinches()
                    {
                        return inches;
                        }
                        float gettotal()
                        {
                            return feet*12+inches;
                            }
                            };
                            int main()
                            {
                                Distance dist[100];
                                int n;
                                float sum=0;
                                cout<<"Enter the number of distances: ";
                                cin>>n;
                                for(int i=0;i<n;i++)
                                {
                                    dist[i].getdist();
                                    sum+=dist[i].gettotal();
                                    }
                                    cout<<"Total distance: "<<sum<<" inches"<<endl;
                                    return 0;
                            }



