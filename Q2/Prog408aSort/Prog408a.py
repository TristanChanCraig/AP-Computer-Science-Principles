# Import time, your sorting library, and your helper calss
from SortingAlgorithms import Student
import SortingLibrary as sl
import time

def main():
    try:
        data = []
        with open("prg408a.dat", 'r') as f:
            lines = f.readlines()
            for line in lines:
                id, score = line.split(" ")
                id = int(id)
                score = int(score)
                data.append(Student(id, score))
        data2 = data[:]
        data3 = data[:]
        data4 = data[:]

        print("Bubble Sort:\n")
        start = time.perf_counter()
        print("hi")
        end = time.perf_counter()
    except Exception as e:
        print("Error", e)

if __name__ == "__main__":
    main()