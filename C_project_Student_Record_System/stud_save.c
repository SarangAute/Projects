#include"header.c"

void stud_save(struct stud_data *ptr){
        FILE* fp = fopen("student_record.txt","w");
        while(ptr!=0){
                fprintf(fp,"%d  %s  %f\n",ptr->roll,ptr->name,ptr->marks);
                ptr=ptr->next;
        }
        fclose(fp);
}

