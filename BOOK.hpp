#pragma once
#include <iostream>
class Book {
private:
	std::string id{ "" };
	std::string book_title{ "" };
	std::string author{ "" };
public:
	std::string get_id() {
		return id;
	}
	std::string get_book_title() {
		return id;
	}
	std::string get_author() {
		return id;
	}
	void set_id(std::string id_input) {
		id = id_input;
	}
	void set_id(std::string title) {
		book_title = title;
	}
	void set_id(std::string author_input) {
		author = author_input;
	}
};