#include"header.c"

void delete_all(struct stud_data **ptr){
        struct stud_data *temp;
        while(*ptr!=0){
                temp=*ptr;
                *ptr=temp->next;
                free(temp);
        }
}

