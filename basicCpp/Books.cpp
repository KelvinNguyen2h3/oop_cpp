//#include <iostream>
//#include <string>
//
//// Definition of the Book class
//class Book {
//private:
//	// Properties
//	std::string title;
//	std::string author;
//	int year;
//
//public:
//	//Book() //That is default constructor
//	//Parameter constructor to initialize a Book Object
//	Book(std::string t, std::string a, int y) : title(t), author(a), year(y){}
//	//same as
//	/*Book(std::string t, std::string a, int y) {
//		title = t;
//		author = a;
//		year = y;
//	}*/
//
//	// Member function to display book information
//	void displayInfo() const {
//		std::cout << title << " by " << author << ", published in " << year << std::endl;
//	}
//};
//
//int main() {
//	// Create an instance of Book
//	Book myBook("1984", "George Orwell", 1949);
//	// Use the member function to display book information
//	myBook.displayInfo();
//	return 0;
//}