# 10_factorial_and_ncr — pitfalls

Source: `10_factorial_and_ncr.cpp`

## What this file is
A pitfalls note for the `10_factorial_and_ncr` example in this repository. The source is a small cpp program used for learning basic programming and web/database concepts.

## Source excerpt
```
#include <iostream>
using namespace std;
long fact(int N)
{
long f;
for(f=1;N>1;N--)
f=f*N;
return f;
```

## How to study it
- Read the source first and identify the input, processing and output.
- Predict what the program prints or produces before running it.
- For `pitfalls`, focus on how the code expresses this concept and write a one-line summary in your own words.
- Change one value in a copy of the file and rerun to confirm you understand the effect.

## Checkpoint
You understand this example when you can explain what the first six meaningful lines do without looking at the note.
