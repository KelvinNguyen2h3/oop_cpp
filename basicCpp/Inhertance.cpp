#include <iostream>
#include <string>

class Book {
private:
	// Properties
	std::string title;
	std::string author;
	int year;

public:
	// Constructor
	Book(std::string t, std::string a, int y) : title(t), author(a), year(y) {}

	// Getter
	std::string getTitle() const { return title; }
	std::string getAuthor() const { return author; }
	int getYear() const { return year; }
	// Setter
	void setTitle(const std::string& t) { title = t; }
	void setAuthor(const std::string& a) { author = a; }
	void setYear(int y) { year = y; }

	// Member function = method
	virtual void displayInfo() const {
		std::cout << title << " by " << author << ", published in " << year << std::endl;
	}
protected:
	// Overload
	void displayBaseInfo() const {
		std::cout << title << " by " << author << ", published in " << year << std::endl;
	};
};

// Derived class inherit from Book
class Ebook : public Book {
private:
	float size; //50MB
public:
	// Ebook Constructor
	Ebook(std::string t, std::string a, int y, float s) : Book(t, a, y), size(s) {}

	// Getter and Setter
	float getSize() const { return size; }
	float setSize(float s) { size = s; }
	/*
	// Method to display t, a, y and s (size)
	void displayInfo() const override {
		Book::displayInfo(); //Call the base class (Book) method
		std::cout << "File size: " << size << "MB" << std::endl;
	}*/
	// Method to display t, a, y and s (size)
	void displayInfo() const {
		displayBaseInfo(); //Call the base class (Book) method
		std::cout << "File size: " << size << "MB" << std::endl;
	};
};

int main() {
	Book myBook("1984", "George Orwell", 1949);

	Ebook myEbook("Brave New World", "Aldous Huxley", 1932, 50); //50MB


	myEbook.displayInfo();

	return 0;
}