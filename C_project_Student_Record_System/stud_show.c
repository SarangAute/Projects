#include"header.c"

void stud_show(struct stud_data* ptr){
        while(ptr != 0){
                printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
                ptr=ptr->next;
        }
}

