// ClassExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rectangle
{
    // Class' data variables/member data
    int length;
    int width;
    int area;
    int perimeter;

    // Class' member functions (behavior)
    public:

        // Setter method for data member 'length'.
        // Setter methods usually have no return type i.e. void type
        // They also need a parameter whose type matches the data variable you want to set/modify
        void setLength(int len)
        {
            length = len;
        }

        // Getter method for data member 'length'
        // Getter methods have the same return type of the data variable you want to fetch/return
        // They do not have a parameter (usually)
        int getLength()
        {
            return length;
        }

        void setWidth(int wid) {
            width = wid;
        }

        int getWidth()
        {
            return width;
        }

        int calculateArea() {
            area = length * width;
            return area;
        }

        // getter for perimeter
        int getPerimeter()
        {
            return perimeter;
        }

        // getter for area
        int getArea()
        {
            return area;
        }

        void computeArea() {
            area = length * width;
            cout << "\nArea of the rectangle is: " << area << endl;
        }

        void displayRectDetails() {
            calculatePerimeter();
            computeArea();
            cout << "\nRectangle with length " << length << " and width " << width << " has area " << area <<"\n";
        }

        int computePerimeter()
        {
            perimeter = 2 * (length + width);
            return perimeter;
        }

    private:
        void calculatePerimeter()
        {
            perimeter = 2 * (length + width);
            cout << "\nRectangle with length " << length << " and width " << width << " has perimeter " << perimeter << "\n";
        }

};


int main()
{
    // Creating objects of the Rectangle class
    // Classname objectname; //Type 1
    // Classname objectname = Classname(); Type 2 using the default constructor
    // Classname objectname = Classname(param 1....param n); Type 3 using the parameterized constructor

    Rectangle rect1; //Type 1 no constuctor -> NOT RECOMMENDED
    rect1.setLength(7);
    rect1.setWidth(3);

    Rectangle rect2 = Rectangle(); // Type 2 using the default constructor
    rect2.setLength(4);
    rect2.setWidth(2);

    //display details of rect1
    rect1.displayRectDetails();

    //display details of rect2
    rect2.displayRectDetails();
    //rect2.calculatePerimeter();

    //rect1.length = 10;
    //rect2.length = 5;

}

