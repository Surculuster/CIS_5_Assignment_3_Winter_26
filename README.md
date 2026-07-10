Video Explanation:
https://youtu.be/Oikf_pcXJfU

# CIS_5 Assignment – Week 3 (Winter 2026)
A C++ program that analyzes a pre-filled set of 30 student test scores using arrays and loops.

## What the program does
1. Uses a fixed-size array containing 30 pre-filled test scores (0–100).
2. Uses loops to calculate and display several class statistics.
3. Prints the scores in both original and reverse order.
4. Shows a clean summary of the class performance.

## Inputs and types
- No user input required — test scores are hard-coded in the program.
- Scores are stored in a fixed-size `int` array of size 30.

## Required calculations and output
Using loops, compute and display:

- The **average score** (use `double` for the result, formatted to 2 decimal places)
- The **highest score**
- The **lowest score**
- The **number of students who passed** (score ≥ 60)
- The **number of students who earned an A** (score ≥ 90)

Also print:
- All scores in the original order (space-separated on one line)
- All scores in **reverse order** (space-separated on one line)

## Final output example
```
Number of students: 30
Average score:      77.87
Highest score:      100
Lowest score:       45
Students passed:    24  (>= 60)
Students with A:    6   (>= 90)
Scores in original order:
78 92 65 88 45 100 72 81 59 96 84 67 91 53 77 89 62 98 74 85 48 93 70 82 66 95 55 87 79 64
Scores in reverse order:
64 79 87 55 95 66 82 70 93 48 85 74 98 62 89 77 53 91 67 84 96 59 81 72 100 45 88 65 92 78
```

## Implementation notes / tips
- Declare a fixed-size array with 30 pre-filled scores (you can use the same values as the example or create your own realistic scores)
- Use a classic `for` loop with index to calculate sum, min, max, passed count, and A count
- Use a **range-based for** loop to print the scores in original order
- Use a classic `for` loop (counting backwards) to print scores in reverse order
- Use std::setprecision(2)` from `<iomanip>` to format the average nicely
- Make sure the header line and separator match the example exactly
- Add a few comments explaining major sections (data, calculations, output)

## Required includes
```
#include <iostream>
#include <iomanip>   // for std::fixed and std::setprecision
```
