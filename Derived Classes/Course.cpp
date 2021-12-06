#include "Course.h"

	// TODO: Define mutator functions - SetCourseNumber(), SetCourseTitle()
void Course::SetCourseNumber(string courseNumber) { this->courseNumber = course_number; }
void Course::SetCourseTitle(string courseTitle) { this->courseTitle = course_title; }

	// TODO: Define accessor functions - GetCourseNumber(), GetCourseTitle()
string Course::GetCourseNumber() { return this->courseNumber; }
string Course::GetCourseTitle() { return this->courseTitle; }

	// TODO: Define PrintInfo()s
void Course::PrintInfo() {
    cout <<"Course Information: " <<endl;
    cout <<"Course Number: " <<this->courseNumber <<endl;
    cout <<"Course Title: " <<this->courseTitle <<endl;
}
