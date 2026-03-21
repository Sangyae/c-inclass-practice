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
    
