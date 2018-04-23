# 107transfer
Epitech Project, MATHS 107

Subject:

A laboratory performs tests on new electronic components to be integrated into its last generation chipset. Those
components are entirely characterized by their transfer function, which determines frequency response ; this function
processes the input frequency and computes an output frequency (caracterizing the way the component amplifies
or reduces the input frequency). The transfer functions of these components are represented rational functions.
To execute the tests, the laboratory is used to using a quite complex software. Well, they used to : the software
was so badly benchmarked, they decided to have a new one developped, and guess what, you are in charge of the
optimization of the transfer function computations.

A transfer function is here defined by two strings (one for the numerator, one for the denominator), composed by the
polynomial coeficients split by the ’*’ sign.
For instance, "1*4*2*6*0*8" stands for 8x 5 + 6x 3 + 2x 2 + 4x + 1.
Your program has to print the frequency responses of the component for the values from 0 to 1, by 0.001 steps.

Usage:

./107transfer [num den]*

num   polynomial numerator defined by its coeficients
den   polynomial denominator defined by its coeficients

Example:


![alt text](https://raw.githubusercontent.com/alexandre10044/107transfer/master/example.png)
