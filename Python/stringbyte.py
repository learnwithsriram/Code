#Strings and Bytes are not directly interchangeable as Strings 
#are Unicode and Bytes are 8 bit raw values in Python

def main():
        bytevalues = bytes([0x41,0x42,0x43,0x44])
        print(bytevalues)

        someString = "This is a String"
        print(someString)

        # You need to properly encode and decode before these two can work together
        decodedBytes = bytevalues.decode('utf-8')
        print(someString + decodedBytes)

        #Need to encode string so that you can add two bytes
        encodedBytes = someString.encode('utf-8')
        print(decodedBytes,encodedBytes)


if __name__ == "__main__":
        main()