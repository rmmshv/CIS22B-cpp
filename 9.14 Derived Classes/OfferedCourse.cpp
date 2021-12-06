#include "OfferedCourse.h"

// TODO: Define mutator functions - SetInstructorName(), SetTerm(), SetClassTime()
void OfferedCourse::SetInstructorName(string name) { this->instructorName = name; }
void OfferedCourse::SetTerm(string term) { this->term = term; }
void OfferedCourse::SetClassTime(stirng time) { this->classTime = time; }

// TODO: Define accessor functions - GetInstructorName(), GetTerm(), GetClassTime()
void OfferedCourse::GetInstructorName() { return this->instructorName; }
void OfferedCourse::GetTerm() { return this->term; }
void OfferedCourse::GetClassTime() { return this->classTime; }