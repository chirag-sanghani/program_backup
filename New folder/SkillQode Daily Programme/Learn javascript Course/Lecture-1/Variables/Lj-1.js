// JavaScript Variable

// A JavaScript variable is simply a name of storage location. There are two types of variables in JavaScript : local variable and global variable.

// There are some rules while declaring a JavaScript variable (also known as identifiers).

// 1. Name must start with a letter (a to z or A to Z), underscore( _ ), or dollar( $ ) sign.

// 2. After first letter we can use digits (0 to 9), for example value1.

// 3. JavaScript variables are case sensitive, for example x and X are different variables.

// Examples,

{
    var x=10;
    var foo_fa1=20;
    
    //incorrect declaired
    
    // var 123=50;
    // var *aa=50;
}

// JavaScript provides different data types to hold different types of values. There are two types of data types in JavaScript.

// 1. Primitive data type
// 2. Non-primitive (reference) data type

// JavaScript is a dynamic type language, means you don't need to specify type of the variable because it is dynamically used by JavaScript engine. You need to use var here to specify the data type. It can hold any type of values such as numbers, strings etc.

//For example:

{
    var a=40;   //holding number  
    var b="Rahul";    //holding string  
    var numnum =  2 + 2; // 4
    var stristri = "Hello" + "World" ; // HelloWorld
}

{
    var a=40;
    var b="Rahul";
    console.log(a+b);
}

// string with quotes

{
    let x="wor'ld";
    let y='wor"ld';
    let z="wor\"ld";
    console.log();
}

// types of variables

{
    var myInteger = 12; // 32-bit number (from -2,147,483,648 to 2,147,483,647)
    var myLong = 9310141419482; // 64-bit number (from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)
    var myFloat = 5.5; // 32-bit floating-point number (decimal)
    var myDouble = 9310141419482.22; // 64-bit floating-point number
    var myBoolean = true; // 1-bit true/false (0 or 1)
    var myBoolean2 = false;
    var myNotANumber = NaN;
    var NaN_Example = 0/0; // NaN: Division by Zero is not possible
    var notDefined; // undefined: we didn't define it to anything yet
    window.alert(aRandomVariable); // undefined
    var myNull = null; // null
    // etc...
}




         

         
            