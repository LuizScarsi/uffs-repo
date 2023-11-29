from models.Task import Task
from datetime import datetime

task_list = []
print(len(task_list))

def add_task():
    task = Task()
    task.id = len(task_list)
    task.description = input("Descrição: ")
    task.remaining_time = datetime.strptime(input("Data de finalização(DD-MM-AAAA): "), "%d-%m-%y").strftime("%d-%m-%Y")
    
    task_list.append(task)