# Vaibhav Saran 18EJICS169 Ques 13 Part C
def main():
    
    qs={
        "People who work together\n(a)Colleagues\n(b)Sholleagues\n(c)dolleagues\n(d)kolleagues\n":'a',
        'One who goes on foot\n(a)Kedestrian\n(b)Pedestrian\n(c)destrian\n(d)kestrian\n ':'b',
        'One who can speak two languages\n(a)Bilingual\n(b)Silingual\n(c)dilingual\n(d)kolleagues\n':'a',
        'Word with the same meaning\n(a)Antonyms\n(b)Sholleagues\n(c)Synonyms\n(d)kolleagues\n':'c',
        'The person who works for free\n(a)Goldian\n(b)Intern\n(c)dolleagues\n(d)Volunteer\n':'d'
        
    }
    print("*** Quiz ***\n")
    name = input("Please enter your name: ").title()
    print()
    print("\n Well done {0}, you scored {1} out of {2}.".format(name, quiz(qs), len(qs)))
    
def quiz(qs):
    score = 0
    for q,a in qs.items():
        inp = input(q+": ").lower()
        if(inp == "skip"):
            continue
        elif(inp == "quit"):
            return score
        elif inp == a.lower():
            score += 1
            print("Correct.")
        else:
            print("Sorry, correct answer is \"{}\".".format(a))
            continue
    return score
 
if __name__ == "__main__":
    main()