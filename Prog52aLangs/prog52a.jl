println("Enter Length: ")
len = readline()

println("Enter Width: ")
wid = readline()

len = parse(Int, len)
wid = parse(Int, wid)

area = len * wid
perim = 2 * len + 2 * wid

println("The area is $area.")
println("The perimeter is $perim")

#=
Enter Length: 
143
Enter Width: 
82
The area is 11726.
The perimeter is 450
=*