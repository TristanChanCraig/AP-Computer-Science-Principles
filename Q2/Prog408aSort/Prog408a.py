# Import time, your sorting library, and your helper calss
from SortingAlgorithms import Student
import SortingLibrary as sl

def main():
    try:
        data = []
        with open("data/prg408a.dat", 'r') as f:
            lines = f.readlines()
            for line in lines:
                id, score = line.split(" ")
                id = int(id)
                score = int(score)
                # Make helper class objects and add to data
                data.append(Student(id, score))
        # Your code here
        ...
    except Exception as e:
        print("Error", e)
    pass


if __name__ == "__main__":
    main()