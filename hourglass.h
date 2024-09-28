//Betty Phipps 0002 Fall 2024
//------------hourglass.h-------------

class Hourglass{

	public:
		//single constructor with parameters: size (s), border (b defaul to '*'), filler (f default to '#')
		Hourglass(int s=1, char b='#', char f='*');
		
		//accessor
		int GetSize() const;      //constant function that returnss the size of a size

		//increase or decrease the size of hourglass by 1
		//make no change if requested is out of bounds (1-39)
		void Grow();
		void Shrink();
		
		//mutators allow a new border or fill character within range (ascii 33 - ascii 126)
		//set to appropriate default if out of bounds
		void SetBorder(char b);
		void SetFill(char f);	  

		//standard input/output routines
		void Draw() const;	  //Display of hourglass
	
		void Summary() const;     //Displays all information of size, perimeter, area, and a picture

		//returns the perimeter and area of hourglass as an int and double
		int Perimeter() const;
		double Area() const;

	private: 
		//private member data
		//size, border, and fill character
		int size;
		char border;
		char fill;

};
