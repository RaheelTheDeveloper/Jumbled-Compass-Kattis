# Jumbled-Compass-Kattis

This program takes two inputs from the user n1 that is the current direction of the needle, and an integer n2, the correct direction of the needle.
This function returns the change in direction that would make the needle spin the shortest distance from n1 to n2.
A positive change indicates spinning the needle clockwise, and a negative change indicates spinning the needle counter-clockwise.
If the two input numbers are diametrically opposed, the needle travels clockwise.

The distanceToSelect funstion checks that if correct direction of the needle (n2) is greater or equal to current direction of the needle (n1) then it takes the difference of both the variables  and stores into a new variable and if n2 is  not greater or equal to n1 then it adds 360 with that condition.
Similarly, if n1 is greater or equal to n2 then it subtracts both the variables and store into a new variable and if n2 is not greater or equal to n1 then it adds 360 with n1 and  subtracts from n2 and stores into a new variable.
Afterwards a condition is placed on both the stored variables. The one that is smaller is returned representing the minimum distance that the compass is going to move.
