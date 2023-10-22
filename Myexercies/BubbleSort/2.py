def bublesort(array):
    long = len(array)  

    for i in range(0, long-1):
        for b in range(0, long-1):
            if array[b] > array[b+1]:
                aux = array[b]
                array[b] = array[b+1]
                array[b+1] = aux 

    return array



array = [5,3,1,2,56]
print(bublesort(array))
    


