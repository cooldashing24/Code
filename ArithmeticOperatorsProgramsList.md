## BMI Calculator

### Instructions

Write a program that calculates the Body Mass Index (BMI) from a user's weight and height.

The BMI is a measure of some's weight taking into account their height. e.g. If a tall person and a short person both weigh the same amount, the short person is usually more overweight.

The BMI is calculated by dividing a person's weight (in kg) by the square of their height (in m):

![](https://cdn.fs.teachablecdn.com/jKHjnLrNQjqzdz3MTMyv)

  
**Warning** you should convert the result to a whole number.

### Example Input

```
weight = 80
```

```
height = 1.75
```

### Example Output

80 ÷ (1.75 x 1.75) = 26.122448979591837

```
26
```

e.g. When you hit **run**, this is what should happen:

![](https://cdn.fs.teachablecdn.com/wmjVjddeSmGj0QVtOUrE)

### Hint

1. Check the data type of the inputs.
2. Try to use the exponent operator in your code.
3. Remember PEMDAS(**P**arentheses, **E**xponent, **M**ultiplication, **D**ivision, **A**ddition & **S**ubraction).
4. Remember to convert your result to a whole number (int).



---


## Your Life in Weeks

### Instructions

I was reading this article by Tim Urban - Your Life in Weeks and realised just how little time we actually have.

[https://waitbutwhy.com/2014/05/life-weeks.html](https://waitbutwhy.com/2014/05/life-weeks.html)

Create a program using maths and f-Strings that tells us how many days, weeks, months we have left if we live until 90 years old. 

It will take your current age as the input and output a message with our time left in this format:

> You have x days, y weeks, and z months left. 

Where x, y and z are replaced with the actual calculated numbers. 
 
**Warning** your output should match the Example Output format exactly, even the positions of the commas and full stops. 

### Example Input

```
56
```

### Example Output

```
You have 12410 days, 1768 weeks, and 408 months left.
```

e.g. When you hit **run**, this is what should happen:  

 
![](https://cdn.fs.teachablecdn.com/RjqBViZQpyVTv7XY6cfA)
 

### Hint

1. There are 365 days in a year, 52 weeks in a year and 12 months in a year.
2. Try copying the example output into your code and replace the relevant parts so that the sentence is formated the same way.


## BMI Calculator 2.0

### Instructions

Write a program that interprets the Body Mass Index (BMI) based on a user's weight and height.

It should tell them the interpretation of their BMI based on the BMI value.

- Under 18.5 they are underweight
- Over 18.5 but below 25 they have a normal weight
- Over 25 but below 30 they are slightly overweight
- Over 30 but below 35 they are obese
- Above 35 they are clinically obese.

![](https://cdn.fs.teachablecdn.com/qTOp8afxSkGfU5YGYf36)

The BMI is calculated by dividing a person's weight (in kg) by the square of their height (in m):

![](https://cdn.fs.teachablecdn.com/jKHjnLrNQjqzdz3MTMyv)

**Warning** you should **round** the result to the nearest whole number. The interpretation message needs to include the words in bold from the interpretations above. e.g. **underweight, normal weight,  overweight, obese, clinically obese**. 

### Example Input

```
weight = 85
```

```
height = 1.75
```

### Example Output

85 ÷ (1.75 x 1.75) =  27.755102040816325

```
Your BMI is 28, you are slightly overweight.
```

e.g. When you hit **run**, this is what should happen:   

![](https://cdn.fs.teachablecdn.com/mGRynIETXuVqoDk8unci)

The testing code will check for print output that is formatted like one of the lines below:

```
"Your BMI is 18, you are underweight."
"Your BMI is 22, you have a normal weight."
"Your BMI is 28, you are slightly overweight."
"Your BMI is 33, you are obese."
"Your BMI is 40, you are clinically obese."
```

Hint

1. Try to use the **exponent** operator in your code.
2. Remember to **round** your result to the nearest whole number. 
3. Make sure you include the words in **bold** from the interpretations. 

### Test Your Code

Before checking the solution, try copy-pasting your code into this repl: 

[https://repl.it/@appbrewery/day-3-2-test-your-code](https://repl.it/@appbrewery/day-3-2-test-your-code)

This repl includes my testing code that will check if your code meets this assignment's objectives. 


### Solution

[https://repl.it/@appbrewery/day-3-2-solution](https://repl.it/@appbrewery/day-3-2-solution)
