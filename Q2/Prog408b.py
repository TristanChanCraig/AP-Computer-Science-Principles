# Import time, your sorting library, and your helper calss

def main():
    try:
        data = []
        with open("data/prog408b.dat", 'r') as f:
            data = [int(line) for line in f]
        # Your code here
        ...
    except Exception as e:
        print("Error", e)
    pass


if __name__ == "__main__":
    main()