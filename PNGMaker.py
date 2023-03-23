from PIL import Image, ImageDraw

A = 1600
B = 1600
t = open(r"amount.txt")
for k in range(int(t.readline())):
    Results = []
    for i in range(100):
        Results.append(int(input()))
    new_img = Image.new('RGB', (A, B), 'white')
    pencil = ImageDraw.Draw(new_img)
    for j in range(len(Results)):
        pencil.rectangle((16*j+1, A-int(Results[j])*3+1, 16*j+9, A-1), fill ="purple")
    new_img.save(f'./{k}.png')
