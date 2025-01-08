# Import time, your sorting library, and your helper calss
from SortingAlgorithms import Student
import SortingLibrary as sl
import time

def main():
    try:
        data = []
        with open("/workspaces/AP-Computer-Science-Principles/data/prg408a.dat", 'r') as f:
            lines = f.readlines()
            for line in lines:
                id, score = line.split(" ")
                id = int(id)
                score = int(score)
                data.append(Student(id, score))
        data2 = data[:]
        data3 = data[:]
        data4 = data[:]
        data5 = data[:]

        print("Bubble Sort:")
        start = time.perf_counter()
        sl.bubbleSort(data)
        end = time.perf_counter()
        t = end - start
        data.reverse()
        print("ID   Score")
        for s in data:
            print("{id} {score}".format(id = s.getId(), score = s.getScore()))
        print("Sorting time: {time:.8f} seconds\n".format(time = t))

        print("Selection Sort:")
        start2 = time.perf_counter()
        sl.selectionSort(data2)
        end2 = time.perf_counter()
        t2 = end2 - start2
        data2.reverse()
        print("ID   Score")
        for s in data2:
            print("{id} {score}".format(id = s.getId(), score = s.getScore()))
        print("Sorting time: {time:.8f} seconds\n".format(time = t2))

        print("Insertion Sort:")
        start3 = time.perf_counter()
        sl.bubbleSort(data)
        end3 = time.perf_counter()
        t3 = end3 - start3
        data3.reverse()
        print("ID   Score")
        for s in data3:
            print("{id} {score}".format(id = s.getId(), score = s.getScore()))
        print("Sorting time: {time:.8f} seconds\n".format(time = t3))

        print("Built-in Sort:")
        start4 = time.perf_counter()
        sl.bubbleSort(data4)
        end4 = time.perf_counter()
        t4 = end4 - start4
        data4.reverse()
        print("ID   Score")
        for s in data4:
            print("{id} {score}".format(id = s.getId(), score = s.getScore()))
        print("Sorting time: {time:.8f} seconds\n".format(time = t4))

        print("Suggested Sort:")
        print("ID   Score")
        start5 = time.perf_counter()
        cnt = 0;
        max = data5[0]
        while cnt < 21:
            for i in range(1, len(data5)):
                if data5[i] > max:
                    max = data5[i]
                    cnt = cnt + 1
                    print("{id} {score}".format(id = data5[i].getId(), score = data5[i].getScore()))
                    data5[i] *= -1
        end5 = time.perf_counter()
        t5 = end5 - start5
        data5.reverse()
        print("Sorting time: {time:.8f} seconds\n".format(time = t5))
    except Exception as e:
        print("Error", e)

if __name__ == "__main__":
    main()