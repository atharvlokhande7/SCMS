def Accept(A, n):
    for i in range(n):
        print(f"\n{i + 1}: ", end="")
        try:
            A[i] = int(input())
        except ValueError:
            print("\nInvalid input2")
            return 0
        if i >= 1 and A[i - 1] > A[i]:
            print("\nNot sorted in ascending order")
            return 0
    return 1

def Bs(A, n, x):
    l = 0
    r = n
    while l <= r:
        mid = (l + r) // 2
        if x == A[mid]:
            return mid
        elif x > A[mid]:
            l = mid + 1
        else:
            r = mid - 1
    return -1

def main():
    A = [0] * 58
    n = 0
    x = 0
    c = False
    print("\nEnter no. of elements: ", end="")
    try:
        n = int(input())
    except ValueError:
        print("\ninvalid input1")
        return
    print("\n**Note: Enter the elements one by one and in ascending order**\n\t", n)
    if n > 0:
        c = Accept(A, n)
        if c:
            print("\nenter no. to be searched: ", end="")
            try:
                x = int(input())
            except ValueError:
                print("\ninvalid input")
                return
            index = Bs(A, n, x)
            if index == -1:
                print(f"\nnot found {index}")
            else:
                print(f"\nelement found at {index + 1}")

if __name__ == "__main__":
    main()
