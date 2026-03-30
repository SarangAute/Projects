#include"header.c"

void stud_sort(struct stud_data **ptr,char ch){
    if(ch=='m'||ch=='M'){
        struct stud_data *temp=*ptr, **p;
        int i,j,c=count(*ptr);
        p=(struct stud_data**)malloc(c*sizeof(struct stud_data*));

        for(i=0;i<c;i++){
                p[i]=temp;
                temp=temp->next;
        }

        for(i=0;i<c-1;i++){
                for(j=i+1;j<c;j++){
                        if(p[i]->marks > p[j]->marks){
                                temp = p[i];
                                p[i] = p[j];
                                p[j] = temp;
                        }
                }
        }

        for(i=0;i<c-1;i++)
                p[i]->next = p[i+1];
        p[c-1]->next = NULL;
        *ptr = p[0];
        free(p);
    }
    if(ch=='n' || ch=='N')
    {
        struct stud_data *temp=*ptr, **p;
        int i,j,c=count(*ptr);
        p=(struct stud_data**)malloc(c*sizeof(struct stud_data*));
        for(i=0;i<c;i++){
                p[i]=temp;
                temp=temp->next;
        }
        for(i=0;i<c-1;i++){
                for(j=i+1;j<c;j++){
                        if(strcmp(p[i]->name , p[j]->name) > 0){
                                temp = p[i];
                                p[i] = p[j];
                                p[j] = temp;
                        }
                }
        }
        for(i=0;i<c-1;i++)
                p[i]->next = p[i+1];
        p[c-1]->next = NULL;
        *ptr = p[0];
        free(p);
    }
}


