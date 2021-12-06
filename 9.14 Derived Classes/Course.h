#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course {
    // TODO: Declare private data members - courseNumber, courseTitle
    private:
        string courseNumber;
        string courseTitle;

	// TODO: Define mutator functions - SetCourseNumber(), SetCourseTitle()
    public:
        void SetCourseNumber(string courseNum);
        void SetCourseTitle(string courseTitle);

	// TODO: Define accessor functions - GetCourseNumber(), GetCourseTitle()
        string GetCourseNumber();
        string GetCourseTitle();

	// TODO: Define PrintInfo()
        void PrintInfo();
};
#endif