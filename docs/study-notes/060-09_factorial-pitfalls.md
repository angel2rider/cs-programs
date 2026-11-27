# 09_factorial — pitfalls

Source: `09_factorial.cpp`

## What this file is
A pitfalls note for the `09_factorial` example in this repository. The source is a small cpp program used for learning basic programming and web/database concepts.

## Source excerpt
```
#include <iostream>
using namespace std;
int fact(int n)
{
long f=1;
for(int i=1;i<=n;i++)
f=f*i;
return f;
```

## How to study it
- Read the source first and identify the input, processing and output.
- Predict what the program prints or produces before running it.
- For `pitfalls`, focus on how the code expresses this concept and write a one-line summary in your own words.
- Change one value in a copy of the file and rerun to confirm you understand the effect.

## Checkpoint
You understand this example when you can explain what the first six meaningful lines do without looking at the note.
