use % for any day division like (i%7), comes in basic math(arithematic)

use strlen to iterate in a string(array of characters); strlen(ch);


1. First, understand how characters work in C
   In C, every character has a numeric value according to its character encoding (ASCII for the English letters we're using here).
   For example:
   Character	ASCII value
   'a'	97
   'b'	98
   'c'	99
   'd'	100
   ...	...
   'z'	122
   So when you write:
   char ch = 'a';
   printf("%d", ch);

The output is:
97

Why? Because %d prints the numeric value of the character.
2. Now, what does ch - 'a' mean?
Suppose you have:
char ch = 'c';
int index = ch - 'a';

Let's substitute the values:

- ch is 'c', whose ASCII value is 99.
- 'a' has ASCII value 97.
  Therefore:
  \[
  \text{index} = 99 - 97 = 2
  \]

So index becomes 2!
Notice that 'c' is the third letter of the alphabet, but its index is 2, because array indexing starts from 0.
Try it yourself: Character to index
d
Selected character

ASCII value
100

Calculation
100 − 97 = 3

Array index
3

The formula works because lowercase English letters have consecutive ASCII values.
3. Why do we need this for a pangram?
Remember this array from your solution?
int letters[26] = {0};

It creates an array with 26 positions, all initialized to zero.
Think of it as 26 boxes, one for each letter of the alphabet.
The letters array
a
1

b
0

c
1

d
0

e
0

f
0

g
0

h
0

i
0

j
0

k
0

l
0

m
0

n
0

o
0

p
0

q
0

r
0

s
0

t
0

u
0

v
0

w
0

x
0

y
0

z
1

Example: if you've encountered a, c and z, their boxes contain 1. All other boxes still contain 0.

Initially:
int letters[26] = {0};

Every position contains 0, meaning we haven't found any letters yet.
Now suppose the current character is 'c'.
char ch = 'c';
int index = ch - 'a';
letters[index] = 1;

Let's trace it:

1. ch = 'c'
2. index = 'c' - 'a' = 2
3. letters[index] = 1 becomes letters[2] = 1
   We've marked the third box, which represents the letter c.
4. Why not use the character directly as the index?
   You might wonder why we can't just write:
   letters[ch] = 1;

Because 'c' has ASCII value 99, and your array only has indices from 0 to 25.
Using letters['c'] would attempt to access letters[99], which is outside the array's bounds and causes undefined behavior.
Instead:
letters[ch - 'a'] = 1;

For lowercase letters, subtracting 'a' converts the character into a valid index from 0 to 25.
5. Can we use the same concept for other characters?
Yes! The same technique is useful whenever characters have consecutive numeric values.
For example, to map digits '0' to '9' into indices 0 to 9:
char ch = '5';
int index = ch - '0';  // index = 5

For uppercase letters:
char ch = 'C';
int index = ch - 'A';  // index = 2

Just make sure the character belongs to the expected range before using the calculated index.

The main idea to remember
ch - 'a' converts a lowercase letter into its zero-based alphabet position.
Character	Calculation	Index
'a'	97 - 97	0
'b'	98 - 97	1
'c'	99 - 97	2
'm'	109 - 97	12
'z'	122 - 97	25
Quick practice: If char ch = 'g';, what will ch - 'a' give you? Try answering before calculating it!
