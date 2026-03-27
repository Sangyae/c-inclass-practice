class Employee:
    def __init__(self, name, employee_id, salary):
        self.name = name
        self.id_number = employee_id
        self.salary = salary

    def calculate_payroll(self):
        return self.salary
    
    def display_info(self):
        print(f"Employee Name: {self.name}", "Employee ID: {self.id_number}", "Salary: ${self.salary:.2f}")
    
class FullTimeEmployee(Employee):
    def __init__(self, name, employee_id, salary, benefits, bonus=0):
        super().__init__(name, employee_id, salary)
        self.benefits = benefits
        self.bonus = bonus

    def calculate_payroll(self):
        return self.salary + self.bonus

def display_info(self):
    return f"Full-Time | Name: {self.name}, ID: {self.employee_id}, Salary: {self.salary},Bonus: {self.bonus}, Benefits: {self.benefits}"

class PartTimeEmployee(Employee):
    def __init__(self, name, employee_id, hourly_rate, hours_worked):
        super().__init__(name, employee_id, hourly_rate)
        self.hours_worked = hours_worked

    def calculate_payroll(self):
        return self.salary * self.hours_worked
    
def display_info(self):
    return f"Part-Time | Name: {self.name}, ID: {self.employee_id}, Hourly Rate: {self.salary}, Hours Worked: {self.hours_worked}, Total Pay: {self.calculate_pay()}"
    
class Intern(Employee):
    def __init__(self, name, employee_id, stipend):
        super().__init__(name, employee_id, stipend)

    def calculate_pay(self):
        return self.salary
    
    def display_info(self):
        return f"Intern | Name: {self.name}, ID: {self.employee_id}, Stipend: {self.salary}"
    
class Payroll:
    def __init__(self):
        self.employees = []
    def add_employee(self, employee):
        self.employees.append(employee)
    def display_all_employees(self):
        for employee in self.employees:
            print(employee.display_info())
    def calculate_total_payroll(self):
        total = 0
        for employee in self.employees:
            total += employee.calculate_pay()
        return total
    
    def sort_by_salary(self):
        # if we want higher salary we can use reverse = True after calculate_pay with ,
        self.employees.sort(key=lambda employee: employee.calculate_pay()) 

    def generate_payslip(self):
        for employee in self.employees:
            print("\n--- PAY SLIP ---")
            print(f"Employee Name : {employee.name}")
            print(f"Employee ID   : {employee.employee_id}")
            print(f"Employee Type : {employee.__class__.__name__}")
            print(f"Total Pay     : {employee.calculate_pay()}")


emp1 = FullTimeEmployee("Alice", "FT101", 4000, "Health Insurance", 500)
emp2 = PartTimeEmployee("Bob", "PT102", 20, 80)
emp3 = Intern("Charlie", "IN103", 1000)

payroll = Payroll()

payroll.add_employee(emp1)
payroll.add_employee(emp2)
payroll.add_employee(emp3)

print("All Employees:")
payroll.display_all_employees()

print("\nTotal Payroll Expense:", payroll.calculate_total_payroll())

payroll.sort_by_salary()

print("\nEmployees Sorted by Salary:")
payroll.display_all_employees()

print("\nGenerating Pay Slips:")
payroll.generate_payslip()