class Task:
    id = 0
    description = None
    remaining_time = None
    situation = "ativa"
    
    def __init__(self):
       Task.id += 1 
       self.id = Task.id