# include <iostream>


// function to reduce syntax for input
inline std::string input(std::string msg){
	std::string inp; // to store the input
	
	// asking user for the input
	std::cout << msg;
	std::cin >> inp;
	
	// returning the input
	return inp;
}

// function to find the lcm of a number
int LCM(int a, int b){
	// variable declaration
	int smaller = std::min(a, b);
	int result = 1;
	
	// looping until the result is recievec
	while(true){
		// looping to check if they have common factor
		for(int i = 2; i <= smaller; i++){
			// if both share the same common factor
			if(a % i == 0 && b % i == 0){
				// multiplying the lcm by current index, dividing a and b by the same
				result *= i;
				a /= i;
				b /= i;
				//  updating the smaller value
				smaller = std::min(a, b);
				continue;	
			}
		}
		break;	
	}
	
	// returning the result multiplied by the least form of the two numbers
	return result * a * b;	
}

// execution starts from here
int main(int argc, char** argv){
	// variable declaration
	int num1, num2;
	
	// taking the numbers input
	num1 = std::stoi(input("Enter the first number: "));
	num2 = std::stoi(input("Enter the second number: "));
	
	// printing the lcm
	std::cout << "\nThe LCM is " << LCM(num1, num2);
}
