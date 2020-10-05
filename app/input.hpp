#include<iostream>
struct Artifacts
{
    int number_of_graded_artifacts;
    int* graded_artifacts;
    int* relative_weight_of_artifacts;

};
struct Student
{
    int id_number;
    int score_size;
    char grade_option;
    std::string name;
    int* scores;
    double grade_percenatge;

};
struct Students
{
    int number_of_students;
    Student* students;
};

struct Rawscores
{
    int number_of_scores;
    int* scores;
};
struct Cutpoints
{
    int number_of_cutpoints;
    double* cutpoints[10];
};
Artifacts* read_graded_artifacts();
Students* read_students();
void read_raw_scores(Students* students, Artifacts* artifacts);
Cutpoints* read_cutpoint_sets(Students* students);