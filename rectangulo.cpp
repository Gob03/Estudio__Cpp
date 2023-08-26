#include <iostream>;
using namespace std;

class Rectangle{
	public:
		Rectangle(double width, double height){
			this->width = width;
			this->height = height;
			
			cout << "Area: " << area() << endl;
			cout << "Perimeter: " << perimeter() << endl;
		}
		
		double area(){
			return this->width * this->height;
		}
		
		double perimeter(){
			return 2 * ( this->height + this->width );
		}
	private:
		double width;
		double height;
};

int main(){
	
	Rectangle myRectangle(10,5);
	return 0;
}
