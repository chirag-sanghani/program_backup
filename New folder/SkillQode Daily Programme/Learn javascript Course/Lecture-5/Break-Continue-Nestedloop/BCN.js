// Break , Continue and Nested Loop

// {
//   for(let counter = 1; counter <= 10 ; counter++){
//     if(counter == 5){
//       break;
//     }
//     document.write(counter);
//     document.write("<br>");
//   }
// }

// {
//   for(let counter = 1; counter <= 10 ; counter++){
//     if(counter == 5){
//       continue;
//     }
//     document.write(counter);
//     document.write("<br>");
//   }
// }

{
  outer: for(let counter = 1; counter <= 10 ; counter++){

    document.write(counter);
    document.write("<br>");

    for(let counter2 = 1; counter2 < 3; counter2++){

      if(counter == 3){
        break outer;
      }
      document.write("Hello");
      document.write("<br>");
    }
  }
}