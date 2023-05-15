# include <iostream>
# include <vector>
# include <limits>

// class Employee to store all the details of the employees
class Employee{
	private:
		// name -> stores the name
		// age -> stores the age
		// salary -> stores the salary
		
		std::string name;
		int age, salary;
		
	public:
		// constructor for the Employee class
		// n -> name of employee
		// a -> age of employee
		// s -> salary of employee
		Employee(std::string n, int a, int s);
		
		// returns the name of the employee
		std::string getName();
		// returns the age of the employee
		int getAge();
		// returns the salary of the employee
		int getSalary();
		
		// sets the name for the employee
		// n -> name of the employee
		void setName(std::string n);
		// sets the age of the employee
		// a -> age of the employee
		void setAge(int a);
		// sets the salary of the employee
		// s -> salary of the employee
		void setSalary(int s);
};

// Following functions are the initialised versions of the Employee class functions: 

Employee::Employee(std::string n, int a, int s){
	// sets the name, age and salary of employee
	name = n;
	age = a;
	salary = s;	
}

std::string Employee::getName(){
	// returns the name of employee
	return name;	
}

int Employee::getAge(){
	// returns the age of the employee
	return age;	
}

int Employee::getSalary(){
	// returns the salary of the employee
	return salary;	
}

void Employee::setName(std::string n){
	// sets the name of the employee
	name = n;	
}

void Employee::setAge(int a){
	// sets the age of the employee
	age = a;	
}

void Employee::setSalary(int s){
	// sets the salary of the employee
	salary = s;	
}

// Employee class member functions end here

// fixes std::cin if bad input is provided
void fix_cin(){
	if(std::cin.fail()){
		// clears std::cin and removes all the bad input from it
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	
	}	
}

// declares and iniliases a fresh employee provided from user input
Employee newEmployee(){
	// variables declared here
	std::string n;
	int a, s;
	
	// stores the name, age and salary of the employee from user input
	std::cout << "Enter the name of employee: ";
	std::cin >> n;
	std::cout << "Enter the age of employee: ";
	std::cin >> a;
	fix_cin(); // if a string is entered instead of num, the function got it
	std::cout << "Enter the salary of the employee (in $): ";
	std::cin >> s;
	fix_cin();
	
	// creates a new employee from above details and returns it
	Employee e(n, a, s);
	return e;
}

// calculates the average salary and age of all the employees
// vec -> reference vector storing all the employees
std::pair<int, int> getAverages(std::vector<Employee> &vec){
	std::pair<int, int> ans = std::pair(0, 0);
	
	// looping through the employee vector
	for(auto i = vec.begin(); i != vec.end(); i++){
		// storing the age and salary
		ans.first += i->getAge();
		ans.second += i->getSalary();
	}
	
	// dividing the total age and salary by the total employee count and getting the average
	ans.first /= vec.size();
	ans.second /= vec.size();
	
	// returning the result
	return ans;
}

// execution starts from here
// int argc -> total argument count from run
// char** argv -> all the provided arguments in a string array
int main(int argc, char** argv){
	// variable declaration
	std::vector<Employee> employees;
	int total;
	std::pair<int, int> answer;
	
	// asking for total number of employees from user
	std::cout << "How many employees you want to add?: ";
	std::cin >> total;
	
	// looping for the total amount of employees
	for(int i = 1; i <= total; i++){
		// asking user details for a specific employee
		std::cout << "\nEnter details for employee number " << i << ": \n";
		// storing the employee in the vector
		employees.push_back(newEmployee());
	}
	
	// calculating the answer
	answer = getAverages(employees);
	
	// printing the answer
	std::cout << "\n\nThe average age of all employees is " << answer.first << " years";
	std::cout << "\nThe average salary for all employees is $" << answer.second << "\n";
	
	return 0;
}
