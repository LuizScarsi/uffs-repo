class Task:
    id = 0
    description = None
    remaining_time = None
    deadline = None
    situation = "ativa"

    # Make sure that every task has unique id
    def __init__(self):
       Task.id += 1 
       self.id = Task.id