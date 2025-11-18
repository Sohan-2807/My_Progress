def word_analysis(sentence):
    words = sentence.lower().split()
    freq = {}

    for w in words:
        freq[w] = freq.get(w, 0) + 1

    freq = dict(sorted(freq.items(), key=lambda x: x[1], reverse=True))

    return len(words), len(freq), freq


text = input("enter sentence")  # Example input
print(word_analysis(text))
