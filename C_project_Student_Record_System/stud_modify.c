#include"header.c"

void stud_modify(struct stud_data **ptr, char ch){
        struct stud_data *temp=*ptr;
        int n,count=0;
        char name[20];
        float f;
        if(ch=='r'||ch=='R'){
                pf("ENTER ROLL NUMBER TO SEARCH IN RECORD : \n");
                scanf("%d",&n);
                while(temp!=0){
                        if(temp->roll==n){
                                pf("MODIFY NAME AND MARKS\n");
                                scanf("%s%f",temp->name,&temp->marks);
                                return;
                        }
                        else
                                temp=temp->next;
                }
                pf("NO MATCH IN RECORD\n");
        }
        if(ch=='n'||ch=='N'){
                pf("ENTER NAME TO SEARCH IN RECORD : \n");
                scanf("%s",name);
                while(temp!=0){
                        if(strcmp(temp->name,name)==0){
                                pf("%d  %s  %f\n",temp->roll,temp->name,temp->marks);
                                count++;
                        }
                        temp=temp->next;
                }
                if(count==1){
                        temp=*ptr;
                        while(temp!=0){
                                if(strcmp(temp->name,name)==0){
                                        pf("MODIFY NAME AND MARKS\n");
                                        scanf("%s%f",temp->name,&temp->marks);
                                        return;
                                }
				else
                                        temp=temp->next;
                        }
                }
                if(count>1){
                        pf("MULTIPLE SAME NAMES ARE PRESENT \n");
                        stud_modify(ptr,'r');
                        return;
                }
                pf("NO MATCH IN RECORD\n");
        }
        if(ch=='m'||ch=='M'){
                pf("ENTER MARKS TO SEARCH IN RECORD : \n");
                scanf("%f",&f);
                while(temp!=0){
                        if(temp->marks==f){
                                pf("%d  %s  %f\n",temp->roll,temp->name,temp->marks);
                                count++;
                        }
                        temp=temp->next;
                }
                if(count==1){
                        temp=*ptr;
                        while(temp!=0){
                                if(temp->marks==f){
                                        pf("MODIFY NAME AND MARKS\n");
                                        scanf("%s%f",temp->name,&temp->marks);
                                        return;
                                }
                                else
                                        temp=temp->next;
                        }
                }
                if(count>1){
                        pf("MULTIPLE SAME NAMES ARE PRESENT \n");
                        stud_modify(ptr,'r');
			return;
                }
                pf("NO MATCH IN RECORD\n");
        }
}

