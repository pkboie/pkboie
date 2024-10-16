bank = int(input('How much money do you have? '))
record = []

while True:
    action = input('What do you want to do?(add/view/delete/exit) ').strip().lower()
    sum = 0

    #add
    if action == 'add':
        expense = input('Add some expense or income records with description and amount\n')

        try:
            for i in expense.split(','):
                item, amount = i.rsplit(maxsplit = 1)
                item = item.strip()
                amount = int(amount)
        except ValueError:
            print('*Invalid input* Plz try again!')
            continue

        for i in expense.split(','):
            item, amount = i.rsplit(maxsplit = 1)
            item = item.strip()
            amount = int(amount)
            sum += amount

            if bank + sum < 0: 
                print("Sorry, you can't afford that much. Plz try again!")
                continue
            else:
                bank += amount
                record.append(item)
                record.append(amount)

    #view 格式問題 \t == 8
    if action == 'view':
        print("Here's your wxpense and income records:\n")

        print('Description\t\tAmount')
        print('='*23+' '+'='*6)

        for i in range(0, len(record), 2):
            n = len(record[i]) // 8
            if record[i+1] >= 0:
                print(record[i]+'\t'*(2 - n)+' '*7, f' {record[i+1]}')
            else:
                print(record[i]+'\t'*(2 - n)+' '*7, record[i+1])
                
        print('='*23+' '+'='*6)
        print(f'Now you have {bank} dollars')

    #delete
    if action == 'delete':
        delete_record = input('Whitch record do you wnat to delete? ')
        
        found = False

        for i in range(0, len(record), 2):
            if delete_record == record[i]:
                print(f"'{record[i]}' has been removed")
                bank -= record[i+1]
                del(record[i]) #del 一次只能刪除一個
                del(record[i]) #del完 record[] list長度也會-1
                found = True
                break

        if not found:
            print("I can't find that, Plz try again!")
            continue

    #exit
    if action == 'exit':
        print('GAMEOVER!!!!!!')
        break  