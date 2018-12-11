def primeGen(num):
    #iterates all i's between 2 and x where x is the number entered by user
    for i in range(2,num):
        #sets value back to true to test the next number
        prime = True
        #iterate the dividend k to mod the current i with all j from 2 to i-1
        for j in range(2,i-1):
            #actual test for prime using the mod operator
            if(i%j)==0:
                prime = False
                #breaks if the number is not prime to conserve time
                break
        if prime:
            print(i," is a prime number.")


def main():
    num = 10000
    primeGen(num)
    input()
    
main()
