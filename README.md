# Stress testing with a Python Script

Stress testing helps you to find a counter  test case for your wrong answer solutions. 

- You need to have mingw and python both added to your environment variables

  - [Mingw setup tutorial](https://youtu.be/sXW2VLrQ3Bs) 
  - [Python setup tutorial](https://youtu.be/Kn1HF3oD19c)

``generator.cpp`` Write your own generator based on the problem statement

``fast_solution.cpp`` A solution giving a wrong answer and you don't know why

``bruteforce.cpp`` A slow solution, but giving 100% correct output



## To run the stress testing:

``py stress.py``


## To generate test cases: 

``py test.py``
