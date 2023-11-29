from models.Task import Task

task_list = []
print(len(task_list))

def add_task():
    task = Task()
    task.id = len(task_list)
    task.description = input("Descrição: ")
    task.remaining_time = input("Data de finalização: ")
    
    task_list.append(task)