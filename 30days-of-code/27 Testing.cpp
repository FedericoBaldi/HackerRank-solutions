// https://www.hackerrank.com/challenges/30-testing
class TestDataEmptyArray {
    public:
    static vector<int> get_array(void){
        vector<int> test;
        return test;
    }
};
class TestDataUniqueValues {
    public:
    static vector<int> get_array(void){
        vector<int> test{1,2,3,4,5,6,7,8,9,10};
        return test;
    }
    static int get_expected_result(void){
        return 0;
    }
};

class TestDataExactlyTwoDifferentMinimums {
    public:
    static vector<int> get_array(void){
        vector<int> test{5,5,5,4,4,6,7,8,9,10};
        return test;
    }
    static int get_expected_result(void){
        return 3;
    }
};