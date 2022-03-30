/**
 * @file ll.h
 * @author Krushna Nikam (https://github.com/Krishuk)
 * @brief This program is for student exam management
 * @version 0.1
 * @date 2022-03-28
 * 
 */
#include "student.h"

/**
 * @brief stores the student data at the beginning of Linked List
 * 
 * @param s (Student structure)
 */
void insert_at_begin(Student s);

/**
 * @brief stores the student data at the end of Linked list
 * 
 * @param s 
 */
void insert_at_end(Student s);

/**
 * @brief to traverse across each student data
 * 
 */
void traverse();
/**
 * @brief to delete the student data based on their roll number
 * 
 * @param rollNo 
 */
void delete(int rollNo);
/**
 * @brief to delete particular student data
 * 
 * @param head_ref 
 * @param position 
 */
void deleteNode(struct Node **head_ref, int position);
/**
 * @brief to print all required information
 * 
 */
void print();

