//#include <iostream>
//#include <string>
//
//class Book {
//private:
//	std::string title;
//	std::string author;
//	
//
//public:
//	Book(std::string t, std::string a, int y) : title(t), author(a), year(y){}
//
//	void displayInfo() const {
//		std::cout << title << " by " << author << ", published in " << year << std::endl;
//	}
//	//public year property
//	int year;
//};
//
//int main() {
//	Book myBook("1984", "George Orwell", 1949);
//	// Non Encapsulation
//	myBook.year = 1950; // access to year and revise it into 1950
//	myBook.displayInfo();
//	return 0;
//}