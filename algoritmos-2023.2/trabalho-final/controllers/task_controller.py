from models.Task import Task
from datetime import datetime

task_list = []

def add_task():
    task = Task()
    print(f"Tarefa id: {task.id}")
    task.description = input("Descrição: ")

    try:
        task.deadline = datetime.strptime(input("Data de finalização(DD-MM-AAAA HH:MM): "), "%d-%m-%y %H:%M")
        task.remaining_time = task.deadline - datetime.now()
    except ValueError:
        print("Formato inválido. Insira a data no formato: (DD-MM-AAAA HH:MM)")
        return
    
    print()
    task_list.append(task)

def list_tasks(filter):
    for i in range(len(task_list)):
        print(f"Tarefa {i}:\n  Id: {task_list[i].id}\n  Description: {task_list[i].description}\n  Data de finalização: {task_list[i].deadline}\n  Tempo restante: {task_list[i].remaining_time}\n  Situação: {task_list[i].situation}\n")