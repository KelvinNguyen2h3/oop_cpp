//#include <iostream>
//#include <string>
//
//class Book {
//private:
//	std::string title;
//	std::string author;
//	int year;
//
//public:
//	Book(std::string t, std::string a, int y) : title(t), author(a), year(y) {}
//	
//	// Getter
//	std::string getTitle() const { return title; }
//	std::string getAuthor() const { return author; }
//	int getYear() const { return year; }
//	// Setter
//	void setTitle(const std::string& t) { title = t; }
//	void setAuthor(const std::string& a) { author = a; }
//	void setYear(int y) { year = y; }
//
//
//	void displayInfo() const {
//		std::cout << title << " by " << author << ", published in " << year << std::endl;
//	}
//};
//
//int main() {
//	Book myBook("1984", "George Orwell",1949);
//	int currentYear = myBook.getYear();
//	std::cout << currentYear;
//	//myBook.setYear(1950);
//	//myBook.displayInfo();
//	return 0;
//}