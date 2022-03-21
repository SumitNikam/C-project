/**
 * @file student.h
 * @author Vinay B C (https://github.com/vinaybc)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50

/**
 * @brief Sturcute to store the student information
 * 
 */
typedef struct {
    char name[MAX_NAME_LEN];
    int rno;
    char fees;
    float days;
    float attend;
}Student;

/**
 * @brief Sturcture Node to traverse across each student 
 * 
 */
struct Node {
    Student student;
    struct Node *next;
};

/**
 * @brief To add student details 
 * 
 */
void add();
/**
 * @brief To update the eligiblity of each students
 * 
 */
void eligibleStudents();
/**
 * @brief To execute all other functions
 * 
 */
void execute();
/**
 * @brief To print student details
 * 
 */
void printStudents();
/**
 * @brief To delete student record
 * 
 */
void deleteRecord();

#endif
