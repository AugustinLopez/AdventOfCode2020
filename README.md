# AdventOfCode2020
I'll probably won't do them all.

## Note for Day 11
Handling right/left & top/down could be done in Excel using something like `SUBSTITUTE(CONCAT(...),".",""))`: calculating the index of our seat in this configuration is not hard.

Diagonal is harder: it could be handled using scalar matrix calculation, but we still need to find a way to determine our (numerous) matrixes coordinates. And calculate indexes. This is definitely possible, but not doing everything by hand is hard (I did it for Day7 because I was happy to find a new functionnality).

And we would still have to "loop". Doing that in pure Excel feels unatural.

## Note for Day 13
In Excel, the last step is going over Excel's numerical limits. Still, it is possible to determine the result because a pattern exists. As for the number to be found, this number only shows the 15 first significant digits. I converted it to its IEEE-754 hexadecimal representation (See my [StackOverflow Post on the subject](https://stackoverflow.com/questions/63219066/convert-number-from-excel-cell-to-ieee-754-hex-format/63219067#63219067). Once we have the hexadecimal we can use an online converter to get the decimal equivalent.

As such it was possible to find the answer with only pure Excel. 
