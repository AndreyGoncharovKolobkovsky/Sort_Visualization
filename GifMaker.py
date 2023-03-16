from PIL import Image
NumFiles = int(input())
frames = []
for frame_number in range(1, NumFiles):
    frame = Image.open(f'{frame_number}.png')
    frames.append(frame)

frames[0].save(
    './Sort_visual2.gif',
    save_all=True,
    append_images=frames[1:],
    optimize=True,
    duration=100,
    loop=0
)