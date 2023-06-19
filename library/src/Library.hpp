#ifndef __LIBRARY_HPP__
#define __LIBRARY_HPP__

#include "Person.hpp"
#include "Document.hpp"
#include "Student.hpp"
#include "Professor.hpp"
#include "Book.hpp"
#include "Magazine.hpp"
#include "Reference.hpp"
#include "consts.hpp"
#include <iostream>
#include <vector>
#include <string>

class Library
{
public:
	void add_student_member(std::string student_id, std::string student_name);
	void add_prof_member(std::string prof_name);
	void add_book(std::string book_title, int copies);
	void add_magazine(std::string magazine_title, int year, int number, int copies);
	void add_reference(std::string reference_title, int copies);
	void borrow(std::string member_name, std::string document_title);
	void extend(std::string member_name, std::string document_title);
	void return_document(std::string member_name, std::string document_title);
	int get_total_penalty(std::string member_name);
	std::vector<std::string> available_titles();
	void time_pass(int days);

private:
	void check_person_add(std::string name);
	void check_document_title(std::string title);
	Person *find_person(std::string member_name);
	std::vector<Document *> find_available_document(std::string document_title);
	std::vector<Document *> documents;
	std::vector<Person *> persons;
	int today = 1;
};

#endif
