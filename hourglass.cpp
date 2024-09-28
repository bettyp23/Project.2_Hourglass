//Betty Phipps 0002 Fall 2024
//-------------hourglass.cpp-------------------
//class definition for hourglass

#include <iostream>
#include <iomanip>
#include <cmath>
#include "hourglass.h"

using namespace std;

//initializes hourglass within range of 1-39 for size value
Hourglass::Hourglass(int s, char b, char f){
	if (s < 1){
		size = 1;
	}
	else if (s > 39){
		size = 39;
	} else{
		size = s;
	}
//error checking char within ASCII range
	if (b >= '!' && b<= '~'){
		border = b;;
	}
	if (f >= '!' && f <= '~'){
	fill = f;
	}
}
//return size of hourglass
int Hourglass::GetSize() const{
	return size;
}

//Grow and shrink the size of the hourglass by 1 when within range 1-39
void Hourglass::Grow(){
	if (size < 39){
		size++;
	}
}

void Hourglass::Shrink(){
	if (size > 1){
		size--;
	}
}


void Hourglass::SetBorder(char b){
//validation if within ASCII range
	if (b >= '!' && b <= '~'){			//if within range, set value to b
		border = b;
	}
	else{						//if not in range, set to default
		border = '#';
	}
}


void Hourglass::SetFill(char f){
//validation if within ASCII range
 	if (f >= '!' && f <= '~'){			//if within range, set value to f
		fill = f;
	}
	else{
		fill = '*';				//if not in range, set to default
	}
}


void Hourglass::Draw() const{
//drawing upside down triangle
	for (int i=0; i < size; ++i){ 
		for (int j =0; j < i; ++j){		//printing the leading blank spaces for the trianlge
			cout<<" ";
		}
		for (int j = 0; j < size - i; ++j){	//if value is the surrounding characters, print as border
			if (j == 0 ||i == 0 ||  j == size - i - 1){
				cout<<border<<" ";
			}else{
				cout<<fill<<" ";	//else then print the filler character
			}
		}
		cout<<endl;
	}
//upright triangle
	for (int i = 0; i < size - 1; ++i){		
		for (int j = 0; j < size - i - 2; ++j){	//printing leading spaces
			cout<<" ";
		}
		for (int j = 0; j < i + 2; ++j){	//Check to print corresponding char for border or fill position
			if (j== 0|| i == size - 2 || j == i + 1){
				cout<< border << " ";
			}else{
				cout<<fill<<" ";
			}
		}
		cout<<endl;
	}
}

//print summary screen returns size, perimeter, area, and draw function
void Hourglass::Summary() const{
	cout<<"Size of hourglass's size = "<<size<<" units."<<endl;
	cout<<"Perimeter of hourglass = "<<Perimeter()<<" units."<<endl;
	cout<<"Area of hourglass = "<<fixed<<setprecision(2)<<Area()<<" units."<<endl;
	cout<<"Hourglass looks like: "<<endl; 
	Draw();
}

int Hourglass::Perimeter() const{
	return size * 4 + (size * 2);    //adding all the sides of the hourglass for perimetere
}

double Hourglass::Area() const{
	return (sqrt(3)/2) * size * size;   //formula for returning the Area of the hourglass
}
