words = set()

def check(word):
    return word.lower() in words

def load(dictionary):
    try:
        with open(dictionary, "r") as file:
            for line in file:
                word = line.strip()
                words.add(word.lower())
        return True
    except:
        return False

def size():
    return len(words)

def unload():
    words.clear()
    return True
