#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
	     struct medicine{
	     	    char *medicineName;
	     	    char *company;
	     	    char *kindofMedicine;
	     	    int  mg;
	     	    int  expireDate;
	     	    int  number;
	     	    int  price;
	     	    int  tablet;
		 }; 
	int main()
			{
		while(1)
		{ 
		typedef medicine pharmacy;
		       int choose;
		       printf("\n*-*-*-*-*-*-*-*-*-*-*MENU*-*-*-*-*-*-*-*-*-*-*\n");
		       printf("1.  Medicine record               :\n");
		       printf("2.  Search a medicine             :\n");
		       printf("3.  Medicine list                 :\n");
		       printf("4.  Add product                   :\n");
		       printf("5.  Remove product                :\n");
		       printf("6.  Stock                         :\n");
		       printf("7.  Prescription record           :\n");
		       printf("8.  Medicine sale                 :\n");
		       printf("9.  Search a prescription record   :\n");
		       printf("10. RESET                         :\n");
		       printf("0 . EXIT                          :\n");
		for(int i=1;i<15;i++)
		{
			printf("*",i);
		}
		printf("\n\nPlease enter the choose  :     \n");
		scanf("%d",&choose);	
		 if(choose==1)
		 {//medicine record
		 pharmacy input;
		 input.medicineName=(char *)malloc(sizeof(char)*300);
		 printf("Please enter the medicine name :     \n");
		 scanf("%s",input.medicineName);
		 input.company=(char *)malloc(sizeof(char)*300);
		 printf("Please enter the company name:        \n");
		 scanf("%s",input.company);
		 input.kindofMedicine=(char *)malloc(sizeof(char)*300);
		 printf("Please enter what kind of medicine  :     \n");
		 scanf("%s",input.kindofMedicine);
		 printf("Please enter the how many medicine   :     \n");
		 scanf("%d",&input.number);
		 printf("Please enter the expire date         :     \n");
		 scanf("%d",&input.expireDate);
		 printf("Please enter the how many tablet    :      \n");
		 scanf("%d",&input.tablet);
		 printf("Please enter the how many miligram of value :     \n");
		 scanf("%d",&input.mg);
		 printf("Please enter the price  :      \n ");
		 scanf("%d",&input.price);
		 FILE *fp=fopen("iremserbest.txt","a");
		 fprintf(fp,"%s %s %s %d %d %d %d %d\n",input.medicineName,input.company,input.kindofMedicine,&input.number,&input.expireDate,&input.tablet,&input.mg,&input.price);
		 printf("--- successful register---\n");
		 fclose(fp);
                   	}
			if(choose==2)
			{ //search a medicine
			printf("please enter the medicine you are looking for    : \n");
			char searching[40];
			scanf("%s",searching);
			int flag=0;
			FILE *fp=fopen("iremserbest.txt","r");
			pharmacy input;
			input.company=(char *)malloc(sizeof(char)*300);
			input.medicineName=(char *)malloc(sizeof(char)*300);
			input.kindofMedicine=(char *)malloc(sizeof(char)*300);
			while(feof(fp))
			{
				fscanf(fp,"%s %s %s %d %d %d %d %d\n",input.medicineName,input.company,input.kindofMedicine,&input.number,&input.expireDate,&input.tablet,&input.mg,&input.price);
        if(strcmp(input.medicineName,searching)==0);
        {
        	flag=1;
        	printf("company:%s\n medicine name:%s\n kind of medicine:%s\n number:%d\n expire date:%d\n tablet:%d\n mg:%d\n price:%dtl\n",input.company,input.medicineName,input.kindofMedicine,input.number,input.expireDate,input.tablet,input.mg,input.price);
		}
		}
		if(flag=0)
		printf("The medicine you search cannot be found");
		fclose(fp);	
			}
			if(choose==3) 
			{// medicine list
			printf("********pharmaceutical warehouse********\n");
			FILE *fp=fopen("iremserbest.txt","r");
			pharmacy input;
			input.company=(char *)malloc(sizeof(char)*300);
			input.medicineName=(char *)malloc(sizeof(char)*300);
			input.kindofMedicine=(char *)malloc(sizeof(char)*300);
			while(!feof(fp))
			{
				fscanf(fp,"%s %s %s %d %d %d %d %d\n",input.medicineName,input.company,input.kindofMedicine,&input.number,&input.expireDate,&input.tablet,&input.mg,&input.price);
			    printf("\n/%s/ - price: %dtl\n",input.medicineName,input.price);
			}
			fclose(fp);
			}
if(choose==4)
			{  //add product
			FILE *fp=fopen("iremserbest.txt","r");
			medicine input[300];
			char ordermedicine[300];
			int buying;
			printf("Please enter the order medicine name:    \n");
			scanf("%s",ordermedicine);
			printf("how many:    \n");
			scanf("%d",&buying);
			int i=0;
			while(!feof(fp))
			     {
			     	input[i].medicineName=(char *)malloc(sizeof(char)*300);
			         input[i].company=(char *)malloc(sizeof(char)*300);
			         input[i].kindofMedicine=(char *)malloc(sizeof(char)*300);
			         fscanf(fp,"%s %s %s %d %d %d %d %d\n",input[i].medicineName,input[i].company,input[i].kindofMedicine,&input[i].number,&input[i].expireDate,&input[i].tablet,&input[i].mg,&input[i].price);
				i++;
				 }
				 for(int j=0;j<i;j++) 
				 {
				 	if(strcmp(ordermedicine,input[j].medicineName)==0)
				 	     {
				 	     	input[j].number=input[j].number+buying;
				 	     	printf("Order is completed...");
				 	     	printf("Amount to be paid :%dtl",input[j].price*buying);
					      }
			fp=fopen("iremserbest.txt","w");
			for(int j=0;j<=i-1;j++)	
		           	{
		           		fprintf(fp,"%s %s %s %d %d %d %d %d\n",input[i].medicineName,input[i].company,input[i].kindofMedicine,input[i].number,input[i].expireDate,input[i].tablet,input[i].mg,input[i].price);	
					  }	      
				 }
				 fclose(fp);
			}
	if(choose==5)
	{ //remove product
	FILE *fp=fopen("iremserbest.txt","r");
     char noun[100];
         printf("Please write name you want to delete?     \n");
         scanf("%s",noun);
            int increase=0;
            medicine input[200];
            while(!feof(fp))
            {
                	input[increase].medicineName=(char *)malloc(sizeof(char)*300);
			         input[increase].company=(char *)malloc(sizeof(char)*300);
			         input[increase].kindofMedicine=(char *)malloc(sizeof(char)*300);
			         fscanf(fp,"%s %s %s %d %d %d %d %d\n",input[increase].medicineName,input[increase].company,input[increase].kindofMedicine,&input[increase].number,&input[increase].expireDate,&input[increase].tablet,&input[increase].mg,&input[increase].price);
			        increase++;
			}
			fclose(fp);
			FILE *fp2=fopen("iremserbest.txt","w");
			for(int i=0;i<=increase-1;i++)
			{
		if(strcmp(noun,input[i].medicineName)!=0)
	fprintf(fp2,"%s %s %s %d %d %d %d %d\n",input[i].medicineName,input[i].company,input[i].kindofMedicine,input[i].number,input[i].expireDate,input[i].tablet,input[i].mg,input[i].price);
			}
	printf("Record has been deleted...");
	fprintf(fp2,'\0');
	fclose(fp2);
	}
	if(choose==6)
	{ //stock
	pharmacy input;
	FILE *fp=fopen("iremserbest","r");
	while(!feof(fp))
	   {
	   	int i=0;
	   	     input.medicineName=(char *)malloc(sizeof(char)*300);
			 input.company=(char *)malloc(sizeof(char)*300);
			 input.kindofMedicine=(char *)malloc(sizeof(char)*300);
		fscanf(fp,"%s %s %s %d %d %d %d %d\n",input.medicineName,input.company,input.kindofMedicine,&input.number,&input.expireDate,&input.tablet,&input.mg,&input.price);
	 while(!input.medicineName[i++]!='\0');
	 if(input.number>=30)
	 printf("it's okay'");
	 else if(input.number>=25)
	 printf("\n product entry\n");
	 else if(input.number>=15)
	 printf("\nCheck the product availibality...\n");
	 else if(input.number>=10)
	 printf("\ncritical condition...\n");
	 else if(input.number>=5)
	 printf("\nbe on the point of exhausting...\n");
	 else if(input.number==0)
	 printf("\n the product is up...\n");
	 printf("%s(=)%d\n",input.medicineName,input.number);
	   }
	   fclose(fp);
	}
	if(choose==7)
	{ //Prescription record
	char name[100];
	char surname[100];
	char bloodgroup[50];
	char institution[100];
	char medicine[100];
	double identitynumber;
	int number;
	int mounth;
	int year;
	int day;
	printf("\n\nPRESCRÝPTÝON RECORD;\n");
	printf("Please enter the patient name:    \n");
	scanf("%s",name);
	printf("\n Please enter the patient surname:   \n");
	scanf("%s",surname);
	printf("\n Please enter the blood group:     \n");
	scanf("%s",bloodgroup);
	printf("\n Please enter the institution;     \n");
	scanf("%s",institution);
	printf("\n Please enter the identity number:    \n");
	scanf("%d",&identitynumber);
	printf("\n Please enter the day:   \n");
	scanf("%d",&day);
	printf("\n Please enter the mounth:    \n");
	scanf("%d",&mounth);
	printf("\n Please enter the year:    \n");
	scanf("%d",&year);
	printf("\n Please enter the medicine name:    \n");
	scanf("%s",name);
	printf("\n Please enter the medicine number:   \n");
	scanf("%d",&number);
	FILE *fp1=fopen("prescription.txt","a");
	fprintf(fp1,"%s %s %s %s %f %d %d %d %s %d \n",name,surname,bloodgroup,institution,identitynumber,day,mounth,year,medicine,number);
	printf("prescription was recorded...");
	fclose(fp1);
	}
	if(choose==8)
	{ //Medicine sale
	  FILE *fp=fopen("iremserbest.txt","r");
	  char salemedicine[300];
	  int wanted;
	  printf("Please enter the medicine name:   \n");
	  scanf("%s",salemedicine);
	  printf("Increasing amount :    \n");
	  scanf("%d",wanted);
	  int i=0;
	  medicine input[300];
	  while (!feof(fp)) 
	  {
	  	    input[i].medicineName=(char *)malloc(sizeof(char)*300);
			 input[i].company=(char *)malloc(sizeof(char)*300);
			 input[i].kindofMedicine=(char *)malloc(sizeof(char)*300);
			 fscanf(fp,"%s %s %s %d %d %d %d %d\n",input[i].medicineName,input[i].company,input[i].kindofMedicine,&input[i].number,&input[i].expireDate,&input[i].tablet,&input[i].mg,&input[i].price);
	         i++;
		  }
		for (int j=0;j<i;j++)
		 {
		 	if(strcmp(salemedicine,input[j].medicineName)==0)
		 	{
		 		input[j].number=input[j].number-wanted; 
		 		printf("Sales completed");
		 		printf("Amount to be paid:  %dtl",input[j].price*wanted);
			 }
			 fp=fopen("iremserbest.txt","w");
			 for (int j=0;j<=i-1;j++)
			 {
			 	fprintf(fp,"%s %s %s %d %d %d %d %d\n",input[i].medicineName,input[i].company,input[i].kindofMedicine,input[i].number,input[i].expireDate,input[i].tablet,input[i].mg,input[i].price); 	
			 }
			 fprintf(fp,'\0');
			 	fclose(fp);
		     }  
            	}
    if(choose==9)
    { //Search a prescription record
     FILE *fp1=fopen("prescription.txt","r");
    char searchingsurname[50];
    char name[100];
	char surname[100];
	char bloodgroup[50];
	char institution[100];
	char medicine[100];
	double identitynumber;
	int number;
	int mounth;
	int year;
	int day;
	int flags=0;
	printf("Please enter surname for searched prescription record:   \n");
	scanf("%s",searchingsurname);
	while(!feof(fp1))
	   {
	   	fscanf(fp1,"%s %s %s %s %f %d %d %d %s %d \n",name,surname,bloodgroup,institution,&identitynumber,&day,&mounth,&year,medicine,&number);
	   if(strcmp(surname,searchingsurname)==0)
	   {
	   	flags=1;
	   	printf("\nNAME:%s \nSURNAME:%s \nBLOODGROUP:%s \nINSTÝTUTÝON:%s \nIDENTÝTY NUMBER:%f \nDATE:%d%d%d \nMEDÝCÝNE:%s \nNUMBER:%d\n",name,surname,bloodgroup,institution,identitynumber,day,mounth,year,medicine,number);
	   }
	   }
	   if(flags==0)
	   printf("The patient you search could not found...");
	    fclose(fp1);
	}
	if(choose==10)
	{ //RESET
	 system("CLS");
	}
    if(choose==0);
    break;
		}
        }

	
