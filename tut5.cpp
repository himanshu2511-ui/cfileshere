#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number from 0-10\n";
    int x;
    cin>>x;
    switch(x){
        case 0:
        {
            cout<<"Enter the length and breadth of a rectangle";
            int l,b;
            cin>>l;
            cin>>b;
            cout<<"the perimeter of the rectangle"<<2*(l+b);
            cout<<"the area of the rectangle"<<(l*b);
            break;
        }
        case 1:
        {
            cout<<"you can never be number 1";
            break;    
        }
        case 2:
        {
           cout<<"enter radius of circle";
           int r;
           cin>>r;
           cout<<"the area of the circle is "<<3.14*r*r;
           cout<<"the area of the circle is "<<3.14*2*r;
           break;
        }
        case 3:
        {
            cout<<"Neymar secures the 3rd position in world football";
            break;
        }
        case 4:
        {
            cout<<"Enter the radius and height of a right circular cone";
            int rr, h;
            cin>>rr;
            cin>>h;
            cout<<"The volume of the right circular cone the "<<.33*3.14*rr*h;
            break;
        }
        case 5:
        {
            cout<<"you are a common mind person";
            break;
        }
        case 6:
        {
            cout<<"Enter the side length of square to calculate perimeter and area"<<endl;
            int d;
            cin>>d;
            cout<<"the area of the square is "<<d*d<<endl;
            cout<<"the perimeter of the circle is "<<4*d;
            break;
        }
        case 7:
        {
            cout<<"Congrats you are a Ronaldo fan/msd fan(Maybe unknowingly)";
            break;
        }
        case 8:
        {
            cout<<"Enter distance travelled to calc ur speed\n";
            int dis;
            cin>>dis;
            cout<<"Enter time taken\n";
            int t;
            cin>>t;
            cout<<"your speed was "<<dis/t;
            break;
        }
        case 9:
        {
            cout<<"A good choice man... that was ronaldinho's jersey number(the brazilkian legend)";
            break;
        }
        case 10:
        {
            cout<<"you are a lazy person,, didnt try to think ,,plz develope your brain,,,and fu*k you if you chose this number coz you are a messi fan";
            break;
        }
        default :
        {
            cout<<"your parents should have used co#dom that night";
            break;
        }
    }
    return 0.0;
}
