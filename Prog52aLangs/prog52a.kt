fun main() {
    print("Enter Length: ")
    var len = readLine()!!.toInt()

    print("Enter Width: ")
    var wid = readLine()!!.toInt()

    var area = len * wid
    var perim = len * 2 + wid * 2

    println("The area is $area")
    println("The perimeter is $perim")
}
/*
Enter Length: 143
Enter Width: 82
The area is 11726
The perimeter is 450
*/