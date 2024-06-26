============
Instructions
============

1. Please install the programs from the software folder



2. You can experiment with them in this folder.

    - Additional command line utilities: 

        - average: takes in any number of integers on STDIN and outputs their average
        
        - numgen: takes a command line argument N and outputs integers [1..N] one per line
        
        - joke: interactive program displaying jokes of various categories and types
        
        - guess: a simple number guessing game. Use -h for hints, use -m N, where N is an integer to set maximum range



3. Discuss the following questions in a small group in class 
    
    - In the guess game, how many attempts do you need on average if hints are enabled and the max range is 10?  4
    
    - What if hints are not enabled for max range of 10? Demonstrate this empirically.
    
    - With hints enabled, how many attempts do you need if max range is 100? What about 1000?
    
    - If hints are not enabled, what is the average number of attempts we need to guess the correct value for the following max ranges: 
        - 100: 39, 82, 66, 62, 14, 70, 62, 34, 18 = 49.667
        - 1000: 18, 74, 56, 93, 19, 50, 98, 84, 7 = 55.44
        - 2500: 
        - 10000: 
    
    - Provide an empirical demonstration of how you obtained your answers for the last question. 
