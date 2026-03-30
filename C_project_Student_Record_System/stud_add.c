#include"header.c"
void stud_add(struct stud_data **ptr){
        struct stud_data* temp=(struct stud_data*)malloc(sizeof(struct stud_data));
        int num=1;
        printf("ENTER DETAILS: NAME AND PERCENTAGE\n");
        scanf("%s%f",temp->name,&temp->marks);

        if(*ptr==0){
                temp->next = *ptr;
                *ptr=temp;
                temp->roll=num;
        }
        else{
                struct stud_data *last=*ptr;
                struct stud_data *llast;
                while(last && last->roll==num){
                        llast=last;
                        last=last->next;
                        num++;
                }
                temp->roll=num;
                temp->next=llast->next;
                llast->next=temp;
        }
}

