#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>

//void print();
struct course
	{
		char name[20];
		char subject[20][15];
		int credit[20];
		char labsub[20][20];
		int room;
		int labroom;
		int totsub;
		int totlab;
		int ctchr[20];
		int clabtchr[20];
		int allsub;
		int alllab;
		int breaks;
	};
	struct course co[20];

/*----------------------------------------------*/

struct teach
	{
		char name[20];
		int sub[11];
		int cors[11];
		int labs[20];
		int totsub;
		int totlab;
		int allsub;
		int alllab;
		struct
		{
			struct
			{
				bool busy;
			}busy[10];
		}busy[10];
	};
	struct teach th[20];
/*----------------------------------------------------------------*/
struct room
	{
	char room[20];
	int allsub;
	char labroom[20];
	int alllab;
	struct
	{
		struct
		{
			bool busy;
		}busy[10];
	}busy[10];
	struct
	{
		struct
		{
			bool lunch;
		}lunch[10];
	}lunch[2];
	};struct room ro[20];

/*------------------------------------------------------*/

struct tmpsub
	{
	struct
	{
		struct
		{
			char tmpsub[20];
		}tmpsub[20];
	}tmpsub[20];
	}tmpsub[20];
struct tmplabsub
	{
	struct
	{
		struct
		{
			char tmplabsub[20];
		}tmplabsub[20];
	}tmplabsub[20];
	}tmplabsub[20];
/*------------------------------------------------**/

struct tmptchr
	{
	struct
	{
		struct
		{
			char tmptchr[20];
		}tmptchr[20];
	}tmptchr[20];
	}tmptchr[20];
struct tmplabtchr
	{
	struct
	{
		struct
		{
			char tmplabtchr[20];
		}tmplabtchr[20];
	}tmplabtchr[20];
	}tmplabtchr[20];

/*--------------------------------------------------------------*/

struct fisub
	{
	struct
	{
		struct
		{
			char fisub[20];
		}fisub[20];
	}fisub[20];
	}fisub[20];
struct filabsub
	{
	struct
	{
		struct
		{
			char filabsub[20];
		}filabsub[20];
	}filabsub[20];
	}filabsub[20];

/*----------------------------------------------------------------*/

struct fitch
	{
	struct
	{
		struct
		{
			char fitch[20];
		}fitch[10];
	}fitch[20];
	}fitch[20];
struct filabtch
	{
	struct
	{
		struct
		{
			char filabtch[20];
		}filabtch[10];
	}filabtch[20];
	}filabtch[20];

void input();
void generate(int, int, int, char[]);
void print(char[]);
void gotoxy(int ,int );

long int crs,tch,room,labrooms,dys,lects,tmptch,tmplabtch,tmproom,set,settmp,done;

int main()
{
    char filename[20];
	system("color b0");
	printf("\n\n\n\n\t\t\tEnter the file name you wish to save the generated timetable: ");
    scanf("%[^\n]",filename);
	input();
	generate(0,0,0,filename);
	print(filename);
	return 0;
}

void input()
{
	int i,j,k;
	printf("\n\n\n\t\t\t\t\t\t**********  ::  WELCOME TO TIMETABLE GENERATION SYSTEM  ::  **********");
	//printf("Enter total days,lectures,courses,teachers,rooms: \n");

	printf("\n\n\n");
	printf("\t\tEnter total days             \t\t: ");
	scanf("%d",&dys);
	printf("\n");
	printf("\t\tEnter no. of lectures per day(inc.lunch): ");
	scanf("%d",&lects);
	printf("\n");
	printf("\t\tEnter total no. of classes    \t\t: ");
	scanf("%d",&crs);
	printf("\n");
	printf("\t\tEnter total no. of faculties  \t\t: ");
	scanf("%d",&tch);
	printf("\n");
	printf("\t\tEnter total no. of classrooms \t\t: ");
	scanf("%d",&room);
	printf("\n");
	printf("\t\tEnter total no. of labrooms   \t\t: ");
    scanf("%d",&labrooms);
    printf("\n");


	//scanf("%d %d %d %d %d",&dys,&lects,&crs,&tch,&room);
	//rooms...
    system("cls");
	for(i=0;i<room;i++)
	{
		printf("\n\n");
		printf("\t\tEnter room name %d  : ",i+1);
		scanf("%s",ro[i].room);
	}
    //labrooms...
    for(i=0; i<labrooms; i++)
    {
        printf("\n\n");
        printf("\t\tEnter labroom %d name: ",i+1);
        scanf("%s",ro[i].labroom);
    }
	//tchrs
	system("cls");
	for(i=0;i<tch;i++)
	{
		printf("\n\n");
		printf("\t\tEnter teacher name %d: ",i+1);
		scanf("%s",th[i].name);
	}
	//courses
	for(i=0;i<crs;i++)
	{
		system("cls");
		gotoxy(10,7);
		printf("\t\tEnter course %d name  : ",i+1);
		scanf("%s",co[i].name);

		system("cls");
		gotoxy(10,3);

		printf("%s",co[i].name);
		gotoxy(10,5);

		printf("Enter total theorysubjects: ");
		scanf("%d",&co[i].totsub);
		gotoxy(10,7);

        printf("Enter no. of labcourses   : ");
        scanf("%d",&co[i].totlab);
        gotoxy(10,7);

        for (j=0; j<co[i].totlab; j++)
        {
            printf("\n\n");
            printf("\t\tEnter lab course %d name           : ",j+1);
            scanf("%s",&co[i].labsub[j]);
            printf("\t\tEnter a room for this lab course %d: ",j+1);
            printf("\n\n");
            co[i].alllab+=1;
		    for(k=0;k<labrooms;k++)
            {
			    printf("\t\t\t Room %d %s: \n",k,ro[k].labroom);
		    }
		    printf("\n\t\t\t");
		    scanf("%d",&tmproom);
		    co[i].labroom=tmproom;
		    ro[tmproom].alllab+=1;

            printf("\t\t\tSelect a teacher for this lab course %d: ",j+1);
            printf("\n\n");
            for (k=0; k<tch; k++)
            {
                printf("\t\t\t %d.%s\n",k,th[k].name);
            }
            printf("\t\t\t");
            scanf("%d", &tmplabtch);
            co[i].clabtchr[j]=tmplabtch;
            th[tmplabtch].labs[th[tmplabtch].totlab]=j;
			th[tmplabtch].cors[th[tmplabtch].totlab]=i;
            th[tmplabtch].totlab++;
            th[tmplabtch].alllab+=1;
        }

		for(j=0;j<co[i].totsub;j++)
		{
			printf("\n\n");
			printf("\t\tEnter subject name: ");
			scanf("%s",co[i].subject[j]);

			printf("\t\tEnter subject credit: ");
			scanf("%d",&co[i].credit[j]);

			co[i].allsub+=co[i].credit[j];

			printf("\t\tSelect a teacher for subject %d: ",j+1);
			printf("\n\n");
			for(k=0;k<tch;k++){
				printf("\t\t\t %d.%s\n",k,th[k].name);
			}
			printf("\t\t\t");
			scanf("%d",&tmptch);

			co[i].ctchr[j]=tmptch;
			th[tmptch].sub[th[tmptch].totsub]=j;
			th[tmptch].cors[th[tmptch].totsub]=i;
			th[tmptch].totsub++;

			th[tmptch].allsub+=co[i].credit[j];
			/*if(th[tmptch].allsub>lects*dys-dys)//check total sub limit for a teacher
			{
				printf("\t\tMore than limited sub to a teacher");
				getch();
				exit(0);
			}	*/
		}
		system("cls");
		gotoxy(10,7);
		printf("\t\tEnter a room for this course\n");
		printf("\n\n");
		for(j=0;j<room;j++){
			printf("\t\t\t Room %d %s: \n",j,ro[j].room);
		}
		printf("\n\t\t\t");
		scanf("%d",&tmproom);
		co[i].room=tmproom;
		ro[tmproom].allsub+=co[i].allsub;
        //printf("ro[tmproom].allsub------(%d)  >  (%d)-------lects*dys-dys", ro[tmproom].allsub,(lects*dys-dys));
		/*if(ro[tmproom].allsub>lects*dys-dys)//check total room sub limit
		{
			printf("More than limited sub in a room");
			getch();
			exit(0);
		}	*/
	}
}
/*________________________________*/

void save(int x)
{
	int i,j,k;
	for(i=0;i<=x;i++)
	for(j=0;j<lects;j++)
	for(k=0;k<dys;k++)
	{
		strcpy(filabtch[i].filabtch[j].filabtch[k].filabtch,tmplabtchr[i].tmplabtchr[j].tmplabtchr[k].tmplabtchr);
		strcpy(filabsub[i].filabsub[j].filabsub[k].filabsub,tmplabsub[i].tmplabsub[j].tmplabsub[k].tmplabsub);
		strcpy(fitch[i].fitch[j].fitch[k].fitch,tmptchr[i].tmptchr[j].tmptchr[k].tmptchr);
		strcpy(fisub[i].fisub[j].fisub[k].fisub,tmpsub[i].tmpsub[j].tmpsub[k].tmpsub);
	}
}
/*________________________________*/

void generate(int i,int j,int k, char filename[])
{
	FILE *fp;
	fp = fopen(filename,"w");
	int x;
	if((i<crs)&&(set<crs))
	{
		//printf("\n------------                j(%d) == lects/2(%d).....",j, (lects/2)); // erase after
		if(((j==(lects/2) && (ro[co[i].room].busy[j+1].busy[k].busy==false)) && (ro[co[i].room].lunch[0].lunch[k].lunch==false)) || (j==(lects/2) && (ro[co[i].room].busy[j-1].busy[k].busy==true) && (ro[co[i].room].lunch[1].lunch[k].lunch==false))  )
		{
			strcpy(tmptchr[i].tmptchr[j].tmptchr[k].tmptchr,"     ");
			strcpy(tmpsub[i].tmpsub[j].tmpsub[k].tmpsub,"lunch");

			if(j==(lects/2)){
				ro[co[i].room].lunch[0].lunch[k].lunch=true;
			}
			else{
				ro[co[i].room].lunch[1].lunch[k].lunch=true;
			}
			co[i].breaks++;

			generate(i+(j+(k+1)/dys)/lects,(j+(k+1)/dys)%lects,(k+1)%dys, filename);
			if(!done)
			{
				if(j==(lects/2)){
					ro[co[i].room].lunch[0].lunch[k].lunch=false;
				}
				else{
					ro[co[i].room].lunch[1].lunch[k].lunch=false;
				}
			co[i].breaks--;
			}


		}
		for(x=0;x<co[i].totsub;x++)
		{
			if((th[co[i].ctchr[x]].busy[j].busy[k].busy==false) && (ro[co[i].room].busy[j].busy[k].busy==false) && (co[i].credit[x]>0) && (co[i].allsub<=((dys*lects)-co[i].breaks)))
			{
				strcpy(tmptchr[i].tmptchr[j].tmptchr[k].tmptchr,th[co[i].ctchr[x]].name);
				strcpy(tmpsub[i].tmpsub[j].tmpsub[k].tmpsub,co[i].subject[x]);

				co[i].credit[x]--;

				th[co[i].ctchr[x]].busy[j].busy[k].busy=true;
				ro[co[i].room].busy[j].busy[k].busy=true;

				if(j==(lects-1) && k==(dys-1))
					set++;

				if(settmp<set)
				{
					settmp=set;
					save(i);
				}
				//printf("******%d------%d-------%d\n",i+(j+(k+1)/dys)/lects,(j+(k+1)/dys)%lects,(k+1)%dys);
				generate(i+(j+(k+1)/dys)/lects,(j+(k+1)/dys)%lects,(k+1)%dys,filename);
				if(!done)
				{
				if(j==(lects-1) && k==(dys-1)){
					set--;
				}
				//printf("set________%d\n",set);//erase after using
				co[i].credit[x]++;

				th[co[i].ctchr[x]].busy[j].busy[k].busy=false;
				ro[co[i].room].busy[j].busy[k].busy=false;

				tmptchr[i].tmptchr[j].tmptchr[k].tmptchr[0]='\0';
				tmpsub[i].tmpsub[j].tmpsub[k].tmpsub[0]='\0';
				}

			}
		}
		//breaks******
		//printf("co[i].allsub (%d) < ((lects*dys) (%d) - (co[i].breaks) (%d)))\n",co[i].allsub,lects*dys,(co[i].breaks));
		if(co[i].allsub<((lects*dys)-(co[i].breaks)))
		{

			co[i].breaks++;
			strcpy(tmptchr[i].tmptchr[j].tmptchr[k].tmptchr,"Nill");
			strcpy(tmpsub[i].tmpsub[j].tmpsub[k].tmpsub,"library");

			if(j==(lects-1) && k==(dys-1)){
				set++;
			}
			if(settmp<set)
			{
				settmp=set;
				save(i);
				//print();
			}
			//printf("Front-----j = %d, lects-1 = %d, k = %d, dys-1 = %d\n",j,lects-1,k,dys-1); // erase after
			generate(i+(j+(k+1)/dys)/lects,(j+(k+1)/dys)%lects,(k+1)%dys, filename);
			//printf("last-----j = %d, lects-1 = %d, k = %d, dys-1 = %d\n",j,lects-1,k,dys-1); // erase after
			if(!done)
			{
				if(j==(lects-1) && k==(dys-1)){
					set--;
				}
				co[i].breaks--;
			}
		}
	}
	else
	{
		done=1;
		//fprintf(fp,"..............................done..........................\n");
	}
	fclose(fp);
}
/*_________________________________*/

void print(char filename[])
{
	FILE *fp;
	int i,j,k;
	fp = fopen(filename,"w");
	fprintf(fp,"\n\n\t\t\t\t\t\t*********  :: GENERATED TIMETABLE  :: *********\n\n\n");
	for(i=0;i<crs;i++)
	{

        fprintf(fp,"%s",co[i].name);
		fprintf(fp,"\n\n");
		fprintf(fp,"\t\t");
		for(j=0;j<dys;j++){
			fprintf(fp,"\t       day %d",j+1);
		}
		fprintf(fp,"\n.....................................................................................\n");
		for(j=0;j<lects;j++)
		{

			fprintf(fp,"  lecture %d   ",j+1);

			for(k=0;k<dys;k++)
			{
				fprintf(fp," %9s\t",fisub[i].fisub[j].fisub[k].fisub);//
			}
			fprintf(fp,"\n           ");
			for(k=0;k<dys;k++)
			{
				fprintf(fp," %9s\t",fitch[i].fitch[j].fitch[k].fitch);
			}
			fprintf(fp,"\n\n");
		}fprintf(fp,"\n\n");

	}fclose(fp);
	printf ("************GOTO SCHEDULE FILE TO VIEW YOUR SCHEDULED TIMETABLES***********");
}
/*________________________________*/

void gotoxy(int x,int y)
{
        COORD c;
        c.X=x;
        c.Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
/*________________________________*/
