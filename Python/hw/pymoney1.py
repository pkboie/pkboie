bank = int(input('How much do you have? '))
record = []
while True:
    expense = input('Add an expense or income record with description and amount\n')

    try:
        food, money = expense.rsplit(maxsplit = 1)
        money = int(money)

    except ValueError:
        print('Are you dumb??? Invalid input')
        continue

    balance = bank - money

    if money > bank:
        print('Sorry, you are poor')
        continue
    else:
        bank = balance
        print('Now you have %d dollars.' % bank)
        w = 'Now you have {} dollars.'
        w.format(bank)

    record.append(food)
    record.append(money)

    gameover = input('Do you want to exit? (yes/no): ')
    if gameover == 'yes':
        break

print('\nThe things you bought:')
print('*'*30)

for i in range(0, len(record), 2):
    print(record[i]+'\t', record[i+1])