#include"remove_pointers.hpp"
void remove_pointers(Artifacts* graded_artifacts,Students* students,Cutpoints* cutpoints){
   delete[] graded_artifacts->graded_artifacts;
   delete[] graded_artifacts->relative_weight_of_artifacts;
   delete graded_artifacts;
   for(unsigned int i = 0; i < students->number_of_students ; i++){
       delete[] students->students[i].scores;   
   }
   delete[] students->students;
   delete students;
   delete[] cutpoints->cutpoints;
   delete cutpoints;



}