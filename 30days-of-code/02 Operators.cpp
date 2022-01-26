// https://www.hackerrank.com/challenges/30-operators
void solve(double meal_cost, int tip_percent, int tax_percent) {
    double total;
    total = meal_cost + (meal_cost/100.0*(double)tip_percent) + (meal_cost/100.0*(double)tax_percent);
    cout << (int)round(total);
}