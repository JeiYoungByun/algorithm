H = int(input())

monsterDamageSum = 0
output = 0

paizaDamage = [0]
monsterDamage = [0]

def damage(n):
    global monsterDamageSum, output
    if n==1:
        paizaDamage.append(1)
        monsterDamage.append(1)
        monsterDamageSum += monsterDamage[n]
        output+=1
        damage(n+1)
    elif n==2:
        paizaDamage.append(1)
        monsterDamage.append(1)
        monsterDamageSum += monsterDamage[n]
        output+=1
        damage(n+1)
    elif n>=3:
        paizaDamage.append(monsterDamage[n-1] + monsterDamage[n-2])
        monsterDamage.append(paizaDamage[n-1]*2 + paizaDamage[n-2])
        monsterDamageSum += monsterDamage[n]
        output+=1
        if monsterDamageSum>=H:
            return
        else:
            damage(n+1)

damage(1)

print(output)