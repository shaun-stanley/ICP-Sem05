# Create a list of numbers that are not sorted
numbers = [1, 5, 2, 3, 7, 10]

# Create a boolean variable 'isSorted' which we initialize as True
isSorted = True

# Loop through the elements of the list
for i in range(1, len(numbers)):
    # If an element is smaller than its preceeding element, we set isSorted to False
    if numbers[i] < numbers[i - 1]:
        isSorted = False
        break

# Based on the boolean value of 'isSorted' print the results.
if isSorted == True:
    print("The list is sorted in ascending order.")
else:
    print("The list is not sorted in ascending order.")
