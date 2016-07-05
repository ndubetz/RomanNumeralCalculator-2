# RomanNumeralCalculator-2

This kata creates a library that allows the adding and subtraction of roman numerals.
 
The environment for this kata is the following:  

- Ubuntu Linux
- The C programming language
- GNU GCC compiler tool chain
- GNU Make
- Check unit testing framework ( https://libcheck.github.io/check/ )
- git

## Roman Numeral rules:

- Roman numerals consist of the following letters: I, V, X, L, C, D, and M which mean one, five, ten, fifty, hundred, five hundred and one thousand respectively.  

- As we are in Rome there are no such things as decimals or integers, we need to do this with the strings.  An example would be "XIV" + "LX" = "LXXIV"
- Numerals can be concatenated to form a larger numeral ("XX" + "II" = "XXII")

- If a lesser numeral is put before a bigger it means subtraction of the lesser from the
bigger ("IV" means four, "CM" means ninehundred)

- If the numeral is I, X or C you can't have more than three ("II" + "II" = "IV" not “IIII”)

- If the numeral is V, L or D you can't have more than one ("D" + "D" = "M" not “DD”)


## Stories

### User Story: Addition

As a Roman bookkeeper

I want to be able to add two numbers together

So that I can do my work faster with fewer mathematical errors.

### User Story: Subtraction

As a Roman bookkeeper

I want to be able to subtract a number from another

So that I can do my work faster and with fewer mathematical errors.

---

This Kata is based on the Roman Numeral Calculator Kata at http://bit.ly/1VfHqlj

