# Bitmasking

## Bitwise Operators:
 * & AND
 * | OR
 * ~ NOT 
 * ^ XOR
 
All of the abaove four are binary operators.
 
 * EXOR of two numbers are same.
 * NOT will flip all the bits.
 * Shift operator: 
    * `Left shift: <<`
       * Example: ` 5<<1 ` In binary represenation it will shift all positions by 1 towards left. 
       * 5 is represented as 000101, after leftshift 1: 001010.
       * Left shift 1 means multiplication by 2.
       * Left shift by n means multiplying it with 2^n.
    * `Right shift: >>`
       * Example: ` 10>>1 ` In binary represenation it will shift all positions by 1 towards right. 
       * 10 is represented as 1010, after righht shift 1: 0101.
       * Right shift 1 means division by 2.
       * Right shift by n means dividing it with 2^n.

<hr/>

## <a href="https://github.com/sanya2508/Bitmasking/blob/master/Unique%20number-I.cpp">Unique number one </a>
*Given a set of numbers where every number occurs twice expect one. Find that unique number.*
  * EXOR all the numbers.

<hr/>

## <a href="https://github.com/sanya2508/Bitmasking/blob/master/Common%20bit%20tasks.cpp"> Common Bit Tasks</a>

### Check if a number is odd or even:
 * AND the  given number with 1.
   * If result is 1: odd.
   * If result is 0: even.
   
### Get the ith bit (from right side):
 * Create a mask(1<<i) with ith bit as 1 and other 0.
 * AND the given number with mask.

### Set the ith bit (from right side):
 * Create a mask(1<<i) with ith bit as 1 and other 0.
 * OR the given number with mask. 

### Clear the ith bit (from right side):
 * Create a mask(0<<i and take NOT of it) with ith bit as 0 and other 1 and ~ it.
 * AND the given number with mask. 

### Update the ith bit (from right side):
 * Clear ith bit.
 * Create a mask(1<<i) with ith bit as 1 and other 0.
 * OR the given number with mask. 

### Clear last bit:
 * Create a mask (Start with all ones (binary of -1) or flip all the bits of 0).
 * Leftshift it by i number of places.
 * AND it(mask) with the given number.

### Clear Range of bits:
 * 
