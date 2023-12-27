def binary_search(arr, contact_name):
    low, high = 0, len(arr) - 1 #assining low and high value
    while low <= high: #checking where the value of high is lower than low
        mid = (low + high) // 2 # assining the value for mid
        mid_name = arr[mid]['name']# getting the mid value
        if mid_name == contact_name: # if the value found return
            return mid  # Element found, return its index
        elif mid_name < contact_name: # if the value is greater than provided value
            low = mid + 1  
        else: # if the value is less than provided value
            high = mid - 1  
    return -1  # Element not found


# Main function


def main():
    phone_book = [{'name': 'Ajay'},{'name': 'Akash'},{'name': 'Madhushree'},{'name': 'Manthan'},{'name': 'Veeresh'}]# Creating of the phone diary with the names
    contact_name=input("enterthe contact name") # getting the name of contact to be found
    if  binary_search(phone_book, contact_name) != -1: # passing the list and the name to be found and getting the value to check wethe the name is present in it no not
        print (f"Contact found! {contact_name} ") # if found print this line
    else:
        print (f"Contact not found for {contact_name}") # if not found print this line


# calling main function
if __name__=="__main__":
    main()


# c1 dynamic scope or static scope - conceptual  - static scope
# c2 parameter passing methods - call by value
# c3 garbage collector - Python's garbage collector deallocates memory when objects are no longer referenced. The garbage value is handled by its own
# c4 interpreter vs compiler - it first compiles the source code into intermediate bytecode, which is then interpreted by the Python Virtual Machine (PVM).
# c5 object-oriented or functional programming paradigm