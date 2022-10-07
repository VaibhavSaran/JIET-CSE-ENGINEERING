#data type 1: String
x="Hello world"
print(x,type(x))

#data type 2: int
x=5
print(x,type(x))

#data type 3: float
x=2.5
print(x,type(x))

#data type 4: complex
x = 3 + 2j
print(x,type(x))

#data type 5: list
x = [3.2,32,"Wassup",[2,3,4]]
print(x,type(x))

#data type 6: tuple
x=(2,3,2.5,"Wassup",(2,3,4,5))
print(x,type(x))

#data type 7: range
x=range(7)
print(x,type(x))

#data type 8: dictionary
x = {"Name":["Asta","Yuno"],"Age":(16,16)}
print(x,type(x))

#data type 9: set is mutable
x={1,1,"UWU",20.5}#repeated elements of set are dropped
print(x,type(x))

#data type 10: frozen set
x=frozenset({"hey","wassup"})
print(x,type(x))

#data type 11: bool
x=bool(25)
print(x,type(x))

#data type 12: bytes
x=bytes(5)
print(x,type(x))

#data type 13: byte array
x=bytearray(7)
print(x,type(x))

#data type 14: memory view
x=memoryview(bytes(5))
print(x,type(x))