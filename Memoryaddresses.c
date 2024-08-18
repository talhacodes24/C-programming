    #include <stdio.h>
    #include <stdlib.h>

    int main() {
        int age = 30;
        // enter a person age date
        double gpa = 3.4;
        // his study gpa result
        char grade = 'A';
        // ssc grade
        char name[] = "talha";
        //this person name is talha 
        printf("%p\n", &age);
        printf("%p\n", &gpa);
        printf("%p\n", &grade);
        printf("%p\n", &name);
      // mac ar memory address
        return 0;
    }