/* To import:
#[macro_use]
mod cin;
use std::io::{Write};
*/
#[allow(unused_macros)]
macro_rules! input {
    ($out:ident) => {  // input!(string);
        let mut inner = String::new();
        std::io::stdout().flush().expect("Failed to flush stdout");
        std::io::stdin().read_line(&mut inner).expect("A String");
        let $out = inner.trim();
    };
    ($out:ident as $type:ty) => {  // input!(n as i32);
        let mut inner = String::new();
        std::io::stdout().flush().expect("Failed to flush stdout");
        std::io::stdin().read_line(&mut inner).expect("A String");
        let $out = inner.trim().parse::<$type>().expect("Parsable");
    };
}