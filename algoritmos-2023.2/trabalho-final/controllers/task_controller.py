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

def list_tasks(situation):
    if len(task_list) == 0:
        print("\nAinda não existem tarefas registradas")
        return
    sorted_list = sorted(task_list, key=get_remaining_time)
    if situation:
        filtered_list = list(filter(lambda task: task.situation == situation, sorted_list))
        for i in range(len(filtered_list)):
            print(f"\nTarefa {i}:\n  Id: {filtered_list[i].id}\n  Description: {filtered_list[i].description}\n  Data de finalização: {filtered_list[i].deadline}\n  Tempo restante: {filtered_list[i].remaining_time}\n  Situação: {filtered_list[i].situation}\n")
    else:
        for i in range(len(sorted_list)):
            print(f"\nTarefa {i}:\n  Id: {sorted_list[i].id}\n  Description: {sorted_list[i].description}\n  Data de finalização: {sorted_list[i].deadline}\n  Tempo restante: {sorted_list[i].remaining_time}\n  Situação: {sorted_list[i].situation}\n")
        
def update_task():
    id = int(input("Informe o id da tarefa a ser atualizada: "))
    for i in range(len(task_list)):
        if task_list[i].id == id:
            print("\t1 - Atualizar descrição")
            print("\t2 - Atualizar data de finalização")
            print("\t3 - Concluir tarefa")
            print("\t4 - Deletar tarefa")
            option = int(input())
            
            if option == 1:
                new_description = input("Insira a nova descrição: ")
                task_list[i].description = new_description
            elif option == 2:
                new_deadline =  datetime.strptime(input("Data de finalização(DD-MM-AA HH:MM): "), "%d-%m-%y %H:%M")               
                task_list[i].deadline = new_deadline
            elif option == 3:
                if task_list[i].situation == "concluída":
                    print("Essa tarefa já foi concluída")
                    return
                task_list[i].situation = "concluída"
            elif option == 4:
                task_list.remove(task_list[i])
            else:
                print("Opção inválida")