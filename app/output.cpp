
#include "output.hpp"

void print_total_scores(Students* students){
    std::cout << "TOTAL SCORES" << std::endl;
    for(unsigned int i = 0 ; i < students->number_of_students ; i++){
        std::cout << students->students[i].id_number << " " << students->students[i].name << " " << students->students[i].grade_percenatge << std::endl;
    }
    
}
void print_cutpoint(Students* students, Cutpoints* cutpoints, int count){
    std::cout << "CUTPOINT SET " << count +1 << std::endl;
    for(unsigned int i = 0 ; i < students->number_of_students ; i++){
        if (students->students[i].grade_option == 'P'){
            if(students->students[i].grade_percenatge >= cutpoints->cutpoints[2]){
                std::cout << students->students[i].id_number << " " << students->students[i].name << " P"  << std::endl;
            }
            else{
                std::cout << students->students[i].id_number << " " << students->students[i].name << " NP"  << std::endl;
            }
        }
        else{
            if (students->students[i].grade_percenatge >= cutpoints->cutpoints[0]){
                std::cout << students->students[i].id_number << " " << students->students[i].name << " A"  << std::endl;
            }
            else if (students->students[i].grade_percenatge >= cutpoints->cutpoints[1]){
                std::cout << students->students[i].id_number << " " << students->students[i].name << " B"  << std::endl;
            }
            else if (students->students[i].grade_percenatge >= cutpoints->cutpoints[2]){
                std::cout << students->students[i].id_number << " " << students->students[i].name << " C"  << std::endl;
            }
            else if (students->students[i].grade_percenatge >= cutpoints->cutpoints[3]){
                std::cout << students->students[i].id_number << " " << students->students[i].name << " D"  << std::endl;
            }
            else{
                std::cout << students->students[i].id_number << " " << students->students[i].name << " F"  << std::endl;
            }

        }
        
        
    }
}