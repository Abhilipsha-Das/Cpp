
global_number = 100  


class StudentDetails:   
    def showDetails(self):
        
        local_number = 50

        
        studentName = "Abhilipsha"

        
        student_age = 20

        print("Student Name:", studentName)
        print("Student Age:", student_age)
        print("Local Number:", local_number)
        print("Global Number:", global_number)



student = StudentDetails()
student.showDetails()


# ------------------------random variable
# ------------------------multiline strings
city = 'Delhi'
course = "Python Programming"
message = """Hello,
Welcome to Python
Learning strings."""
print(city, course, message, sep="\n")
# or
print(city,course,message)
# or
print(city)
print(course)
print(message)
# -----------------------slicing ,upper case, lower case, indexing


# -----------------------list concat
list1 = [1, 2, 3]
list2 = [4, 5, 6]

result = list1 + list2
print(result)


# ---------list split
lst = [1, 2, 3, 4, 5, 6]

mid = len(lst) // 2

first_half = lst[:mid]
second_half = lst[mid:]

print(first_half)
print(second_half)




