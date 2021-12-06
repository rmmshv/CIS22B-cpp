#ifndef OFFERED_COURSE
#define OFFERED_COURSE

#include "Course.h"

class OfferesCourse : public Course {
    // TODO: Declare private data members - instructorName, term, classTime
    private:
        string instructorName;
        string term;
        string classTime;
	// TODO: Declare mutator functions - SetInstructorName(), SetTerm(), SetClassTime()
    public:
        void SetClassTime(string time);
        void SetInstructorName(string instructorName);
        void SetTerm(string term);
	// TODO: Declare accessor functions - GetInstructorName(), GetTerm(), GetClassTime()
        void GetClassTime();
        void GetInstructorName();
        void GetTerm();
};
#endif