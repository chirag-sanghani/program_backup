// JavaScript - if...else Statement

// Flow Chart of if-else

// JavaScript supports the following forms of if..else statement −

{

   // if statement
      
   // if...else statement
   
   // if...else if... statement.

   // switch statement
}

// if statement

/*{
    if (expression) {
        Statement(s) to be executed if expression is true
     }
}*/

{
   //  var age = "19";
         
   //  if( age >= 18 ) {
   //     document.write("<b>Qualifies for driving</b>");
   //  } 
}

// if...else statement

/*{
    if (expression) {
        Statement(s) to be executed if expression is true
     } else {
        Statement(s) to be executed if expression is false
     }
}*/

// {
//     var age = 17;
         
//             if( age >= 18 ){
//                document.write("<b>Qualifies for driving</b>");
//             }
            
//             else{
//                document.write("<b>Does not qualify for driving</b>");
//             }
// }

// if...else if... statement
// The if...else if... statement is an advanced form of if…else that allows JavaScript to make a correct decision out of several conditions.

/*{
    if (expression 1) {
        Statement(s) to be executed if expression 1 is true
     } else if (expression 2) {
        Statement(s) to be executed if expression 2 is true
     } else if (expression 3) {
        Statement(s) to be executed if expression 3 is true
     } else {
        Statement(s) to be executed if no expression is true
     }
}*/

//There is nothing special about this code. It is just a series of if statements, where each if is a part of the else clause of the previous statement. Statement(s) are executed based on the true condition, if none of the conditions is true, then the else block is executed.

{
   //  var book = "economics";
    
   //  if( book == "history" ) {
   //     document.write("<b>History Book</b>");
   //  }
 
   //  else if( book == "maths" ) {
   //     document.write("<b>Maths Book</b>");
   //  }
 
   //  else if( book == "economics" ) {
   //     document.write("<b>Economics Book</b>");
   //  }
 
   //  else {
   //     document.write("<b>Unknown Book</b>");
   //  }
}

/* switch statement */

// if input = 1, "y", "yes" output = Continue....
// if input = 0, "n", "no" output = End...

let input = 1;
{
   // if (input === 1){
   //    document.write("Continues..")
   // } else if (input === "y"){
   //    document.write("Continues..")
   // }
   // else if (input === "yes"){
   //    document.write("Continues..")
   // }
   // else if (input === 0){
   //    document.write("End..")
   // }
   // else if (input === "n"){
   //    document.write("End..")
   // }
   // else if (input === "no"){
   //    document.write("End..")
   // }
   // else{
   //    document.write("Wrong input")
   // }
}

// === comparison

{
   // switch(input){
   //    case 1:
   //       document.write("Continue...");
   //       break;
   //    case "y":
   //       document.write("Continue...");
   //       break;
   //    case "yes":
   //       document.write("Continue...");
   //       break;
   //    case 0:
   //       document.write("End...");
   //       break;
   //    case "n":
   //       document.write("End...");
   //       break;
   //    case "no":
   //       document.write("End...");
   //       break;
   //    default:
   //       document.write("Wrong input");
   // }
}