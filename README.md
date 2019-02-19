# Lab01
For Lab 01:  Process Numbers and Compress Data

STATEMENT OF HELP:
Assistance from Lane Snively, David Burch, Andrew Fuller, Connor Kasarda


QUESTION:
Note that zero has a special use as a flag here. What if the input file contained a four-byte zero? Is that a
possibility in this data structure, a BMP image file? What adjustment would you suggest?

ANSWER:
In a BMP image file black is represented by a four-byte zero and would be an issue for the flag to also be a four-byte zero. Since on our lab the "00000000" is a hexidecimal there may be an issue. The suggestion is to use a flag that would not represent an RGB format, for instance the word "flag".

