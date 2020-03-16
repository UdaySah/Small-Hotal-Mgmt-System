/*
PROGRAM CREATOR:-Uday Kumar Sah.
COURSE:-BSC(Hons)IT
UNIVERSITY ROLL NU:-NP000097
INTAKE-CODE:-NP1F1609IT
COLLEGE NAME:-LOAD BUDDHA EDUCATION FOUNDATION
MAITIDEVI-KATHMANDU NEPAL.
ASIA PACIFIC UNIVERSITY OF TECHNOLOGY & INNOVATION
*/
//Declare preprocessor Directive.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void day() // for function choosing daywise.
{
  int choday; //Declare for choosing  which Days floor want to be booked.
  void floorsunday1();      //Declare floorsunday1    for choosing sunday floor.
  void floormonday2();      //Declare floormonday2    for choosing monday floor.
  void floortuesday3();     //Declare floortuesday3   for choosing tuesday floor.
  void floorwednesday4();   //Declare floorwednesday4 for choosing wednesday floor.
  void floorthursday5();    //Declare floorthrusday5  for choosing thrusday floor.
  void floorfriday6();      //Declare floorfriday6    for choosing friday floor.
  void floorsaturday7();    //Declare floorsaturday7  for choosing saturday floor.
//Main function
  void main();
  clrscr();

  printf("1.Sunday\n");          //for choosing 1. for Sunday.
  printf("2.Monday\n");          //for choosing 2. for Monday.
  printf("3.Tuesday\n");         //for choosing 3. for Tuesday.
  printf("4.Wednesday\n");       //for choosing 4. for Wednesday.
  printf("5.Thursday\n");        //for choosing 5. for thrusday.
  printf("6.Friday\n");          //for choosing 6. for friday.
  printf("7.Saturday\n");        //for choosing 7. for saturday.
  printf("8.Back to Menu\n");    //for choosing 8. for Invalid choice...

  printf("Please Enter your choice: ");
  scanf("%d",&choday);

  switch(choday)
  {
    case 1:
	     floorsunday1();       //for Calling Sunday floor.
	     break;
    case 2:
	     floormonday2();       //for Calling Monday floor.
	     break;
    case 3:
	     floortuesday3();      //for Calling Tuesday floor.
	     break;
    case 4:
	     floorwednesday4();    //for Calling Wednesday floor.
	     break;
    case 5:
	     floorthursday5();     //for Calling Thrusday floor.
	     break;
    case 6:
	     floorfriday6();       //for Calling Friday  floor.
	     break;
    case 7:
	     floorsaturday7();     //for Calling Saturday floor.
	     break;
    case 8:  main();
	     break;

    default:
	     printf("Invalid choice");

  }

	     getch();

}

void floorsunday1()      //Start a function for showing floor and room for Sunday
{
 int chofloor;           //Declaring variable for choosing which floor.
 void roomchsun1();      //Declare for Choosing Room Sunday Floor 1. 
 void roomdissun1();     //Declare for View Booked Room Sunday Floor 1.
 void roomchsun2();      //Declare for Choosing Room Sunday Floor 2.
 void roomdissun2();     //Declare for View Booked Room Sunday Floor 2.
 void roomchsun3();      //Declare for Choosing Room Sunday Floor 3.
 void roomdissun3();     //Declare For View Booked Room Sunday Floor 3.

 clrscr();

 printf("1.Floor 1\n\n");     //for choosing 1. for  Sunday first  floor.
 printf("2.Floor 2\n\n");     //for choosing 2. for  Sunday second floor.
 printf("3.Floor 3\n\n");     //for choosing 3. for  Sunday third  floor.

 printf("Choose Floor:");
 scanf("%d",&chofloor);

 switch(chofloor)
 {
  case 1:
	  clrscr();
	  printf("::::: FLOOR 1 :::::\n\n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked Rooms:\n");
	  roomdissun1();         //Calling function roomdissun1() for View Booked Room Sunday Floor 1.
  	  roomchsun1();          //calling function roomchsun1() for Choosing Room Sunday Floor 1. 

	  break;
  case 2:
	  clrscr();

	  printf("::::: FLOOR 2 :::::\n\n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdissun2();       //calling function roomdissun2() for View Booked Room Sunday Floor 2.
	  roomchsun2();        //calling function roomchsun2() for Choosing Room Sunday Floor 2.

	  break;
  case 3:
	  clrscr();

	  printf("::::: FLOOR 3 :::::\n\n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdissun3();      //Calling function roomdissun3() for View Booked Room Sunday Floor 3.      
	  roomchsun3();       //Calling function roomchsun3() for Choosing Room Sunday Floor 3. 

	  break;
  default:
	  printf("Invalid Choice");

 }


}


void floormonday2()    //Start a function for showing floor and room for Monday
{
 int chofloor;         //Declaring Variable for choosing which floor. 
 void roomchmon1();    //Declare for Choosing Room Monday Floor 1.
 void roomdismon1();   //Declare for View Booked Room Monday Floor 1.
 void roomchmon2();    //Declare for Choosing Room Monday Floor 2.
 void roomdismon2();   //Declare for View Booked Room Monday Floor 2.
 void roomchmon3();    //Declare for Choosing Room Monday Floor 3
 void roomdismon3();   //Declare for View Booked Room Monday Floor 3.

 clrscr();

 printf("1.Floor 1\n\n");        //for choosing 1. for  Monday first  floor.
 printf("2.Floor 2\n\n");        //for choosing 2. for  Monday second  floor.
 printf("3.Floor 3\n\n");        //for choosing 3. for  Monday third  floor.

 printf("Choose Floor:");
 scanf("%d",&chofloor);

 switch(chofloor)
 {
  case 1:
	  clrscr();
	  printf("::::: FLOOR 1 :::::\n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdismon1();       //Calling function roomdismon1() for View Booked Room Monday Floor 1. 
	  roomchmon1();        //calling function roomchmon1() for Choosing Room Monday Floor 1.

	  break;
  case 2:
	  clrscr();

	  printf(" ::::: FLOOR 2 ::::: \n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdismon2();     //Calling function roomdismon2() for View Booked Room Monday Floor 2.
	  roomchmon2();      //Calling function roomchmon2() for Choosing Room Monday Floor 2.

	  break;
  case 3:
	  clrscr();

	  printf(" ::::: FLOOR 3 ::::: \n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdismon3();     //Calling function roomdismon3() for View Booked Room Monday Floor 3.
	  roomchmon3();      //Calling function roomchmon3() for Choosing Room Monday Floor 3.

	  break;
  default:
	  printf("Invalid Choice");

 }

}

void floortuesday3()      //Start a function for showing floor and room for Tuesday
{
 int chofloor;            //Declaring variable for choosing which floor.
 void roomchtue1();       //Declare for Choosing Room Tuesday Floor 1.
 void roomdistue1();      //Declare for View Booked Room Tuesday Floor 1.
 void roomchtue2();       //Declare for Choosing Room Tuesday Floor 2.
 void roomdistue2();      //Declare for View Booked Room Tuesday Floor 2.
 void roomchtue3();       //Declare for Choosing Room Tuesday Floor 3.
 void roomdistue3();      //Declare for View Booked Room Tuesday Floor 3.

 clrscr();

 printf("1.Floor 1\n");    //for choosing 1. for  Tuesday first  floor.
 printf("2.Floor 2\n");    //for choosing 2. for  Tuesday second  floor.
 printf("3.Floor 3\n");    //for choosing 3. for  Tuesday third  floor.
 printf("Choose Floor:");
 scanf("%d",&chofloor);

 switch(chofloor)
 {
  case 1:
	  clrscr();
	  printf(" ::::: FLOOR 1 ::::: \n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdistue1();       //Calling function roomdistue1() for View Booked Room Tuesday Floor 1.
	  roomchtue1();        //Calling function roomchtue1() for Choosing Room Tuesday Floor 1.

	  break;
  case 2:
	  clrscr();

	  printf(" ::::: FLOOR 2 ::::: \n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdistue2();     //Calling function roomdistue2() for View Booked Room Tuesday Floor 2.
	  roomchtue2();      //Calling function roomchtue2() for Choosing Room Tuesday Floor 2.

	  break;
  case 3:
	  clrscr();

	  printf(" ::::: FLOOR 3 ::::: \n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdistue3();      //calling function roomdistue() for View Booked Room Tuesday Floor 3.
	  roomchtue3();       //calling function roomchtue3() for Choosing Room Tuesday Floor 3.

	  break;
  default:
	  printf("Invalid Choice");

 }

}


void floorwednesday4()      //Start a function for showing floor and room for Wednesday
{
 int chofloor;            //Declaring variable for choosing which floor.
 void roomchwed1();       //Declare for Choosing Room Wednesday Floor 1. 
 void roomdiswed1();      //Declare for View Booked Room Wednesday Floor 1.
 void roomchwed2();       //Declare for Choosing Room Wednesday Floor 2. 
 void roomdiswed2();      //Declare for View Booked Room Wednesday Floor 2.
 void roomchwed3();       //Declare for Choosing Room Wednesday Floor 3. 
 void roomdiswed3();      //Declare for View Booked Room Wednesday Floor 3.

 clrscr();

 printf("1.Floor 1 \n");      //for choosing 1. for  Wednesday first  floor.
 printf("2.Floor 2 \n");      //for choosing 2. for  Wednesday second  floor.
 printf("3.Floor 3 \n");      //for choosing 3. for  Wednesday third  floor.

 printf("Choose Floor:");
 scanf("%d",&chofloor);

 switch(chofloor)
 {
  case 1:
	  clrscr();
	  printf(" :::::FLOOR 1 ::::: \n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdiswed1();      //Calling function roomdiwed1() for View Booked Room Wednesday Floor 1.
	  roomchwed1();       //calling function roomchwed1() for Choosing Room Wednesday Floor 1.

	  break;
  case 2:
	  clrscr();

	  printf(" ::::: FLOOR 2 ::::: \n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdiswed2();      //calling function roomdiwed2() for View Booked Room Wednesday Floor 2.
	  roomchwed2();       //calling function roomchwed2() for Choosing Room Wednesday Floor 2.

	  break;
  case 3:
	  clrscr();

	  printf(" ::::: FLOOR 3 ::::: \n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdiswed3();     //calling function roomdiwed3() for View Booked Room Wednesday Floor 3.
	  roomchwed3();      //calling function roomchwed2() for Choosing Room Wednesday Floor 3.

	  break;
  default:
	  printf("Invalid Choice");

 }

}

void floorthursday5()     //Start a function for showing floor and room for Thrusday
{
 int chofloor;          //Declaring variable for choosing which floor.
 void roomchthu1();     //Declare for Choosing Room Thrusday Floor 1.
 void roomdisthu1();    //Declare for View Booked Room Thrusday Floor 1.
 void roomchthu2();     //Declare for Choosing Room Thrusday Floor 2.
 void roomdisthu2();    //Declare for View Booked Room Thrusday Floor 2.
 void roomchthu3();     //Declare for Choosing Room Thrusday Floor 3.
 void roomdisthu3();    //Declare for View Booked Room Thrusday Floor 3.

 clrscr();

 printf("1.Floor 1\n");   //for choosing 1. for  Thrusday first  floor.
 printf("2.Floor 2\n");   //for choosing 2. for  Thrusday second  floor.
 printf("3.Floor 3\n");   //for choosing 3. for  Thrusday third  floor.

 printf("Choose Floor:");
 scanf("%d",&chofloor);

 switch(chofloor)
 {
  case 1:
	  clrscr();
	  printf(" ::::: FLOOR 1 ::::: \n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdisthu1();    //calling function roomdisthu1() for View Booked Room Thrusday Floor 1.
	  roomchthu1();     //calling function roomchthu1() for Choosing Room Thrusday Floor 1.

	  break;
  case 2:
	  clrscr();

	  printf(" ::::: FLOOR 2 ::::: \n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdisthu2();   //calling function roomdisthu2() for View Booked Room Thrusday Floor 2.
	  roomchthu2();    //calling function roomchthu2() for Choosing Room Thrusday Floor 2.

	  break;
  case 3:
	  clrscr();

	  printf(" ::::: FLOOR 3 :::::\n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdisthu3();   //calling function roomdisthu3() for View Booked Room Thrusday Floor 3.
	  roomchthu3();    //calling function roomchthu3() for Choosing Room Thrusday Floor 3.

	  break;
  default:
	  printf("Invalid Choice");

 }

}


void floorfriday6()     //Start a function for showing floor and room for Friday
{
 int chofloor;          //Declaring variable for choosing which floor.
 void roomchfri1();     //Declare for Choosing Room Friday Floor 1.
 void roomdisfri1();    //Declare for View Booked Room Friday Floor 1.
 void roomchfri2();     //Declare for Choosing Room Friday Floor 2.
 void roomdisfri2();    //Declare for View Booked Room Friday Floor 2.
 void roomchfri3();     //Declare for Choosing Room Friday Floor 3.
 void roomdisfri3();    //Declare for View Booked Room Friday Floor 3.

 clrscr();

 printf("1.Floor 1\n");    //for choosing 1. for  Friday first  floor.
 printf("2.Floor 2\n");    //for choosing 2. for  Friday second  floor.
 printf("3.Floor 3\n");    //for choosing 3. for  Friday third  floor.

 printf("Choose Floor:");
 scanf("%d",&chofloor);

 switch(chofloor)
 {
  case 1:
	  clrscr();
	  printf(" ::::: FLOOR 1 :::::\n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf(" \nBooked rooms are:\n");
	  roomdisfri1();       //calling function roomdisfri1() for View Booked Room Friday Floor 1.
	  roomchfri1();        //calling function roomchfri1() for Choosing Room Friday Floor 1.

	  break;
  case 2:
	  clrscr();

	  printf(" ::::: FLOOR 2 :::::\n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdisfri2();     //calling function roomdisfri2() for View Booked Room Friday Floor 2.
	  roomchfri2();      //calling function roomchfri2() for Choosing Room Friday Floor 2.

	  break;
  case 3:
	  clrscr();

	  printf(" :::::FLOOR 3 ::::: \n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdisfri3();     //Calling function roomdisfri3() for View Booked Room Friday Floor 3.
	  roomchfri3();      //calling function roomchfri3() for Choosing Room Friday Floor 3.

	  break;
  default:
	  printf("Invalid Choice");

 }

}


void floorsaturday7()     //Start a function for showing floor and room for Saturday
{
 int chofloor;            //Declaring variable for choosing which floor.
 void roomchsat1();       //Declare for Choosing Room Saturday Floor 1.
 void roomdissat1();      //Declare for View Booked Room Saturday Floor 1.
 void roomchsat2();       //Declare for Choosing Room Saturday Floor 2.
 void roomdissat2();      //Declare for View Booked Room Saturday Floor 2.
 void roomchsat3();       //Declare for Choosing Room Saturday Floor 3.
 void roomdissat3();      //Declare for View Booked Room Saturday Floor 3.

 clrscr();

 printf("1.Floor 1\n\n");   //for choosing 1. for  Saturday first  floor.
 printf("2.Floor 2\n\n");   //for choosing 2. for  Saturday second  floor.
 printf("3.Floor 3\n\n");   //for choosing 3. for  Saturday third  floor.

 printf("Choose Floor:");
 scanf("%d",&chofloor);

 switch(chofloor)
 {
  case 1:
	  clrscr();
	  printf(" ::::: FLOOR 1 ::::: \n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdissat1();     //calling function roomdissat1() for View Booked Room Saturday Floor 1.
	  roomchsat1();      //calling function roomchsat1() for Choosing Room Saturday Floor 1.

	  break;
  case 2:
	  clrscr();

	  printf("::::: FLOOR 2 ::::: \n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdissat2();     //calling function roomdissat2() for View Booked Room Saturday Floor 2.
	  roomchsat2();      //calling function roomchsat2() for Choosing Room Saturday Floor 2.

	  break;
  case 3:
	  clrscr();

	  printf(" ::::: FLOOR 3 ::::: \n");
	  printf("1.ROOM1\t\t 2.ROOM2\t 3.ROOM3\t 4.ROOM4\t 5.ROOM5\n 6.ROOM6\t 7.ROOM7\t 8.ROOM8\t 9.ROOM9\t 10.ROOM10\t");
	  printf("\n Booked rooms are:\n");
	  roomdissat3();     //Calling function roomdissat3() for View Booked Room Saturday Floor 3.
	  roomchsat3();      //calling function roomchsat3() for Choosing Room Saturday Floor 3.

	  break;
  default:
	  printf("Invalid Choice");

 }


}                           //End fo function of showing floor and rooms




			   //Start of Function for choosing room
void roomchsun1()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("sunf1.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchsun2()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("sunf2.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchsun3()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("sunf3.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchmon1()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("monf1.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchmon2()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("monf2.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchmon3()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("monf3.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchtue1()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("tuef1.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchtue2()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("tuef2.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchtue3()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("tuef3.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

       if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchwed1()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("wedf1.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

      if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchwed2()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("wedf2.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

      if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchwed3()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("wedf3.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

   if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchthu1()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("thuf1.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

       if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchthu2()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("thuf2.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

      if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchthu3()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("thuf3.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);
   
    if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchfri1()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("frif1.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

       if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchfri2()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("frif2.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);
   if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchfri3()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("frif3.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

      if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}


void roomchsat1()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("satf1.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchsat2()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("satf2.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}

void roomchsat3()
{

 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("satf3.txt","a");

 if(sp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(j=1;j<=numofroom;j++)
   {
    if(j==1)
     {
      printf("\n\tEnter %dst room number: ",j);
     }
    if(j==2)
     {
     printf("\n\tEnter %dnd room number: ",j);
     }
    if(j==3)
     {
      printf("\n\tEnter %drd room number: ",j);
     }
    if(j>3)
     {
      printf("\n\tEnter %dth room number: ",j);
     }

     scanf("%s",roomnum);

   if((strcmp(roomnum,"ROOM1")!=0)&&(strcmp(roomnum,"ROOM2")!=0)&&(strcmp(roomnum,"ROOM3")!=0)&&(strcmp(roomnum,"ROOM4")!=0)&&(strcmp(roomnum,"ROOM5")!=0)&&(strcmp(roomnum,"ROOM6")!=0)&&(strcmp(roomnum,"ROOM7")!=0)&&(strcmp(roomnum,"ROOM8")!=0)&&(strcmp(roomnum,"ROOM9")!=0)&&(strcmp(roomnum,"ROOM10")!=0))
     {
       printf("\n\t\tInvalid room number");
       j=j-1;

     }

    if((strcmp(roomnum,"ROOM1")==0)||(strcmp(roomnum,"ROOM2")==0)||(strcmp(roomnum,"ROOM3")==0)||(strcmp(roomnum,"ROOM4")==0)||(strcmp(roomnum,"ROOM5")==0)||(strcmp(roomnum,"ROOM6")==0)||(strcmp(roomnum,"ROOM7")==0)||(strcmp(roomnum,"ROOM8")==0)||(strcmp(roomnum,"ROOM9")==0)||(strcmp(roomnum,"ROOM10")==0))
     {
       fprintf(sp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(sp);
}
		       //End of function for choosing room


void roomdissun1()     //Function for displaying Booked room
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;


 sp=fopen("sunf1.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
  {
    printf("%s\t",roomnum,numofroom);
  }

    fclose(sp);

}

void roomdissun2()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("sunf2.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
  {
   printf("%s\t",roomnum,numofroom);
  }

   fclose(sp);
}


void roomdissun3()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("sunf3.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
   {
    printf("%s\t",roomnum,numofroom);
   }

    fclose(sp);

}


void roomdismon1()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("monf1.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
  {
    printf("%s\t",roomnum,numofroom);
  }

    fclose(sp);

}

void roomdismon2()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("monf2.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
  {
   printf("%s\t",roomnum,numofroom);
  }

   fclose(sp);

}

void roomdismon3()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("monf3.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
   {
    printf("%s\t",roomnum,numofroom);
   }

    fclose(sp);

}

void roomdistue1()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("tuef1.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
  {
    printf("%s\t",roomnum,numofroom);
  }

    fclose(sp);

}

void roomdistue2()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("tuef2.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
  {
   printf("%s\t",roomnum,numofroom);
  }

   fclose(sp);

}

void roomdistue3()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("tuef3.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
   {
    printf("%s\t",roomnum,numofroom);
   }

    fclose(sp);

}

void roomdiswed1()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("wedf1.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
  {
    printf("%s\t",roomnum,numofroom);
  }

    fclose(sp);

}

void roomdiswed2()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("wedf2.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
  {
   printf("%s\t",roomnum,numofroom);
  }

   fclose(sp);
}

void roomdiswed3()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("wedf3.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
   {
    printf("%s\t",roomnum,numofroom);
   }

    fclose(sp);
}

void roomdisthu1()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("thuf1.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
  {
    printf("%s\t",roomnum,numofroom);
  }

    fclose(sp);
}

void roomdisthu2()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("thuf2.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
  {
   printf("%s\t",roomnum,numofroom);
  }

   fclose(sp);
}

void roomdisthu3()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("thuf3.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
   {
    printf("%s\t",roomnum,numofroom);
   }

    fclose(sp);
}

void roomdisfri1()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("frif1.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
  {
    printf("%s\t",roomnum,numofroom);
  }

    fclose(sp);
}

void roomdisfri2()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("frif2.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
  {
   printf("%s\t",roomnum,numofroom);
  }

   fclose(sp);
}

void roomdisfri3()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("frif3.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
   {
    printf("%s\t",roomnum,numofroom);
   }

    fclose(sp);
}


void roomdissat1()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("satf1.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
  {
    printf("%s\t",roomnum,numofroom);
  }

    fclose(sp);
}

void roomdissat2()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("satf2.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
  {
   printf("%s\t",roomnum,numofroom);
  }

   fclose(sp);
}

void roomdissat3()
{
 FILE *sp;
 char roomnum[30];
 int numofroom;
 int j;

 sp=fopen("satf3.txt","a+");

 if(sp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(sp,"%s%d",roomnum,&numofroom)!=EOF)
   {
    printf("%s\t",roomnum,numofroom);
   }

    fclose(sp);
}                          //End of function for displaying booked room

//Function for collecting Guest details 
void record()
{
  FILE *sp;

 char name[30];                    //for Declare Variable  Guest Name.
 char address[30];                 //for Declare Variable  Guest Address. 
 char contact[30];                 //for Declare Variable  Guest Contact.
 char day[30];                     //for Declare Variable  Guest booked day.
 int floornum;                     //for Declare Variable  Guest which floor want to booked.
 int numofroom;                    //for Declare Variable  Guest how many Room want to be booked.
 char roomnum[30];                 //for Declare Variable  Guest which room want to be booked.

 sp=fopen("Record.txt","a");       //for Guest Data Saved in Record.txt

 if(sp==NULL)
 {
  puts("file not found");
  exit(0);
 }

 printf("\nEnter your Name: ");                         //Display for Enter your Name.
 scanf("%s",&name);                                     //READ Entered your Name. 
 printf("\nEnter your Address: ");                      //Display for Enter your Address.
 scanf("%s",address);                                   //READ Entered your Address.
 printf("\nEnter your Contact Number: ");               //DISPLAY for Enter Contact Number.
 scanf("%s",contact);                                   //READ Entered your Contact Number.
 printf("\nEnter Day: ");                               //DISPLAY Enter for which day you want to be booked.
 scanf("%s",day);                                       //READ Entered your Day. 
 printf("\nEnter Floornumber: ");                       //DISPLAY Enter for which floor you want to be booked.
 scanf("%d",&floornum);                                 //READ Entered your flool.
 printf("\nEnter number of room you want to book: ");   //Display Enter your how many Room want to be booked..
 scanf("%d",&numofroom);                                //READ Entered your how many  Room want to be booked.
 printf("\nEnter your Roomnumber: ");                   //DISPLAY Enter your room number you want to booked. 
 scanf("%s",roomnum);                                   //READ Entered your room number.
 getch();
 clrscr();
 printf(" Processing...");
 delay(2000);
 clrscr();
 printf(" Registration Succeed \n");

 fprintf(sp,"%s\n%s\n%s\n%s\n%d\n%d\n%s",name,address,contact,day,floornum,numofroom,roomnum);
 fprintf(sp,"\n");

 fclose(sp);
 getch();

}
// for viewing record of the Guest
void viewrecord()
{

 FILE *sp;

 char name[30];          //Declare Variable char Name for Input Name by Guests                
 char address[30];       //Declare Variable char address for Input Address by Guests
 char contact[30];       //Declare Variable char contact for Input contact by Guests
 char day[30];           //Declare Variable char day for Input which day want to be booked.
 int floornum;           //Declare Variable int floornum  for Input under a day which floor you want to be booked.
 int numofroom;          //Declare Variable int numofroom for Input How many rooms you want to be booked.
 char roomnum[30];       //Declare Variable char roomnum for check input room given by guest
 char dayname[30];       //Declare Variable char dayname for check input dayname given by guest.
 int rent;               //Declare Variable int rent for to calculate guest rent.


 clrscr();

 sp=fopen("Record.txt","a+");

 if(sp==NULL)
 {
  puts("file not found");
  exit(0);
 }
 printf("\n ::::: ENTER NAME OF DAY ::::: \n\t");
 scanf("%s",dayname);
 clrscr();
 printf(" \tPlease wait...");
 delay(1000);
 clrscr();

 while(fscanf(sp,"%s%s%s%s%d%d%s",name,address,contact,day,&floornum,&numofroom,roomnum)!=EOF)
 {

  rent=numofroom*50;

  if(strcmp(dayname,day)==0)
  {
    printf("\nName= %s\nAddress= %s\nContact= %s\nDay= %s\nFloornum= %d\nNumofroom= %d\nRoomnum= %s",name,address,contact,day,floornum,numofroom,roomnum);

    printf("\nTotal charge=%d * 50 = $%d \n\n",numofroom,rent);

  }

 }

 fclose(sp);
 getch();
}

void main()  //main function
{
   char cho;  // Declare for choosing your Desire Services in Everest Hotel

   clrscr();

 do
  {
   printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::\n");          //Welcome Hotel Inductrory content..
   printf("\t\t::                    WELCOME                     ::\n");
   printf("\t\t::                                                ::\n");
   printf("\t\t::                      TO                        ::\n");
   printf("\t\t::                                                ::\n");
   printf("\t\t::                 EVEREST HOTEL                  ::\n");
   printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
   printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::\n");         //Services of The Everest Hotel..
   printf("\t\t:::::::::  Hotel Room Management System ::::::::::::\n");
   printf("\t\t:::: 1. Check and Choose Floor and Room           ::\n");
   printf("\t\t:::: 2. Registration of New Guest                 ::\n");
   printf("\t\t:::: 3. View Guest                                ::\n");
   printf("\t\t:::: 4. Exit Menu                                 ::\n");
   printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::\n");


   printf("\t\t please enter your choice:--\t");
   cho=getchar();

   switch(cho)
   {
     case '1':
	      clrscr();

	      day();                                        //for calling day function check avaliablity  Daywise Floor And Rooms.
	      clrscr();

	      break;

     case '2':
	      clrscr();
	      printf("\n ::::: FOR NEW GUEST REGISTRATION :::::\n");  //for calling record function New Guests Registration.

	      record();

	      clrscr();

	      break;

     case '3':
	      clrscr();
		  printf("\n ::::: FOR VIEW NEW GUEST REGRESTRATION :::::\n");
	      viewrecord();                                //for calling viewrecord function for  Viewing Guests Details.

	      break;

     case '4':
	      exit(0);
	      break;

     default:
	     clrscr();

   }


  } while(cho!=NULL);

  getch();
}