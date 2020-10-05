#include<iostream>
#include"output.hpp"




Artifacts* read_graded_artifacts(){
    Artifacts* artifacts = new Artifacts;
    std::cin >> artifacts->number_of_graded_artifacts;
    artifacts->graded_artifacts = new int[artifacts->number_of_graded_artifacts];
    artifacts->relative_weight_of_artifacts = new int[artifacts->number_of_graded_artifacts];
    for( unsigned int i = 0 ; i < artifacts->number_of_graded_artifacts ; i++){
        std::cin >> artifacts->graded_artifacts[i];
    }
    for( unsigned int i = 0 ; i < artifacts->number_of_graded_artifacts ; i++){
        std::cin >> artifacts->relative_weight_of_artifacts[i];
    }
    return artifacts;
}



Students* read_students(){
    Students* students = new Students;
    std::cin >> students->number_of_students;
    students->students = new Student[students->number_of_students];
    for (unsigned int i = 0 ; i < students->number_of_students ; i++){
        Student current;
        std::cin >> current.id_number >> current.grade_option;
        std::getline(std::cin.ignore(0), current.name);
        students->students[i] = current;
    }
    return students;
}

void read_raw_scores(Students* students, Artifacts* artifacts){
    int number_of_scores;
    std::cin >> number_of_scores;
    for(unsigned int p = 0; p < number_of_scores; p++){
        int score_id;
        std::cin >> score_id;
        for(unsigned int y = 0 ; y < students->number_of_students ; y++){   
            if(students->students[y].id_number==score_id){;
                int* scores = new int[artifacts->number_of_graded_artifacts];
                for(unsigned int x = 0 ; x < artifacts->number_of_graded_artifacts ; x++){
                    int score;
                    std::cin >> score;
                    scores[x] = score;
                }  
                students->students[y].scores = scores;  
            }    
        }
             
    }
}
Cutpoints* read_cutpoint_sets(Students* students){
    Cutpoints* cutpoint_sets = new Cutpoints;
    std::cin >> cutpoint_sets->number_of_cutpoints;
    double* cutpoints = new double[4];
    for(unsigned int i = 0 ; i < cutpoint_sets->number_of_cutpoints ; i++){
        for(unsigned int x = 0 ; x < 4 ; x++){
            std::cin >> cutpoints[x];
        }
        
        cutpoint_sets->cutpoints = cutpoints;
        print_cutpoint(students, cutpoint_sets, i);
    }
    
    return cutpoint_sets;
}
