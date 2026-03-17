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

class PartTimeEmployee(Employee):
    def __init__(self, name, employee_id, hourly_rate, hours_worked):
        super().__init__(name, employee_id, hourly_rate)
        self.hours_worked = hours_worked

    def calculate_payroll(self):
        return self.salary * self.hours_worked
    
