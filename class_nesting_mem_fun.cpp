
#include<iostream>
  using namespace std;
   class area
   {
      float pi=3.14;
      int w,h,r,l;
  public :
    void in();
    void out();
   }a;
     void area::in()
       {
              cout<<"enter width of rectangle"<<endl;
                cin>>w;
              cout<<"enter hight of rectangle"<<endl;
                cin>>h;
              cout<<"enter redius of circle"<<endl;
                cin>>r;
                cout<<"enter lenth of square"<<endl;
                cin>>l;
       }
       void area::out()
          {
              cout<<"area of circle "<<pi*r*r<<endl;
              cout<<"area of rectangle "<<w*h<<endl;
              cout<<"area of square "<<l*l<<endl;
          }
        int main()
        {
            a.in();
            a.out();
            return 0;
        }

