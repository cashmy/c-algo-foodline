# C Algorithm - FoodLines

From: LKP '18 Contest 2 P1 - Food Lines @ DMOJ.CA (competitve online Judge)

## Contextual Problem

After many years of continuous warfare, the country of Collea was left in shambles. This has caused food shortages and famines all across the country. In an attempt to distribute the little food that was produced and prevent food hoarding, the Collean government limited the amount of food that any one person can buy. Soon, Collean citizens are forced to wait in long lines in order to obtain the food they needed. There are currently  such food lines in the city of Lachtin, the th of which has  people in it.  people are going to enter one of the lines in the next hour, where they each enter the shortest line they see. Since Phreia plans to enter the line, she wants to know the length of the line that each person decides to join.

### Tech Stack

Lang: C - MinGW-w64 compiler
IDE:  VS Code

### Note

The test case for repetative input is found in food.txt
In order to redirect stdio with Powershell one of the following two solutions must be used:
    1. Get-Content food.txt | .\foodlines.exe
    2. cmd /c 'foodline < food.txt'

The normal cli "foodline < food.txt" will throw an error message with the current powershell environment (v7.2.6)