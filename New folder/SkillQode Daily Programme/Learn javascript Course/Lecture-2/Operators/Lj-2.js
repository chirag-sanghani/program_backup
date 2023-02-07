//JavaScript Operators

// 1. Arithmetic Operators
// 2. Comparison (Relational) Operators
// 3. Logical Operators
// 4. Assignment Operators
// 5. Special Operators


/* Arithmetic Operators

+ (Addition)
- (Subtraction)
* (Multiplication)
/ (Division)
% (Modulus)
++ (Increment)
-- (Decrement)
**(Exponentiation)

*/


/* Arithmetic Operators */

/* Addition */

{
    var a=20;
    var b=40;
    var c=a+b;
    console.log(c);
}

/* substraction */

{
    var a=20;
    var b=20;
    var c=a-b;
    console.log(c);
}

/* multiplication */


{
    var a=20;
    var b=20;
    var c=a*b;
    console.log(c);
}

/* division */

{
    var a=20;
    var b=20;
    var c=b/a;
    console.log(c);
}

/* modulus */

{
    var a=20;
    var b=10;
    var c=a%b;
    console.log(c);
}

/* increment */

{
    var a=51;
    console.log(++a);
}

/* decriment */
{
    var a=50;
    console.log(--a);
}

/* expont. */

{
    var a=3;
    var b=3;
    var c=b**a;
    console.log(c);
    {
        var a=5;
        var b=3;
        document.getElementById("demo1").innerHTML=b**a;
    }
}

/*

= (Simple Assignment )

Ex: C = A + B will assign the value of A + B into C

+= (Add and Assignment)

Ex: C += A is equivalent to C = C + A

−= (Subtract and Assignment)

Ex: C -= A is equivalent to C = C - A

*= (Multiply and Assignment)

Ex: C *= A is equivalent to C = C * A

/= (Divide and Assignment)

Ex: C /= A is equivalent to C = C / A

%= (Modules and Assignment)

Ex: C %= A is equivalent to C = C % A

**= (Exponentiation and assignment)

Ex: C**=A IS equivalent to C=C**A

*/

{
    var a = 3;
    var b = 3;
    // var c = b+=a;  // b=b+a
    // var c = b-=a; // b=b-a
    // var c = b*=a; // b=b*a
    // var c = a%=b // a=a%b
    // var c = a/=b // a=a/b;
    var c = a-=b; // a= a-b;
    var linebreak = "<br />";
    document.getElementById("demo2").innerHTML=(c);
    // document.getElementById("demo3").innerHTML=d;
}

/* Comparison Operators

= = (Equal)
Checks if the value of two operands are equal or not, if yes, then the condition becomes true.
Ex: (A == B) is not true.

=== (identical equel and same type)
The strict equality (===) operator checks whether its two operands are equal, returning a Boolean result. Unlike the equality operator, the strict equality operator always considers operands of different types to be different.

!= (Not Equal)
Checks if the value of two operands are equal or not, if the values are not equal, then the condition becomes true.
Ex: (A != B) is true.

> (Greater than)
Checks if the value of the left operand is greater than the value of the right operand, if yes, then the condition becomes true.
Ex: (A > B) is not true.

< (Less than)
Checks if the value of the left operand is less than the value of the right operand, if yes, then the condition becomes true.
Ex: (A < B) is true.

>= (Greater than or Equal to)
Checks if the value of the left operand is greater than or equal to the value of the right operand, if yes, then the condition becomes true.
Ex: (A >= B) is not true.

<= (Less than or Equal to)
Checks if the value of the left operand is less than or equal to the value of the right operand, if yes, then the condition becomes true.
Ex: (A <= B) is true.

*/

{
    var a = 10;
    var b = 15;
    // var c = a == b;
    // var c = a === b;
    // var c = a >= b;
    // var c = a <= b;
    // var c = a > b;
    // var c = a < b ;
    // var c = a != b ;
    var c = a >= b;

    document.getElementById("demo4").innerHTML=c;
}

/*Logical Operators

&& (Logical AND)
If both the operands are non-zero, then the condition becomes true.
Ex: (A && B) is true.


|| (Logical OR)
If any of the two operands are non-zero, then the condition becomes true.
Ex: (A || B) is true.


! (Logical NOT)
Reverses the logical state of its operand. If a condition is true, then the Logical NOT operator will make it false.
Ex: ! (A && B) is false.

*/

/*

(a && b) => false
(a || b) => true
!(a && b) => true

*/

{
    var a = false;
    var b = true;

    // var c = false;
 
    // document.getElementById("demo5").innerHTML=a&&b;
    // document.getElementById("demo5").innerHTML=a || b;
    // document.getElementById("demo5").innerHTML= ! (a && b);
}




/* Miscellaneous Operator

?
: (Conditional )
If Condition is true? Then value X : Otherwise value Y

*/

/*
((a > b) ? 100 : 200) => 200
((a < b) ? 100 : 200) => 100

*/

/* javascript array method */
{

// const names=['smit','vishal','kiran','john'];
// const names2={person1:'vishal',person2:'kiran',person3:'john'};
// console.log(names2.person3);
// document.write=(names2.person1);

}

{
    // let user;
    // user=vivek;
    // alert(user ?? "Guest User");
}