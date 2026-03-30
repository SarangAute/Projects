#include"header.c"

int count(struct stud_data *ptr){
        int ct=0;

        while(ptr!=NULL){
                ct++;
                ptr = ptr->next;
        }

        return ct;
}

void rev_rec(struct stud_data **ptr){
        struct stud_data *temp;
        int i,j,c=count(*ptr);
        int size = sizeof(struct stud_data)-8;
        struct stud_data **arr;
        arr=(struct stud_data**)malloc(c*sizeof(struct stud_data*));
        for(i=0;i<c;i++){
                arr[i]=*ptr;
                *ptr = (*ptr)->next;
        }
        arr[0]->next=0;
        for(i=1;i<c;i++)
                arr[i]->next=arr[i-1];
        *ptr=arr[c-1];
}

