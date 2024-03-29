/***********************************************************************
 * File: main.cpp
 * Author: Evian Chen
 * Create Date: 2024-03-24
 * Editor: Evian
 * Update Date: 2024-03-24
 * Description: This program stores a student info list.
***********************************************************************/
#include <iostream>
#include <cstring>

// for student information
struct Student
{
	// add one more space at theend to store null terminater
	char firstName[26];
	char lastName[31];
	char phone[16];

	// student with no data is the last one
	bool end = true;
};

bool isInputValid(char ch[], int key);                                     // check if it's valid input
void search(Student students[10], Student searchStudent);                  // fro searching student
void printS(Student students[10]);                                         // print out all data
int remove(Student students[10], Student deleteStudent, int initialIndex); // remove one student
bool canInsertStudent(Student students[10], Student searchStudent);        // check if the student can be inserted to the list

int main()
{
	// declare necessary variables
	Student students[10];
	int initialIndex = 0;
	char command[10];
	char temp[100];
	int sizeInt = 0;
	bool inputError = false;

	// infinite loop until cin meets EOF
	while (std::cin >> command)
	{
		// check command
		if (std::strcmp(command, "insert") == 0)
		{
			// make an new obj
			Student student;

			// start to input data and check if the input is valid
			for (int i = 0; i < 3; i++)
			{
				// get three data
				std::cin >> temp;

				// check if data valid
				if (isInputValid(temp, i) && !inputError)
				{
					// check which data it is
					switch (i)
					{
					case(0):
						sizeInt = std::strlen(temp) + 1;
						strcpy_s(student.firstName, sizeInt, temp);
						break;
					case(1):
						sizeInt = std::strlen(temp) + 1;
						strcpy_s(student.lastName, sizeInt, temp);
						break;
					case(2):
						sizeInt = std::strlen(temp) + 1;
						strcpy_s(student.phone, sizeInt, temp);
						break;
					}
				}
				else
				{
					inputError = true;
				}

				// for the next round input
				std::memset(temp, '\0', sizeof(temp));
			}

			// check if there's wrong input format
			if (inputError)
			{
				std::cout << "Input Error" << std::endl;

				// initialize for the next round
				inputError = false;
			}
			else
			{
				// check if there are still spaces for new student info
				if (initialIndex < 10 && canInsertStudent(students, student))
				{
					// add student to the list
					student.end = false;
					students[initialIndex] = student;
					initialIndex++;
				}
				else
				{
					std::cout << "Insert Error" << std::endl;
				}
			}
		}
		else if (std::strcmp(command, "print") == 0)
		{
			printS(students);
		}
		else if (std::strcmp(command, "search") == 0)
		{
			// make an new obj
			Student student;

			// start to input data and check if the input is valid
			for (int i = 0; i < 3; i++)
			{
				// get three data
				std::cin >> temp;

				// check if data valid
				if (isInputValid(temp, i) && !inputError)
				{
					// check which data it is
					switch (i)
					{
					case(0):
						sizeInt = std::strlen(temp) + 1;
						strcpy_s(student.firstName, sizeInt, temp);
						break;
					case(1):
						sizeInt = std::strlen(temp) + 1;
						strcpy_s(student.lastName, sizeInt, temp);
						break;
					case(2):
						sizeInt = std::strlen(temp) + 1;
						strcpy_s(student.phone, sizeInt, temp);
						break;
					}
				}
				else
				{
					inputError = true;
				}

				// for the next round input
				std::memset(temp, '\0', sizeof(temp));
			}

			if (inputError)
			{
				std::cout << "Input Error" << std::endl;

				// initialize
				inputError = false;
			}
			else
			{
				search(students, student);
			}
		}
		else if (std::strcmp(command, "delete") == 0)
		{
			// make an new obj
			Student student;

			// start to input data and check if the input is valid
			for (int i = 0; i < 3; i++)
			{
				// get three data
				std::cin >> temp;

				// check if data valid
				if (isInputValid(temp, i) && !inputError)
				{
					// check which data it is
					switch (i)
					{
					case(0):
						sizeInt = std::strlen(temp) + 1;
						strcpy_s(student.firstName, sizeInt, temp);
						break;
					case(1):
						sizeInt = std::strlen(temp) + 1;
						strcpy_s(student.lastName, sizeInt, temp);
						break;
					case(2):
						sizeInt = std::strlen(temp) + 1;
						strcpy_s(student.phone, sizeInt, temp);
						break;
					}
				}
				else
				{
					inputError = true;
				}

				// for the next round input
				std::memset(temp, '\0', sizeof(temp));
			}

			if (inputError)
			{
				std::cout << "Input Error" << std::endl;

				// initialize
				inputError = false;
			}
			else
			{
				initialIndex = remove(students, student, initialIndex);
			}
		}
		else
		{
			std::cout << "Input Error" << std::endl;
		}
	}
}

/**
 * Intent:  to check if it's valid to insert a student to the list
 * Pre:     nothing showed
 * Post:    return a boolean
 * \param   students, a list of Student
 * \param   searchStudent, a student obj
 * \return  true if the student can be inserted to the list, false otherwise
 */
bool canInsertStudent(Student students[10], Student searchStudent)
{
	// loop through current student list
	for (int i = 0; i < 10; i++)
	{
		// check if the students[i] is the last one
		if (!students[i].end)
		{
			// the searchStudent is already in the dataset
			if (std::strcmp(students[i].firstName, searchStudent.firstName) == 0 && std::strcmp(students[i].lastName, searchStudent.lastName) == 0 && std::strcmp(students[i].phone, searchStudent.phone) == 0)
			{
				return false;
			}
		}
		else
		{
			break;
		}
	}

	// student not in student list and there's still space for this student
	return true;
}

/**
 * Intent:  to check if it's a valid input
 * Pre:     nothing showed
 * Post:    return a boolean
 * \param   ch, a character array, the data to be checked
 * \param   key, the index indicating if the data is lastname, firstname or phone
 * \return  true if the input is valid
 */
bool isInputValid(char ch[], int key)
{
	// use switch to determine which data it is
	switch (key)
	{
	case(0):
		// firstname
		if (std::strlen(ch) < 25)
		{
			return true;
		}

		return false;
	case(1):
		// lastname
		if (std::strlen(ch) < 30)
		{
			return true;
		}

		return false;
	case(2):
		// phone
		if (std::strlen(ch) < 15)
		{
			// check if every char is a digit
			for (int i = 0; i < std::strlen(ch); i++)
			{
				if (!std::isdigit(ch[i]))
				{
					return false;
				}
			}

			return true;
		}

		return false;
	default: 
		return false;
	}
}

/**
 * Intent:  print out all data
 * Pre:     nothing showed
 * Post:    all data
 * \param   students, a list of Student
 */
void printS(Student students[10])
{
	// for checking empty list
	bool empty = true;

	// loop through the list
	for (int i = 0; i < 10; i++)
	{
		// make an obj
		Student student = students[i];
		
		// check if this student is last one
		if (!student.end)
		{
			std::cout << student.firstName << ' ' << student.lastName << ' ' << student.phone << std::endl;

			// it's not an empty list
			empty = false;
		}
		else
		{
			break;
		}
	}

	// it's empty
	if (empty)
	{
		std::cout << "Print Error" << std::endl;
	}
}

/**
 * Intent:  check if the student is in the list
 * Pre:     nothing showed
 * Post:    return a boolean
 * \param   students, a list of Student
 * \param   searchStudent, an object of Student, which is going to be searched
 */
void search(Student students[10], Student searchStudent)
{
	// check if the student is found
	bool found = false;

	// loop through the list
	for (int i = 0; i < 10; i++)
	{
		// check if the student is the last one
		if (!students[i].end)
		{
			// check if the student is in the list
			if (std::strcmp(students[i].firstName, searchStudent.firstName) == 0 && std::strcmp(students[i].lastName, searchStudent.lastName) == 0 && std::strcmp(students[i].phone, searchStudent.phone) == 0)
			{
				// print out the index
				std::cout << i << std::endl;

				// student is found and break the loop
				found = true;
				break;
			}
		}
	}

	// searchStudent not found
	if (!found)
	{
		std::cout << "Search Error" << std::endl;
	}
}

/**
 * Intent:  delete a student info and return the last index
 * Pre:     nothing showed
 * Post:    return an integer
 * \param   students, a list of Student
 * \param   deleteStudent, and object of Student, which is going to be deleted
 * \param   initialIndex, an integer, the index of current index
 * \return  an integer of the updated index
 */
int remove(Student students[10], Student deleteStudent, int initialIndex)
{
	// variables for recording the deleted data
	int deleteInd = 0;
	bool found = false;

	// find the index of the student to be removed
	for (int i = 0; i < 10; i++)
	{
		// check if the student is the last one
		if (!students[i].end)
		{
			// check if the student is in the list
			if (std::strcmp(students[i].firstName, deleteStudent.firstName) == 0 && std::strcmp(students[i].lastName, deleteStudent.lastName) == 0 && std::strcmp(students[i].phone, deleteStudent.phone) == 0)
			{
				// store its index and change the found to true
				deleteInd = i;
				found = true;

				// since the data is deleted, index - 1
				initialIndex--;

				// terminate the loop
				break;
			}
		}
	}

	// deleteStudent is not in current list
	if (!found)
	{
		//std::cout << "Delete Error" << deleteStudent.firstName << '!' << deleteStudent.lastName << deleteStudent.phone << std::endl;
		std::cout << "Delete Error" << std::endl;
		return initialIndex;
	}

	// delete the deleteStudent and rearrange the list
	for (int i = deleteInd; i < 9; i++)
	{
		// move the students after the deleted one forward
		students[i] = students[i + 1];

		// found the last data
		if (students[i].end)
		{
			return initialIndex;
		}
	}

	// if i == 9, make an Student object and make the last one the student with empty data 
	Student student;
	students[9] = student;
}

