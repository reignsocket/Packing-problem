Problem Description  
The shape of a factory-made product is a rectangular parallelepiped. They are all h in height, equal in length and width, and there are six in total.
Models, their length and width are 1*1, 2*2, 3*3, 4*4, 5*5, 6*6. These products are usually packaged in a 6*6*h cuboid package and mailed to customers. . Because the postage is expensive, the factory has to find ways to reduce the number of packages per order. They need a good program to help them solve this problem and save money. Now this program is designed by you.

Input data  
The input file consists of several lines, each line representing an order. The line in each order consists of six integers separated by spaces, which are the number of six products from 1*1 to 6*6. The input file will end with a line of 6 zeros.

Output requirements  
In addition to the last 6 digits entered, each line in the input file corresponds to a line of the output file, and each line outputs an integer representing the minimum number of packages required for the corresponding order.

Input sample  
0 0 4 0 0 1  
7 5 1 0 0 0  
0 0 0 0 0 0  

Output sample  
2  
1  

Problem solving  
This problem is described relatively clearly. We will only explain the input and output examples here: there are two sets of valid inputs. The first group represents four 3*3 products and one 6*6 product. At this time, four 3* 3 products occupy one box, another 6*6 product occupies 1 box, so the number of boxes is 2; the second group indicates 7 1*1 products, 5 2*2 products and 1 3* For the 3 products, we can put them all in one box, so the output is 1. The details of the six models of the product occupying the box are as follows: 6*6 products each occupy a complete box and there is no free space; 5*5 products each occupy a new box and leave 11 It can hold the free space of 1*1 products; 4*4 products each occupy a new box, and leave 5 spare spaces for 2*2 products; 3*3 products are more complicated First, the 3*3 product cannot be placed in a box with 5*5 or 4*4, so a new box must be opened for the 3*3 product. The number of newly opened boxes is equal to 3*3. Divide the number by 4 to round up; at the same time, we need to discuss how many 2*2 and 1*1 products can be placed in the remaining space for a 3*3 product (if there is room for 2*2) For the product, we will count it into the 2*2 free space, and wait until the 2*2 products are all loaded. If there is still 2*2 space remaining, then convert them into 1*1 free space). We can discuss the remaining vacancies in the new box opened for the 3*3 product. There are four cases: the first one, the number of 3*3 products is exactly a multiple of 4, so there is no free space; Species, the number of 3*3 products is a multiple of 4 plus 1, when there are 5 2*2 vacancies and 7 1*1 vacancies; the third, 3*3 product number is a multiple of 4 plus 2. At this time, there are 3 2*2 vacancies and 6 1*1 vacancies. In the fourth, the number of 3*3 products is a multiple of 4 plus 3.
There are 1 2*2 vacancies and 5 1*1 vacancies left. After processing 3*3 products, you can compare the remaining 2*2 vacancies and the number of 2*2 products. If the number of products is large, Fill all 2*2 vacancies, open new boxes for 2*2 products, and calculate 1*1 vacancies in new boxes. If there are more vacancies, fill 2*2 products into 2* 2 vacancies, then convert the remaining 2*2 vacancies into 1*1 vacancies; finally process 1*1 products, compare 1*1 vacancies with 1*1 product numbers, if there are more vacancies, 1 *1 products are all filled in, otherwise, fill the 1*1 space first, and then open a new box for the 1*1 product.
  
Common problems in implementation  
Question 1: The calculation logic is not clear, causing calculation errors;  
Question 2: Instead of inputting a set of output sets, try to save all the inputs, and then output them together after calculation.  
But the question does not give you exactly how many sets of input data, all of which may be wrong because the array is too small;  
Question 3: The input statement is used incorrectly, causing an infinite loop, which is manifested as an output limit exceeded error.  
