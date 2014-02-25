//employee.h

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

# include "person.h"

class Employee : public Person {
	public:
		Employee(string name, int id);
		~Employee();
};

#endif // EMPLOYEE_H
