from models.Task import Task
from datetime import datetime

task_list = []

def add_task():
    task = Task()
    print(f"Tarefa id: {task.id}")
    task.description = input("Descrição: ")

    try:
        task.deadline = datetime.strptime(input("Data de finalização(DD-MM-AA HH:MM): "), "%d-%m-%y %H:%M")
        if task.deadline < datetime.now():
            print("\nData inválida")
            return
        task.remaining_time = task.deadline - datetime.now()
    except ValueError:
        print("Formato inválido. Insira a data no formato: (DD-MM-AA HH:MM)")
        return

    print()
    task_list.append(task)

def get_remaining_time(task):
    return task.remaining_time

def list_tasks(filter):
    if len(task_list) == 0:
        print("\nAinda não existem tarefas registradas")
        return
    sorted_list = sorted(task_list, key=get_remaining_time)
    for i in range(len(sorted_list)):
        print(f"\nTarefa {i}:\n  Id: {sorted_list[i].id}\n  Description: {sorted_list[i].description}\n  Data de finalização: {sorted_list[i].deadline}\n  Tempo restante: {sorted_list[i].remaining_time}\n  Situação: {sorted_list[i].situation}\n")