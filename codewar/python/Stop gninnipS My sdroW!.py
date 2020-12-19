def spin_words(sentence):
    # Your code goes here
    temp = sentence.split(" ")
    for i in range(len(temp)):
        if((len(temp[i])) >= 5):
            temp[i] = temp[i][::-1]
    return " ".join(temp)