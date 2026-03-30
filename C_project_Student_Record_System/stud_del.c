#include"header.c"

void stud_del(struct stud_data **ptr, char ch){
        struct stud_data *prev;
        struct stud_data *temp=*ptr;


                if(ch=='r'||ch=='R')
                {
                        int n;
                        pf("ENTER THE ROLL NUMBER TO DELETE RECORD: \n");
                        scanf("%d",&n);
                        while(temp!=0){
                                if(temp->roll==n){
                                        if(temp==*ptr)
                                                *ptr=temp->next;
                                        else
                                                prev->next=temp->next;
                                        free(temp);
                                        return;
                                }
                                else{
                                        prev=temp;
                                        temp=temp->next;
                                }
                        }
                }
                else if(ch=='n'||ch=='N')
                {
                char str[20];
                pf("ENTER THE NAME TO DELETE RECORD: \n");
                scanf(" %s",str);
                while(temp!=0){
                        if(strcmp(temp->name,str)==0){
                               if(temp==*ptr)
                                         *ptr=temp->next;
                                else
                                        prev->next=temp->next;
                                        free(temp);
					return;
                                 }
                                 else{
                                         prev=temp;
                                         temp=temp->next;
                                 }
                        }
                }
                else
                {
                        pf("WRONG CHOICE\n");
                        return;
                }

        pf("***NO NODE MATCH***\n");
}

