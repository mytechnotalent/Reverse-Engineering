print('What is my ideal Software Engineering career?\n')

like_designing_apps = input('Do you like designing apps? (\'y\' or \'n\'): ').lower()

if like_designing_apps == 'n':
    print('Research a Reverse Engineering career path.\n')
else:
    like_creating_web_pages = input('Do you like creating web pages? (\'y\' or \'n\'): ').lower()
    if like_creating_web_pages == 'y':
        print('Research a Python Front-End Developer career path.\n')
    else:
        print('Research a Python Back-End Developer career path.\n')