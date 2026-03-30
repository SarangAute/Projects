#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define pf printf

struct stud_data{
        int roll;
        char name[20];
        float marks;
        struct stud_data* next;
};

void stud_show(struct stud_data* );
void stud_add(struct stud_data **ptr);
void stud_del(struct stud_data **ptr, char ch);
void stud_save(struct stud_data *ptr);
void delete_all(struct stud_data **ptr);
int count(struct stud_data *ptr);
void rev_rec(struct stud_data **ptr);
void stud_modify(struct stud_data **ptr, char ch);
void stud_sort(struct stud_data **ptr,char ch);

