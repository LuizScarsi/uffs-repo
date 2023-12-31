from controllers.task_controller import add_task, list_tasks, update_task

while True:
    print("\n*** Sistema de Gerenciamento de Tarefas ***")
    print("Digite a opção desejada:")
    print("\t0 - Sair")
    print("\t1 - Adicionar tarefa")
    print("\t2 - Visualizar tarefas")
    print("\t3 - Editar tarefas")
    
    opcao = int(input())

    if opcao == 0:
        break
    elif opcao == 1:
        add_task()
    elif opcao == 2:
        print("1 - Tarefas ativas: ")
        print("2 - Tarefas concluídas: ")
        print("3 - Todas as tarefas: ")
        filtro = int(input())
        if filtro == 1:
            list_tasks("ativa")
        elif filtro == 2:
            list_tasks("concluída")
        elif filtro == 3:
            list_tasks(None)
        else:
            print("Opção inválida")
    elif opcao == 3:
        update_task()