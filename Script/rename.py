import os
path = r"D:\English2\Billions.S03.WEBRip.x264-ION10"
old = os.listdir(path)
new = [i[:len(i)-1] for i in old]
n = len(old)
for i in range(n):
    ol= path + '/' + old[i]
    ne = path + '/' + new[i]
    os.rename(ol,ne)

    