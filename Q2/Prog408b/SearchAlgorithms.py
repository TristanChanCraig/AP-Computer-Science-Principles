def linear_search(list, target):
    for i in range(len(list) - 1):
        if list[i] == target:
            return i
    return -1

def binary_search(list, target):
    low = 0
    high = len(list) - 1
    while low <= high:
        mid = low + (high - low) // 2
        if list[mid] == target:
            return mid
        elif list[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
    return -1