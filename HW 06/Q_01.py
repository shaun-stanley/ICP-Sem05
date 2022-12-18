def remove_even_and_print(numbers):
    # Create a new list containing only the odd numbers from the input list
    odd_numbers = [x for x in numbers if x % 2 == 1]

    # Print the odd numbers
    for number in odd_numbers:
        print(number)


# Test the function
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]
remove_even_and_print(numbers)
