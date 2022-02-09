// https://www.hackerrank.com/challenges/grading
vector<int> gradingStudents(vector<int> grades) {
    vector<int> roundedGrades(grades.size());
    for (int index = 0; index < grades.size(); index++) {
        int nextMult = grades[index] + (5 - (grades[index] % 5));
        if (grades[index] < 38 || (nextMult - grades[index]) >= 3){
            roundedGrades[index] = grades[index];
        }
        else {
            roundedGrades[index] = nextMult;
        }
    }
    return roundedGrades;
}