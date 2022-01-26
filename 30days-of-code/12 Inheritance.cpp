// https://www.hackerrank.com/challenges/30-inheritance
class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        Student(string fname, string lname, int id, vector<int> scores):Person(fname,                       lname, id){
            testScores = scores;
        }
        char calculate(void){
            char grade;
            int avg = 0;
            for (int i = 0; i < testScores.size(); i++) {
                avg +=testScores[i];
            }
            avg /= testScores.size();
            if (avg >= 90){
                grade = 'O';
            }
            else if (avg >= 80){
                grade = 'E';
            }
            else if (avg >= 70){
                grade = 'A';
            }
            else if (avg >= 55){
                grade = 'P';
            }
            else if (avg >= 40){
                grade = 'D';
            }
            else{
                grade = 'T';
            }
            return grade;
        }
};
