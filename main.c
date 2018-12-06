#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="emon";
    char pass[10]="emon";
    do
{
    printf("\n  **************************<< LOGIN >>**************************  ");
    printf(" \n         USERNAME:-");
	scanf("%s", &uname);
	printf(" \n         PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword);
		if(strcmp(uname,"emon")==0 && strcmp(pword,"emon")==0)
	{
	printf("  \n\n\n       WELCOME TO SCHOOL BILLING SYSTEM !!!! LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();//holds the screen
	break;
	}
	else
	{
		printf("\n\nSORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		getch();//holds the screen
	}
}
	while(a<=3);
	if (a>3)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
        ext();//for exiting
		}
		system("cls");
}
struct dat//for date(month and day
{
    int d,m;//d=day,m=month
};
int clscanf();//check class (1-12)
struct student
{
    struct dat dt;
    float f,fine,tot,adv,due;//f=fee
    char n[50];
    int r,c;//roll and class
    char address[100];
    char contact [11];
} stud,s;
struct teacher
{
    struct dat dt;
    char n[50];
    float sal,adv,tot;
    int id,no;
    char address[100];
      char contact [11];
} tech,t;
int chkdat(int,int);// for checking date
void addrec(int);//for adding records
void modrec(int);//for modifying records
void searchrec(int);//for searching records
void delrec(int);//for deleting records
void salary(int);//for the calculation of salary of teacher and staff
FILE *fs,*ft;//file declaration

int mm,dd;//mm=month, dd=day
void ext();//for exiting
void main(void)
{
    int i,j,k;

    system("color 8b");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf(" \t**********************************************************\n");
    printf(" \t*                                                        *\n");
    printf(" \t***      >>>>>>> WELCOME TO SCHOOL <<<<<<               ***\n");
    printf(" \t*           >>>> Billing System <<<<<                   *\n");
    printf(" \t*            <<< Developed By Emon >>>                   *\n");
    printf(" \t**********************************************************\n");
    printf("\n");
    printf("\n");
    printf("\n");
    for(i=0;i<99;i++)
		printf("-");
    printf(" \n\tENTER ANY KEY TO CONTINUE . . ");
    printf("\n");
	for(i=0;i<99;i++)
		printf("-");
    getch();
    system("cls");//clears the screen
    printf("\n");
    for(i=0; i<80; i++)

    {
        printf("\xdb");
    }
    system("color 5f");
    printf("\n\n\t******<< WELCOME TO SCHOOL BILLING SYSTEM FOR ADMINISTRATION >>******\n\n\n");
    for(i=0; i<80; i++)
    {
        printf("\xdb");
    }
    printf("\n LOADING PLEASE WAIT... \n");
    for(i=0; i<3; i++)
    {
        printf(".");
        Sleep(500);
    }
    printf("\n Enter Any Key To Proceed");
    fflush(stdin);
    getch();
    system("cls");
    login();
    start();
}
void start()
{
    int i,j;//j is for selection of account type
    system("cls");
    	for(i=0;i<80;i++)
		printf("-");
    printf("\n\t\t SELECT YOUR ACCOUNT  ");
    printf("\n");
    for(i=0;i<80;i++)
	printf("-");
    printf("\n\t\t1->> Student");
    printf("\n\t\t2->> Teacher & Staffs");
    printf("\n\t\t3->> Exit");
    printf("\n");
    for(i=0;i<80;i++)
	printf("-");
    printf("\n\t\t Enter Your Account Type :- ");
    fflush(stdin);
    scanf("%d",&j);
    switch (j)
    {
    case 3:
        ext();
    case 1:
    {
        system("color 3f");
        system("cls");
        for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("****************************<< STUDENT ACCOUNT MENU >>***************************** \n");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");
        printf("\n\t\t SELECT YOUR CHOICE  :");
        printf("\n\t\t1>> Add Student's Record");
        printf("\n\t\t2>> Show all students record");
        printf("\n\t\t3>> Search Student's Record");
        printf("\n\t\t4>> Modify Student's Record");
        printf("\n\t\t5>> Delete Student's Record");
        printf("\n\t\t6>> Calculate Student's Fee");
        printf("\n\t\t7>> Show Student's Fee");
        printf("\n\t\t8>> Exit");
        printf("\n");
        printf("\n");
        time_t t;   //for current date and time//
	    time(&t);
        for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));  //to display current date and time//
	    for(i=0;i<80;i++)
		printf("-");
        printf("\n\n Enter Your Choice  ");
        fflush(stdin);
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            addrec(j);//function call
            start();//function call
         case 2:
            showallrecord(j);
            start();
        case 3:
            searchrec(j);
            start();
        case 4:
            modrec(j);
            start();
        case 5:
            delrec(j);
            start();
        case 6:
            fee(mm);
            start();
        case 7:
            showfee();
             //start();
        case 8:
            ext();
        default :
        {
            printf("\n\n\tInvalid entry!!");
            printf("\n\nTo Account Type\n\n\t");
            system("pause");
            start();
        }
        }
    }
    case 2:
    {
        system("color 3f");
        system("cls");
        for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("********************<< TEACHER/STAFF ACCOUNT MENU >>*************************\n");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");
        printf("\n\t\t SELECT YOUR CHOICE");
        printf("\n\t\t1-> Add Teacher/Staff's Records");
        printf("\n\t\t2-> show All Teacher/Staff's Records");
        printf("\n\t\t3-> Search  Teacher/Staff's Records");
        printf("\n\t\t4-> Modify Teacher/Staff's Records");
        printf("\n\t\t5-> Delete Teacher/Staff's Records");
        printf("\n\t\t6-> Calculate Teacher/Staff's Salary");
        printf("\n\t\t7-> Show Teacher/Staff's Salary");
        printf("\n\t\t8-> Exit");
        printf("\n");
        printf("\n");
        time_t t;   //for current date and time//
	    time(&t);
        for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));  //to displau current date and time//
	    for(i=0;i<80;i++)
		printf("-");
        printf("\n\n Enter Your Choice  ");
        fflush(stdin);
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            addrec(j);
            start();
        case 2:
            showallrecordtech(j);
            start();
        case 3:
            searchrec(j);
            start();
        case 4:
            modrec(j);
            start();
        case 5:
            delrec(j);
        case 6:
            salary(mm);
            start();
        case 7:
           showsalary();
        case 8:
            ext();
        default :
        {
            printf("\n\n\tInvalid Entry!!");
            printf("\n\nTo Account Type\n\n\t");
            system("pause");
            start();
        }

        }
    }
    default :
    {
        printf("\n\n\tInvalid Entry!!");
        printf("\n\nTo Account Type\n\n\t");
        system("pause");
        start();
    }
    }
}

void showallrecord(int j)
{

    printf("All information\n\n\n");
    printf("Name \tClass \tRoll no \tAddress     \t\t\tContact no\n");
    printf("____\t____\t_______ \t_______________   \t_______________________\n\n");
    FILE *fs;
    fs=fopen("student.txt","r");
    while(fread(&stud,sizeof(stud),1,fs))
    {


     printf("%s  \t%d \t %d\t \t %s\t      \t %s\n",stud.n,stud.c,stud.r,stud.address,stud.contact);


    }
     fclose(fs);
      printf("\n\n Press Esc To Exit or Do you want to continue(press y or Y");
        fflush(stdin);
        char c=getch();
        if(c==27)
		start();
}
void showallrecordtech(int j)
{

    printf("All information\n\n\n");
    printf("Name \tTeacher/staff id \tAddress \tContact no \tNumber of class per month\n");
    printf("______ \t________________ \t_______ \t__________ \t__________________________\n\n");
    FILE *fs;
    fs=fopen("teacher.txt","r");
    while(fread(&tech,sizeof(tech),1,fs))
    {
             printf("%s \t\t%d\t\t%s\t  \t  %s\t   \t\t%d\n",tech.n,tech.id,tech.address,tech.contact,tech.no);


    }
     fclose(fs);
      printf("\n\n Press Esc To Exit or Do you want to continue(press y or Y");
        fflush(stdin);
        char c=getch();
        if(c==27)
		start();

}

void addrec(int j)
{
    int dif,cdat,ddat,month=0;//cdat=month till which fee is cleared
    float ff;//used in calculation of fee of different class
    char c='y';
    system("color 3f");
    system("cls");
    printf("\n\t  ******************************************************************");


    printf("\n\t  >>>>>>>>>>>>>>>>>>  ADD RECORDS  <<<<<<<<<<<<<<<<<<<<<<<");


    printf("\n\t  ******************************************************************");
    if (j==1)
    {
        while(c=='y'||c=='Y')
        {
            int a=1;
            printf("\n\nEnter  Name of the student: ");
            fflush(stdin);
            scanf("%[^\n]",stud.n);
            printf("\nEnter the class: ");
            fflush(stdin);
            stud.c=clscanf();
            printf("\nEnter Roll No.:");
            fflush(stdin);
            scanf("%d",&stud.r);
            printf("\nEnter Address of the Student.:");
            fflush(stdin);
            scanf("%s",&stud.address);
             printf("\nEnter Contact No.:");
            fflush(stdin);
            scanf("%s",&stud.contact);
            fs=fopen("student.txt","a");//opening a binary file in append mode
            fwrite(&stud,sizeof(stud),1,fs);
            fclose(fs);
            printf("\nRecorded Successfully !! ");
            printf("\n\nPress Esc To Exit or Do you want to continue adding records(press y or Y") ;
            fflush(stdin);
            c=getch();
            if(c==27)
		start();
        }
        getch();
    }
    if (j==2)
    {
        while(c=='y'||c=='Y')
        {
            int a=1;
            printf("\n\nEnter name of teacher/staff:" );
            fflush(stdin);
            scanf("%[^\n]",tech.n);
            printf("\nEnter teacher/staff id: ");
            fflush(stdin);
            scanf("%d",&tech.id);
            printf("\nEnter Address of the teacher/staff  .:");
            fflush(stdin);
            scanf("%s",&tech.address);
             printf("\nEnter Contact No.:");
            fflush(stdin);
            scanf("%s",&tech.contact);
            printf("\nEnter number of class/shift per month:: ");
            scanf("%d",&tech.no);
            fflush(stdin);
            ft=fopen("teacher.txt","a");
            fwrite(&tech,sizeof(tech),1,ft);
            fclose(ft);
            printf("\nRecorded Successfully !! ");
            printf("\n\n Press Esc To Exit or Do you want to continue adding records(press y or Y");
            fflush(stdin);
            c=getch();
            if(c==27)
		start();
        }
        fflush(stdin);
        printf("\n\n");
        system("pause");
    }
}
void searchrec(int j)
{
    char name[50],namet[50];
    int a=1,choice;
    char c='y';
    if (j==1)
    {
        while(c=='y'||c=='Y')
        {
            int a=1;
            system("cls");
            printf("\n\t******************************************************************");
            printf("\n\t<<<<<<<<<<<<<<<<<<<<   SEARCH RECORDS    >>>>>>>>>>>>>>>>>>>>>>>>>");
            printf("\n\t******************************************************************");
            printf("\n\n\t\t CHOOSE SEARCH TYPE::");
            printf("\n\n\t\t1>>Search by name::");
            printf("\n\n\t\t2>>Search by class::");
            printf("\n\n\t\t3>>Exit");
            printf("\n\n\t\t>>Enter Your Type:: ");
            fflush(stdin);
            scanf("%d",&choice);
            if (choice==1)
            {
                a=1;
                printf("\n\nEnter name of student to search: ");
                fflush(stdin);
                scanf("%[^\n]",name);
                fs=fopen("student.txt","rb");
                while(fread(&stud,sizeof(stud),1,fs)==1)
                {
                    if (strcmpi(name,stud.n)==0)
                    {
                        a=0;
                        printf("Name \tClass \tRoll no \tAddress \tContact no\n");
                        printf("____\t____\t_______ \t__________   \t__________\n\n");
                        printf("%s  \t%d \t %d\t \t %s\t      \t %s\n",stud.n,stud.c,stud.r,stud.address,stud.contact);
                    }
                }
                if (a==1)
                    printf("\n\nRECORD NOT FOUND");
                printf("\n\n");
                system("pause");
                fflush(stdin);
                fclose(fs);
            }
            else if (choice==2)
            {
                int cl;
                a=1;
                printf("\n\nEnter class of student : ");
                fflush(stdin);
                cl=clscanf();
                fs=fopen("student.txt","rb");
                while(fread(&stud,sizeof(stud),1,fs)==1)
                {
                    if (stud.c==cl)
                    {
                        a=0;
                        printf("\nname = %s",stud.n);
                        printf("\nclass = %d",stud.c);
                        printf("\naddress = %s",stud.address);
                        printf("\ncontact no = %s",stud.contact);
                    }
                }
                if (a==1)
                    printf("\n\nRECORD NOT FOUND");
                printf("\n\n");
                system("pause");
                fflush(stdin);
                fclose(fs);
            }
            else if (choice==3)
            {
                int rll;
                a=1;
                printf("\n\nEnter roll of student to search: ");
                fflush(stdin);
                rll=clscanf();
                fs=fopen("student.txt","rb");
                while(fread(&stud,sizeof(stud),1,fs)==1)
                {
                    if (strcmpi(name,stud.n)==0)
                    {
                        a=0;
                        printf("\nname = %s",stud.n);
                        printf("\nclass = %d",stud.c);
                    }
                }
                if (a==1)
                    printf("\n\nRECORD NOT FOUND");
                printf("\n\n");
                system("pause");
                fflush(stdin);
                fclose(fs);
            }
            else if(choice==4)
            {
                ext();
            }
            else
            {
                printf("\n\n\n\t\tINVALID ENTRY!!!!\n\n\t\t");
                system("pause");
                searchrec(1);
            }
            printf("\n\n Press Esc To Exit or Do you want to continue searching(press y or Y");
            fflush(stdin);
            c=getch();
            if(c==27)
		start();
        }
        getch();
    }
    if (j==2)
    {
        while(c=='y'||c=='Y')
        {
            int a=1;
            printf("\n\nname of teacher/staff to search: ");
            fflush(stdin);
            scanf("%[^\n]",namet);
            printf("\n\nName \tTeacher/staff id \tAddress \tContact no \tNumber of class per month\n");
            printf("____ \t________________ \t_______ \t__________ \t__________________________\n\n");
            ft=fopen("teacher.txt","rb");
            while(fread(&tech,sizeof(tech),1,ft)==1)
            {
                if (strcmp(namet,tech.n)==0)
                {
                    a=0;
                    printf("%s \t\t\t\t%d \t\t  \t%s    \t\t%s\t%d\n",tech.n,tech.id,tech.address,tech.contact,tech.no);


                }
            }
            if (a==1)
                printf("\n\nRECORD NOT FOUND");
            printf("\n\n");
            system("pause");
            fflush(stdin);
            fclose(ft);
            printf("\n\n Press Esc To Exit or Do you want to continue searching(press y or Y");
            fflush(stdin);
            c=getch();
            if(c==27)
		start();
        }
        getch();
    }
}
void modrec(int j)
{
    char name[50];
    int a=1,choice,cl,rolno;
    char c='y';
    if (j==1)
    {
        while(c=='y'||c=='Y')
        {
            system("cls");
            printf("\n\t******************************************************************");
            printf("\n\t<<<<<<<<<<<<<<<<<<<   MODIFY RECORDS     >>>>>>>>>>>>>>>>>>>>>>>>>>");
            printf("\n\t******************************************************************");
            printf("\n\n\t\tPLEASE CHOOSE MODIFY TYPE::");
            printf("\n\n\t\t1::Modify by name::");
            printf("\n\n\t\t2::Modify by name &class::");
            printf("\n\n\t\t3::Modify by name,class & rollno::");
            printf("\n\n\t\t4::Exit");
            printf("\n\n\t\t::Enter your choice:: ");
            fflush(stdin);
            scanf("%d",&choice);
            if (choice==1)
            {
                int a=0;
                printf("\n\nenter name of student to modify: ");
                fflush(stdin);
                scanf("%[^\n]",name);
                fs=fopen("student.txt","rb+");
                while(fread(&stud,sizeof(stud),1,fs)==1)
                {
                    a=1;
                    if (strcmpi(name,stud.n)==0)
                    {
                        a=0;
                        printf("\nenter new name of student: ");
                        fflush(stdin);
                        scanf("%[^\n]",stud.n);
                        printf("\nenter new class of student: ");
                        fflush(stdin);
                        stud.c=clscanf();
                        printf("\nenter new roll of student: ");
                        fflush(stdin);
                        scanf("%d",&stud.r);
                        printf("\nEnter new Address of the Student.:");
                        fflush(stdin);
                        scanf("%s",&stud.address);
                        printf("\nEnter new Contact No.:");
                        fflush(stdin);
                        scanf("%s",&stud.contact);
                        fseek(fs,-sizeof(stud),SEEK_CUR);
                        fwrite(&stud,sizeof(stud),1,fs);
                        fclose(fs);
                    }
                }
                if (a==1)
                    printf("\n\nRECORDS NOT FOUND");
                else
                    printf("\n\nRECORDS SUCCESSFULLY  MODIFIED");
                printf("\n\n");
                system("pause");
            }
            else if (choice==2)
            {
                int a=0;
                printf("\n\nEnter name of student to modify: ");
                fflush(stdin);
                scanf("%[^\n]",name);
                printf("\n\nEnter class of student to modify: ");
                fflush(stdin);
                cl=clscanf();
                fs=fopen("student.txt","rb+");
                while(fread(&stud,sizeof(stud),1,fs)==1)
                {
                    a=1;
                    if (strcmpi(name,stud.n)==0 && cl==stud.c)
                    {
                        a=0;
                        printf("\nEnter new name of student: ");
                        fflush(stdin);
                        scanf("%[^\n]",stud.n);
                        printf("\nEnter new class of student: ");
                        fflush(stdin);
                        stud.c=clscanf();
                        printf("\nEnter new roll of student: ");
                        fflush(stdin);
                        scanf("%d",&stud.r);
                        printf("\nEnter new Address of the Student.:");
                        fflush(stdin);
                        scanf("%s",&stud.address);
                        printf("\nEnter new Contact No.:");
                        fflush(stdin);
                        scanf("%s",&stud.contact);
                        fseek(fs,-sizeof(stud),SEEK_CUR);
                        fwrite(&stud,sizeof(stud),1,fs);
                        fclose(fs);
                    }
                }
                if (a==1)
                    printf("\n\nRECORDS NOT FOUND");
                else
                    printf("\n\nRECORDS SUCCESSFULLY  MODIFIED");
                printf("\n\n");
                system("pause");
            }
            else if (choice==3)
            {
                int a=0;
                printf("\n\nEnter name of student to modify: ");
                fflush(stdin);
                scanf("%[^\n]",name);
                printf("\n\nEnter class of student to modify: ");
                fflush(stdin);
                cl=clscanf();
                printf("\n\nEnter roll of student to modify: ");
                fflush(stdin);
                scanf("%d",&rolno);
                printf("\nEnter new Address of the Student.:");
                fflush(stdin);
                scanf("%s",&stud.address);
                printf("\nEnter new Contact No.:");
                fflush(stdin);
                scanf("%s",&stud.contact);
                fs=fopen("student.txt","rb+");
                while(fread(&stud,sizeof(stud),1,fs)==1)
                {
                    a=1;
                    if (strcmpi(name,stud.n)==0 && cl==stud.c &&rolno==stud.r)
                    {
                        a=0;
                        printf("\nEnter new name of student: ");
                        fflush(stdin);
                        scanf("%[^\n]",stud.n);
                        printf("\nEnter new class of student: ");
                        fflush(stdin);
                        stud.c=clscanf();
                        printf("\nEnter new roll of student: ");
                        fflush(stdin);
                        scanf("%d",&stud.r);
                        printf("\nEnter new Address of the Student.:");
                        fflush(stdin);
                        scanf("%s",&stud.address);
                        printf("\nEnter new Contact No.:");
                        fflush(stdin);
                        scanf("%s",&stud.contact);
                        fseek(fs,-sizeof(stud),SEEK_CUR);
                        fwrite(&stud,sizeof(stud),1,fs);
                        fclose(fs);
                    }
                }
                if (a==1)
                    printf("\n\nRECORDS NOT FOUND");
                else
                    printf("\n\nRECORDS SUCCESSFULLY  MODIFIED");
                printf("\n\n");
                system("pause");
            }
            else if (choice==4) ext();
            else
            {
                printf("\n\n\n\t\tINVALID ENTRY!!!!\n\n\t\t");
                system("pause");
                modrec(1);
            }

            printf("\n\n Press Esc To Exit or Do you want to continue modifying records(press y or Y");
            fflush(stdin);
            c=getch();
            if(c==27)
		start();
        }
        getch();
    }

    if (j==2)
    {
        while(c=='y'||c=='Y')
        {
            int a=1;
            printf("Enter name of teacher to modify: ");
            fflush(stdin);
            scanf("%[^\n]",name);
            ft=fopen("teacher.txt","rb+");
            while(fread(&tech,sizeof(tech),1,ft)==1)
            {
                if (strcmpi(name,tech.n)==0)
                {
                    a=0;
                    printf("\nEnter new name of teacher: ");
                    fflush(stdin);
                    scanf("%[^\n]",tech.n);
                    printf("\nEnter new id of teacher: ");
                    fflush(stdin);
                    scanf("%d",&tech.id);
                    printf("\nEnter New Address of the teacher/staff  .:");
                    fflush(stdin);
                    scanf("%s",&tech.address);
                    printf("\nEnter New Contact No.:");
                    fflush(stdin);
                    scanf("%s",&tech.contact);
                    fseek(ft,-sizeof(tech),SEEK_CUR);
                    fwrite(&tech,sizeof(tech),1,ft);
                    fclose(ft);
                }
            }

            if (a==1)
                printf("\n\nRECORD NOT FOUND");
            else
                printf("\n\nRECORD SUCCESSFULLY  MODIFIED");
            printf("\n\n");
            system("pause");
            fflush(stdin);

            printf("\n\n Press Esc To Exit or Do you want to continue modifying records(press y or Y");
            fflush(stdin);
            c=getch();
            if(c==27)
		start();
        }
        getch();
    }
}

void delrec(int j)
{
    system("color 3f");
    system("cls");
    printf("\n\t******************************************************************");


    printf("\n\t<<<<<<<<<<<<<<<<<<       DELETE RECORDS     >>>>>>>>>>>>>>>>>>>>>>");


    printf("\n\t******************************************************************");
    FILE *temp,*t1;
    int a=1;
    char name[50],c='y';
    if (j==1)
    {
        while(c=='y'||c=='Y')
        {
            int a=1;
            printf("\n\nEnter name of student to delete: ");
            fflush(stdin);
            scanf("%[^\n]",name);
            fs=fopen("student.txt","rb");
            temp=fopen("tempfile","wb");//opening of temporary file for deleting process
            while (fread(&stud,sizeof(stud),1,fs)==1)
            {
                if (strcmp(stud.n,name)==0)
                {
                    a=0;
                    //fwrite(&stud,sizeof(stud),1,temp);
                    continue;
                }
                else
                {
                    fwrite(&stud,sizeof(stud),1,temp);
                }
            }

            if (a==1)
                printf("\n\nRECORD NOT FOUND");
            else
                printf("\n\nRECORD SUCCESSFULLY  DELETED");
            printf("\n\n");
            system("pause");
            fflush(stdin);
            fclose(fs);
            fclose(temp);
            fs=fopen("student.txt","w");
            temp=fopen("tempfile","r");
            while(fread(&stud,sizeof(stud),1,temp))
            fwrite(&stud,sizeof(stud),1,fs);
            printf("--------");
            fclose(fs);
            fclose(temp);
            system("del student");/*all data except the data to be
            deleted in student were 1st moved to temp and data in student
            was deleted*/
            system("ren tempfile, student");//renaming temp to student
            printf("\n\n Press Esc To Exit or Do you wish to continue deleting other records(press y or Y");
            fflush(stdin);
            c=getch();
            if(c==27)
		start();
        }
        getch();
    }

    if (j==2)
    {
        a=1;
        char namet[50];
        while(c=='y'||c=='Y')
        {
            printf("\n\nEnter name of teacher to delete record: ");
            fflush(stdin);
            scanf("%[^\n]",namet);
            ft=fopen("teacher.txt","rb");
            t1=fopen("tempfile1","wb");
            while (fread(&tech,sizeof(tech),1,ft)==1)
            {
                if (strcmp(tech.n,namet)==0)
                {
                    a=0;
                    continue;
                }
                else
                {
                    fwrite(&tech,sizeof(tech),1,t1);
                }
            }
            if (a==1)
                printf("\n\nRECORD NOT FOUND");
            else
                printf("\n\nRECORD SUCCESSFULLY  DELETED");
            printf("\n\n");
            system("pause");
            fflush(stdin);

            fclose(ft);
            fclose(t1);
            fs=fopen("teacher.txt","w");
            t1=fopen("tempfile1","r");
            while(fread(&tech,sizeof(tech),1,t1))
                fwrite(&tech,sizeof(tech),1,fs);
            printf("--------");
            fclose(fs);
            fclose(t1);

            system("del teacher.txt");
            system("ren tempfile1, teacher.txt");
            printf("\n\n Press Esc To Exit or Do you wish to continue deleting other records(press y or Y");
            fflush(stdin);
            c=getch();
            if(c==27)
		start();
        }
        getch();
    }
}
void salary(int mm)
{

     int dif,cdat,ddat,month=0;//cdat=month till which fee is cleared
    float ff;
    system("cls");
    printf("\n\t******************************************************************");


    printf("\n\t<<<<<<<<<<<<<<<<<<<<<<       SALARY     >>>>>>>>>>>>>>>>>>>>>>>>>>>>>");


    printf("\n\t******************************************************************");
    FILE *f,*t;
    int a=0;
    char name[50],c='y';
    int id;
    while(c=='y'||c=='Y')
    {
        int a=1,day=0;
        fflush(stdin);
        printf("\n\nEnter Teacher/staff name:: ");
        scanf("%[^\n]",name);
        printf("\n\nEnter ID:: ");
        scanf("%d",&id);
        f=fopen("teacher.txt","r");
        t=fopen("salary.txt","a");
        while(fread(&tech,sizeof(tech),1,f)==1)
        {
            if(strcmp(tech.n,name)==0 && id==tech.id)
            {
            a=0;
            fflush(stdin);
            printf("\nEnter month and day till which salary is paid::");
            fflush(stdin);
            scanf("%d%d",&cdat,&ddat);
            cdat=chkdat(cdat,ddat);
            tech.dt.m=cdat;
            tech.sal=tech.no*500;
            tech.adv=(tech.dt.m-mm-1)*tech.sal;
            if (tech.adv<0) tech.adv=0;
            tech.tot=tech.sal;
            fwrite(&tech,sizeof(tech),1,t);
            printf("Record Added");
            }
        }
        if (a==1)
            printf("\n\nRECORD NOT FOUND");
        printf("\n\n");
        system("pause");
        fflush(stdin);

        fclose(f);
        fclose(t);
        printf("\n\n Press Esc To Exit or Do you want to continue(press y or Y");
        fflush(stdin);
        c=getch();
        if(c==27)
		start();
    }
    getch();

    }


void fee(int mm)
{
    int dif,cdat,ddat,month=0;//cdat=month till which fee is cleared
    float ff;
    system("color 3f");
    system("cls");
    printf("\n\t******************************************************************");
    printf("\n\t<<<<<<<<<<<<<<<<<<<<<<       FEE     >>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    printf("\n\t******************************************************************");
    FILE *f,*t;
    int a=0;
    char name[50],c='y';
    int clas, roll;
    while(c=='y'||c=='Y')
    {
        int a=1,day=0;
        fflush(stdin);
        printf("\n\nEnter name:: ");
        scanf("%[^\n]",name);
        printf("\n\nEnter class:: ");
        fflush(stdin);
        clas=clscanf();
        printf("\n\nEnter roll:: ");
        fflush(stdin);
        scanf("%d",&roll);
        f=fopen("student.txt","rb+");
        t=fopen("fee.txt","a");
        while(fread(&stud,sizeof(stud),1,f)==1)
        {
            if(strcmp(stud.n,name)==0 && clas==stud.c && roll==stud.r)
            {
                a=0;
                printf("\nhow many month & day he or she wants to pay:");
                fflush(stdin);
                scanf("%2d%2d",&cdat,&ddat);
                cdat=chkdat(cdat,ddat);
                stud.dt.m=cdat;
                ff=stud.c/12.0;
                stud.f=1000*(1+ff);//fee of different classes
                dif=stud.dt.m-mm;//months of fee wants to pay
                stud.fine=(dif*stud.f)*1/100;
                stud.due=(dif)*stud.f;//fees left to be paid
            if(dif==1)
            {
                stud.tot=stud.f;
                stud.fine=0;
            }
            else
            {
                stud.tot=stud.fine+stud.due;
            }
            fwrite(&stud, sizeof(stud),1,t);
            printf("Record Added");
            }
        }
        if (a==1)
            printf("\n\nRECORD NOT FOUND");
        printf("\n\n");
        system("pause");
        fflush(stdin);

        fclose(f);
        fclose(t);
        printf("\n\n Press Esc To Exit or Do you want to continue(press y or Y");
        fflush(stdin);
        c=getch();
        if(c==27)
		start();
    }
    getch();
}
void ext()
{
    int i;
    system("color 3b");
    printf("\n\n\t\t Thanks for using My School Billing System. .\n\n");
    system("pause");
    system("cls");
    printf("\n\n\t\t\t Exiting In A Moment\n\n");
    for(i=1; i<=60; i++)
    {
        Sleep(50);
        printf("->");
    }
    exit(0);
}

int chkdat(int mnt,int dnt)
{
    int mon,day;
    if (mnt>12 || mnt<1 || dnt<1 || dnt>32)
    {
        MessageBox(0,"Invalid Date!\nEnter Again","Error!",0);

        fflush(stdin);
        scanf("%d%d",&mon,&day);
        mon=chkdat(mon,day);
    }
    else
        return (mnt);
}
int clscanf()
{
    int mnt,mon;
    fflush(stdin);
    scanf("%d",&mnt);
    if (mnt>12 ||mnt<1)
    {

        MessageBox(0,"Invalid Class!\nEnter Class","Error!!",0);
        fflush(stdin);
        mon=clscanf();
    }
    else
        return mnt;
}




void showfee(){
    FILE *fs;
    fs = fopen("fee.txt","r");

    if(fs==NULL){
        printf("file is not exist");

    }else
     printf("\n\nName\tRoll\t\n");
    {
        while(fread(&stud,sizeof(stud),1,fs)){

                printf("Name \tClass \tRoll no \tFee\tTotal Fee\n");
                printf("____ \t________________ \t_______ \t__________ \t________________\n\n");
                printf("%s \t%d \t%d\t\t%.2f\t%.2f",stud.n,stud.c,stud.r,stud.f,stud.tot);
        }
          fclose(fs);

    }
    printf("\n\n Press Esc To Exit or Do you want to continue(press y or Y");
        fflush(stdin);
        char c=getch();
        if(c==27)
		start();
}

void showsalary(){
    FILE *fs;
    fs = fopen("salary.txt","r");

    if(fs==NULL){
        printf("file not exist");

    }else
     printf("\n\nName\tTeacher/staff id\tSalary\tTotal \n");
     printf("____ \t____________ \t_______ \t__________ \t___________\n\n");
    {
        while(fread(&tech,sizeof(tech),1,fs)){

            printf("%s \t%d \t\t  %.2f\t\t%.2f\n",tech.n,tech.id,tech.sal,tech.tot);

        }
          fclose(fs);

    }
    printf("\n\n Press Esc To Exit or Do you want to continue(press y or Y");
        fflush(stdin);
        char c=getch();
        if(c==27)
		start();
}

