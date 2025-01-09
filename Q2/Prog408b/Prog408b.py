# Import time, your sorting library, and your helper class
import SearchAlgorithms as sl
import time

def main():
    try:
        data = []
        with open("data/prog408b.dat", 'r') as f:
            data = [int(line) for line in f]
        # Your code here
        num = int(input("Enter the number to search: "))

        s = time.perf_counter()
        index = sl.linear_search(data, num)
        e = time.perf_counter()
        print("Linear Search (Unsorted): Number found at index {i}".format(i = index))
        print("Search time: {time:.8f} seconds".format(time = e-s))

        data.sort()
        s2 = time.perf_counter()
        index = sl.linear_search(data, num)
        e2 = time.perf_counter()
        print("Linear Search (Sorted): Number found at index {i}".format(i = index))
        print("Search time: {time:.8f} seconds".format(time = e2-s2))

        s3 = time.perf_counter()
        index = sl.binary_search(data, num)
        e3 = time.perf_counter()
        print("Binary: Number found at index {i}".format(i = index))
        print("Search time: {time:.8f} seconds".format(time = e3-s3))

    except Exception as e:
        print("Error", e)
    pass


if __name__ == "__main__":
    main()

'''
Enter the number to search: 50
Linear Search (Unsorted): Number found at index 77
Search time: 0.00001990 seconds
Linear Search (Sorted): Number found at index 16
Search time: 0.00000560 seconds
Binary: Number found at index 16
Search time: 0.00000741 seconds

Enter the number to search: 12
Linear Search (Unsorted): Number found at index -1
Search time: 0.00001901 seconds
Linear Search (Sorted): Number found at index -1
Search time: 0.00000689 seconds
Binary: Number found at index -1
Search time: 0.00000710 seconds

Enter the number to search: 31
Linear Search (Unsorted): Number found at index 17
Search time: 0.00001294 seconds
Linear Search (Sorted): Number found at index 5
Search time: 0.00000350 seconds
Binary: Number found at index 5
Search time: 0.00000538 seconds
'''