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
        maxIndex = 0
        not21 = True
        while not21:
            for i in range(len(data5)):
                if data5[i] > data5[maxIndex]:
                    maxIndex = i
            print("{id} {score}".format(id = data5[maxIndex].getId(), score = data5[maxIndex].getScore()))
            data5[maxIndex].setScore(-1)
            cnt += 1
            not21 = cnt != 21
        end5 = time.perf_counter()
        t5 = end5 - start5
        data5.reverse()
        print("Sorting time: {time:.8f} seconds\n".format(time = t5))

        print("Fastest sort: ")
        list = [t, t2, t3, t4, t5]
        best = min(list)
        if best == t:
            print("Bubble sort")
        elif best == t2:
            print("Selection sort")
        elif best == t3:
            print("Insertion sort")
        elif best == t4:
            print("Built-in sort")
        else:
            print("Suggested sort")
    except Exception as e:
        print("Error", e)

if __name__ == "__main__":
    main()

'''
Bubble Sort:
ID   Score
365 265
306 262
115 257
311 256
123 253
116 246
325 246
321 245
323 245
218 243
113 243
302 242
208 242
112 239
104 239
110 238
223 230
213 229
207 228
203 224
222 223
Sorting time: 0.00009127 seconds

Selection Sort:
ID   Score
365 265
306 262
115 257
311 256
123 253
116 246
325 246
323 245
321 245
113 243
218 243
208 242
302 242
112 239
104 239
110 238
223 230
213 229
207 228
203 224
222 223
Sorting time: 0.00005043 seconds

Insertion Sort:
ID   Score
110 238
218 243
116 246
325 246
207 228
112 239
104 239
123 253
321 245
323 245
311 256
223 230
302 242
115 257
213 229
208 242
113 243
203 224
306 262
222 223
365 265
Sorting time: 0.00009395 seconds

Built-in Sort:
ID   Score
365 265
306 262
115 257
311 256
123 253
116 246
325 246
321 245
323 245
218 243
113 243
302 242
208 242
112 239
104 239
110 238
223 230
213 229
207 228
203 224
222 223
Sorting time: 0.00008361 seconds

Suggested Sort:
ID   Score
365 265
306 262
115 257
311 256
123 253
325 246
116 246
323 245
321 245
113 243
218 243
208 242
302 242
104 239
112 239
110 238
223 230
213 229
207 228
203 224
222 223
Sorting time: 0.00228594 seconds

Fastest sort: 
Selection sort
'''