from models.Task import Task
from datetime import datetime

task_list = []

def add_task():
    task = Task()
    task.id = len(task_list)

    print(f"Tarefa id: {len(task_list)}")
    task.description = input("Descrição: ")
    task.deadline = datetime.strptime(input("Data de finalização(DD-MM-AAAA): "), "%d-%m-%y").strftime("%d-%m-%Y")
    print()
    task_list.append(task)

def list_tasks():
    for i in range(len(task_list)):
        print(f"Tarefa {i}:\n  Id: {task_list[i].id}\n  Description: {task_list[i].description}\n  Data de finalização: {task_list[i].deadline}\n  Situação: {task_list[i].situation}")