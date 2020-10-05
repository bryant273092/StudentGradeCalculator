#include<iostream>
#include "remove_pointers.hpp"

int main()
{
    Artifacts* graded_artifacts = read_graded_artifacts();
    Students* students = read_students();
    read_raw_scores(students, graded_artifacts);
    calculate_total_scores(graded_artifacts, students);
    print_total_scores(students);
    Cutpoints* cutpoints = read_cutpoint_sets(students);
    remove_pointers(graded_artifacts, students, cutpoints);
    return 0;
}

