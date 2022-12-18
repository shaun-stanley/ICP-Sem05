# Create a function to remove even numbers from a given array
def removeEvenNumbers(numbers):

    # Create a new empty list and append only the odd numbers from the input list
    oddNumbers = []

    # Loop through the numbers in the input list
    for n in numbers:
      # If number 'n' from the input list is odd, append it to the new list
        if n % 2 == 1:
            oddNumbers.append(n)

    # Print the odd numbers
    for number in oddNumbers:
        print(number)


# Create a list with both odd and even numbers
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 14, 15]

# Call the function to remove the even numbers and print the odd ones
removeEvenNumbers(numbers)
