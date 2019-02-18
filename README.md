# Lab01
For Lab 01:  Process Numbers and Compress Data

QUESTION:
Note that zero has a special use as a fla g here. What if the input file contained a four-byte zero? Is that a
possibility in this data structure, a BMP image file? What adjustment would you suggest?

ANSWER:
In a BMP image file black is represented by a four-byte zero and would be an issue for the flag to also be a four-byte zero. The suggestion is to use a flag that would not represent a color in RGB format.  
