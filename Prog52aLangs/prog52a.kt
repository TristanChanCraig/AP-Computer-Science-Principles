fun main(args: Array<String>) {
    print("Enter Length: ")
    var len = readLine()

    print("Enter Width: ")
    var wid = readLine()

    var area = len * wid
    var perim = len * 2 + wid * 2

    println("The area is " + area)
    println("The perimeter is " + perim)
}