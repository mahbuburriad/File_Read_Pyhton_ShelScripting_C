import codecs

search = 0
id = 0
name_author_title_books = ''
file = ''
case = ''


filereader = codecs.open('GUTINDEX.ALL', 'r', encoding='utf-8')
first_line = filereader.readline()
print('instruction:\nTo Search By Author or Book type 1\nTo search by id type 2')
search = int(input('Search By? : '))

if search == 1:
    print('You choose to search by Book Title or Author Name')
    print("Instruction\nyou can write with case sensitive or non-case sensitive\nfor case sensitive type(any charater from this list) 'yes', 'y', 'YES', 'Yes'\nfor non-case sensitive type(any charater from this list) 'n', 'no', 'No', 'NO' ")
    name_author_title_books = input('Type the Author Name or Book Title:  ')
    case = input('is The input string is case sensitive?: ')

    print(first_line.rstrip())

    for file in filereader:
        if case == 'y' or case == 'yes' or case == 'Yes' or case == 'YES':
             if name_author_title_books in file:
                 print(file, end='')
        elif case == 'n' or case == 'no' or case == 'No' or case == 'NO':
            if name_author_title_books.lower() in file.lower():
                  print(file, end='')

elif search == 2:
    print('Your choose to search by ID')
    id = int(input('Type ID: '))
    for idno in enumerate(filereader):
        if id in idno:
            print(idno, end='')

