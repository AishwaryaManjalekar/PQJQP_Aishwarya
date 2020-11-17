#include <iostream>
using namespace std;
class Polygon
{
    int pi=3.142;
    float area,s,n;
    public:void sides()
    {
    cout << "\n\n Print the area of a polygon:\n";
	cout << "---------------------------------\n";
	cout << " Input the number of sides of the polygon: ";
	cin>> n;
	cout << " Input the length of each side of the polygon: ";
	cin>> s;
	area= (n * (s * s)) / (4.0 * tan((pi/ n)));
	cout<<" The area of the ploygon is: "<<area<<"\n";
	}
};
int main()
{
    Polygon
}
