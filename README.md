# AdventOfCode2020
I'll probably won't do them all.

## Note for Day 11
Handling right/left & top/down could be done in Excel using something like `SUBSTITUTE(CONCAT(...),".",""))`: calculating the index of our seat in this configuration is not hard.

Diagonal is harder: it could be handled using scalar matrix calculation, but we still need to find a way to determine our (numerous) matrixes coordinates. And calculate indexes.

And we would still have to "loop". Doing that in pure Excel feels unatural.
