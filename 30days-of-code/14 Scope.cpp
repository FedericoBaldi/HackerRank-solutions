//  https://www.hackerrank.com/challenges/30-scope
Difference(vector<int>arr){
	elements = arr;
	maximumDifference = 0;
}
void computeDifference(){
	for (int i = 0; i < elements.size(); i++) {
		int diff = 0;
		for (int j = i; j < elements.size(); j++) {
			diff = abs(elements[i]-elements[j]);
		if (diff > maximumDifference){
			maximumDifference = diff;
		}
		}
	}
}
