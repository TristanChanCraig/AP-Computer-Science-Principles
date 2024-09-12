#[macro_use]
mod cin;
use std::io::{Write};

fn main(){
    print!("Enter Length: ");
    input!(len as i32);
    
    print!("Enter Width: ");
    input!(wid as i32);
    
    let area = len * wid;
    let perim = 2 * len + 2 * wid;

    println!("The area is {}", area);
    print!("The perimeter is {}", perim);
}
 /*
 Enter Length: 143
Enter Width: 82
The area is 11726
The perimeter is 4508
*/