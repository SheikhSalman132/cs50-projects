score = []

for i in range(3):
    s = int(input("score: "))
    score.append(s)

average = sum(score) / len(score)
print(average)
