inp = int(input())

if inp <= 127 and inp >= -128:
    print("byte")
elif inp <= 32767 and inp >= -32768:
    print("short")
elif inp <= 2147483647 and inp >= -2147483648:
    print("int")
elif inp <= 9223372036854775807 and inp >= -9223372036854775808:
    print("long")
else:
    print("BigInteger")
