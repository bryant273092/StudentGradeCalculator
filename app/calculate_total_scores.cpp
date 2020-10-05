#include<iostream>
#include "calculate_total_scores.hpp"
#include <sstream> 



// //Note: Have to dealloacte all pointer objects in array (all students)
void calculate_total_scores(Artifacts* artifacts, Students* students){
    for(unsigned int i = 0 ; i < students->number_of_students ; i++){
        double point_sum = 0.0;
        for(unsigned int x = 0 ; x < artifacts->number_of_graded_artifacts ; x++){
            point_sum += ((1.0 * (students->students[i].scores[x]))/(artifacts->graded_artifacts[x]) * artifacts->relative_weight_of_artifacts[x]);
            // std::cout << "Student score: " << students->students[i].scores[x] << " out of: " << artifacts->graded_artifacts[x] << " weight" << artifacts->relative_weight_of_artifacts[x] <<std::endl; 
            // std::cout << "solution is: " << (students->students[i].scores[x])/(artifacts->graded_artifacts[x]) << std::endl;
            
        }
        students->students[i].grade_percenatge = point_sum;
        
    }
}