# TimeTable_Management_System
Coded in C language
********** :: WELCOME TO TIMETABLE GENERATION SYSTEM :: **********

********************   :: README ::   *********************

This is the timetable generating problem.

Inputs can be given like this...

Giving inputs must be with care...

Because if you make any mistake in giving inputs, you have run the program again and start from first.

After execution open the file you saved !!!

--------------------------------------------------------------------------

Enter total days                        : 5

Enter no. of lectures per day(inc.lunch): 5

Enter total no. of Department classes   : 2

Enter total no. of faculties            : 15

Enter total no. of classrooms           : 2

Enter total no. of labrooms             : 2

--------------------------------------------------------------------------

Enter room name 1  	        	      : 001
	
Enter room name 2  		      : 002

Enter labroom 1 name    		      : Mechanicallab

Enter labroom 2 name   		      : Programminglab

--------------------------------------------------------------------------

Enter teacher name 1			: DR.ASF

Enter teacher name 2			: DR.KR

Enter teacher name 3			: DR.NP

Enter teacher name 4			: PROF.KSR

Enter teacher name 5			: DR.BHL

Enter teacher name 6			: PROF.KSG

Enter teacher name 7			: DR.KGL

Enter teacher name 8			: DR.DFS

Enter teacher name 9			: DR.HB

Enter teacher name 10			: PROF.MCL

Enter teacher name 11			: DR.BEL

Enter teacher name 12			: DR.MNP

Enter teacher name 13			: DR.CCD

Enter teacher name 14			: DR.ELA

Enter teacher name 15			: PROF.BSK

-----------------------------------------------------------------------------

Enter course 1 name			: CSE

          Enter total theorysubjects: 5

          Enter no. of labcourses   : 2

                Enter lab course 1 name           : mechpractice
                Enter a room for this lab course 1:

                         Room 0 Mechanicallab:
                         Room 1 Programminglab:

                        0
                        Select a teacher for this lab course 1:

                         0.DR.ASF
                         1.DR.KR
                         2.DR.NP
                         3.PROF.KSR
                         4.DR.BHL
                         5.PROF.KSG
                         6.DR.KGL
                         7.DR.DFS
                         8.DR.HB
                         9.PROF.MCL
                         10.DR.BEL
                         11.DR.MNP
                         12.DR.CCD
                         13.DR.ELA
                         14.PROF.BSK
                        0


                Enter lab course 2 name           : FPSDprogramming
                Enter a room for this lab course 2:

                         Room 0 Mechanicallab:
                         Room 1 Programminglab:

                        1
                        Select a teacher for this lab course 2:

                         0.DR.ASF
                         1.DR.KR
                         2.DR.NP
                         3.PROF.KSR
                         4.DR.BHL
                         5.PROF.KSG
                         6.DR.KGL
                         7.DR.DFS
                         8.DR.HB
                         9.PROF.MCL
                         10.DR.BEL
                         11.DR.MNP
                         12.DR.CCD
                         13.DR.ELA
                         14.PROF.BSK
                        1

                Enter subject name: FPSD
                Enter subject credit: 3
                Select a teacher for subject 1:

                Enter subject name: Maths
                Enter subject credit: 3
                Select a teacher for subject 2:

                Enter subject name: BEEE
                Enter subject credit: 2
                Select a teacher for subject 3:

                Enter subject name: evs
                Enter subject credit: 2
                Select a teacher for subject 4:

                Enter subject name: Fds
                Enter subject credit: 2
                Select a teacher for subject 5:


                        Enter a room for this course


                         Room 0 001:
                         Room 1 002:

                        0
------------------------------------------------------------------------------------------
Enter course 2 name			: EEE

          EEE

          Enter total theorysubjects: 5

          Enter no. of labcourses   : 1

                Enter lab course 1 name           : mechpractice
                Enter a room for this lab course 1:

                         Room 0 Mechanicallab:
                         Room 1 Programminglab:

                        0
                        Select a teacher for this lab course 1:

                         0.DR.ASF
                         1.DR.KR
                         2.DR.NP
                         3.PROF.KSR
                         4.DR.BHL
                         5.PROF.KSG
                         6.DR.KGL
                         7.DR.DFS
                         8.DR.HB
                         9.PROF.MCL
                         10.DR.BEL
                         11.DR.MNP
                         12.DR.CCD
                         13.DR.ELA
                         14.PROF.BSK
                        0

                Enter subject name: Maths
                Enter subject credit: 3
                Select a teacher for subject 1:

                Enter subject name: evs
                Enter subject credit: 2
                Select a teacher for subject 2:

                Enter subject name: Circuits
                Enter subject credit: 3
                Select a teacher for subject 3:

                Enter subject name: Mechanics
                Enter subject credit: 2
                Select a teacher for subject 4:

                Enter subject name: BEEE
                Enter subject credit: 3
                Select a teacher for subject 5:

                        Enter a room for this course


                         Room 0 001:
                         Room 1 002:

                        1
-------------------------------------------------------------------------

THE OUTPUT WILL BE...



			*********  :: GENERATED TIMETABLE  :: *********


CSE

		day 1	      day 2	     day 3	    day 4	    day 5
    .....................................................................................
    lecture 1         FPSD	      FPSD	      FPSD	     Maths	     Maths	
                 	 DR.KR	     DR.KR	     DR.KR	     DR.NP	     DR.NP	

    lecture 2        Maths	      BEEE	      BEEE	       evs	       evs	
                	DR.NP	  PROF.KSR	  PROF.KSR	    DR.BHL	    DR.BHL	

    lecture 3        lunch	     lunch	     lunch	     lunch	     lunch	
                     	          	          	          	          	

    lecture 4          Fds	       Fds	   library	   FPSDprogramming	   mechanicalpractice	
            	PROF.KSG   PROF.KSG	      Nill	      DR.KR	     DR.ASF	

    lecture 5      library	   library	   library	   FPSDprogramming	   mechanicalpractice	
                	 Nill	     	 Nill	     Nill	      DR.KR	      DR.ASF	



EEE

		day 1	      day 2	    day 3	    day 4            day 5
    .....................................................................................
    lecture 1        Maths	     Maths	     Maths	       evs	       evs	
              	 DR.KGL	    DR.KGL	    DR.KGL	  PROF.KSR	  PROF.KSR	

    lecture 2     Circuits	  Circuits	  Circuits	 Mechanics	 Mechanics	
             	 DR.DFS	    DR.DFS	    DR.DFS	     DR.HB	     DR.HB	

    lecture 3        lunch	     lunch	     lunch	     lunch	     lunch	
                     	          	          	          	          	

    lecture 4         BEEE	      BEEE	      BEEE	   mechanicalpractice	   library	
              	 DR.BEL	    DR.BEL	    DR.BEL	     DR.ASF	      Nill	

    lecture 5      library	   library	   library	   mechanicalpractice	   library	
               	  Nill	      Nill	      Nill	      DR.ASF	      Nill	
