# datacsv

    OPEN file "data.csv" for reading
    IF file is not open THEN
        PRINT "Error opening file"
        EXIT
    END IF

    WHILE there are more lines in the file DO

        READ the next line from the file
        SPLIT the line into three parts (two numbers and a string)
        
        EXTRACT the first number into variable num1
        EXTRACT the second number into variable num2
        EXTRACT the string into variable text
        
        CALCULATE the total by adding num1 and num2

        FOR i = 1 to total DO
            PRINT text followed by a space
        END FOR
        
        PRINT a newline


