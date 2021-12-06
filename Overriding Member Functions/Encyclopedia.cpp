#include "Encyclopedia.h"
#include <iostream>

// Define functions declared in Encyclopedia.h
void Encyclopedia::SetEdition(string editionSet) { edition = editionSet; }
void Encyclopedia::SetNumVolumes(int volumesNum) { numVolumes = volumesNum; }

string Encyclopedia::GetEdition() { return edition; }
string Encyclopedia::GetNumVolumes() { return numVolumes; }

void Encyclopedia::PringInfo() {
    cout <<"Book Information: " <<endl;
    cout <<"   Book Title: " <<title <<endl;
    cout <<"   Author: " <<author <<endl;
    cout <<"   Publisher: " <<publisher <<end;
    cout <<"   Publication Date: " <<publicationDate <<endl;
    cout <<"   Edition: " <<edition <<endl;
    cout <<"   Volume Number: " <<numVolumes <<endl;
}