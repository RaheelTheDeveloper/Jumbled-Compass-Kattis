# Jumbled-Compass-Kattis

**Problem:**
Jonas is developing the JUxtaPhone and is tasked with animating the compass needle. The API is simple: the compass needle is currently in some direction (between 0 and 359 degrees, with north being 0,east being 90), and is being animated by giving the degrees to spin it. If the needle is pointing north,and you give the compass an input of 90, it will spin clockwise (positive numbers mean clockwise direction) to stop at east, whereas an input of −45 would spin it counterclockwise to stop at north west.

The compass gives the current direction the phone is pointing and Jonas’ task is to animate the needle taking the shortest path from the current needle direction to the correct direction.Many ifs, moduli, and even an arctan later, he is still not convinced his minimumDistance function is correct; he calls you on the phone.

**Input:**

The first line of input contains an integer n1 (0 ≤ n1 ≤ 359), the current direction of the needle.The second line of input contains an integer n2 (0 ≤ n2 ≤ 359), the correct direction of the needle.

**Output:**

Output the change in direction that would make the needle spin the shortest distance from n1to n2. A positive change indicates spinning the needle clockwise, and a negative change indicates spinning the needle counter-clockwise. If the two input numbers are diametrically opposed, the needle should travel clockwise. I.e., in this case, output 180 rather than −180. 

**Solution:**

This program takes two inputs from the user n1 that is the current direction of the needle, and an integer n2, the correct direction of the needle.
This function returns the change in direction that would make the needle spin the shortest distance from n1 to n2.
A positive change indicates spinning the needle clockwise, and a negative change indicates spinning the needle counter-clockwise.
If the two input numbers are diametrically opposed, the needle travels clockwise.

The distanceToSelect funstion checks that if correct direction of the needle (n2) is greater or equal to current direction of the needle (n1) then it takes the difference of both the variables  and stores into a new variable and if n2 is  not greater or equal to n1 then it adds 360 with that condition.
Similarly, if n1 is greater or equal to n2 then it subtracts both the variables and store into a new variable and if n2 is not greater or equal to n1 then it adds 360 with n1 and  subtracts from n2 and stores into a new variable.
Afterwards a condition is placed on both the stored variables. The one that is smaller is returned representing the minimum distance that the compass is going to move.
