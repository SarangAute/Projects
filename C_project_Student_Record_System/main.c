#include"header.c"

int main(){
	char op;
	struct stud_data *hptr = 0;
	while(1){
		pf("+-----------------------------+\n");
		pf("|*****STUDENT RECORD MENU*****|\n");
		pf("+-----------------------------+\n");
		pf("|a/A  :add new record         |\n");
		pf("|d/D  :delete a record        |\n");
		pf("|s/S  :show the list          |\n");
		pf("|m/M  :modify a record        |\n");
		pf("|v/V  :save                   |\n");
		pf("|e/E  :exit                   |\n");	
		pf("|t/T  :sort the list          |\n");	
		pf("|l/L  :delete all the records |\n");	
		pf("|r/R  :reverse the list       |\n");
		pf("|                             |\n");	
		pf("|enter your choice:           |\n");	
		pf("+-----------------------------+\n");

		scanf(" %c",&op);

		switch(op){
			case 'a':
			case 'A': pf("Add new record\n");
				stud_add(&hptr);
				break;
	
			case 'd':
			case 'D': pf("+-----------------+\n");
				  pf("|Delete a record  |\n");
				  pf("+-----------------+\n");
				  pf("|ENTER:           |\n");
				  pf("|      R:ROLL     |\n");
				  pf("|      N:NAME     |\n");
				  pf("+-----------------+\n");
                	       	  char ch;
               			  scanf(" %c",&ch);
            		    	  stud_del(&hptr,ch);
				break;

			case 's':
			case 'S': pf("Show the list\n");
				stud_show(hptr);
				break;

			case 'm':
			case 'M':{pf("+------------------------------------------------+\n");
				  pf("|ENTER WHICH RECORD TO SEARCH FOR MODIFICATION   |\n");
				  pf("|R/r: TO SEARCH A ROLL NUMBER                    |\n");
				  pf("|N/n: TO SEARCH A NAME                           |\n");
				  pf("|M/m: MARKS BASED                                |\n");
				  pf("+------------------------------------------------+\n");
				  char ch;
				  scanf(" %c",&ch);
				  stud_modify(&hptr, ch);
				break;
				  }

			case 'v':
			case 'V': pf("Data saved.\n");
				  stud_save(hptr);
				break;
	
			case 'e':
			case 'E':{
				 char SE;
				 pf("+------------------------------+\n");
				 pf("|ENTER:                        |\n"); 
				 pf("|      S/s:save and exit       |\n"); 
				 pf("|      E/e:exit without saving |\n");
				 pf("+------------------------------+\n");
			 	 scanf(" %c",&SE); 
				 if (SE=='s'||SE=='S')
					 stud_save(hptr);
				 pf("Exited successfully!\n");
				 exit(0);
				break;
				 }
		
			case 't':
			case 'T': {char ch;
				  pf("+-----------------------+\n");
				  pf("|ENTER                  |\n");
				  pf("|N/n: SORT WITH NAMES   |\n");
				  pf("|M/m: SORT WITH MARKS   |\n");
				  pf("+-----------------------+\n");
				  scanf(" %c",&ch);
				  stud_sort(&hptr,ch);
				break;}

			case 'l':
			case 'L': pf("Delete all record\n");
				  delete_all(&hptr);
				break;
	
			case 'r':
        	        case 'R': pf("Reverse record\n");
				  rev_rec(&hptr);
				break;
		}
	}
}

