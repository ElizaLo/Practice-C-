# C++

## Compiler

- **Clang** (in Xcode)
   - [Clang 10 documentation](https://clang.llvm.org/docs/ClangCommandLineReference.html)

# **Different projects on C++ :**

- ## **Processes. Parallelism**

   - **_Взаємодія процесів. Паралелізм. Управління стандартним вводом-виводом._** Обчислити f(x) || g(x), використовуючи 2 допоміжні процеси: один обчислює f(x), а інший – g(x). Основна програма виконує ввод-вивід та операцію ||. Не використовувати обмін повідомленнями між процесами та порти. Процеси f та g читають дані з stdin, а результати пишуть в stdout, але не безпосередньо – вводом і виводом керує основна програма, вона посилає на вхід f і g дані та отримує від них результати. Забороняється використовувати допоміжні файли для обміну інформацією між процесами.
   - [Code](https://github.com/ElizaLo/Practice-C-/blob/master/Processes.%20Parallelism/main.cpp)
   - [Labs](http://ttp.infosoft.ua/sp/lr3new.htm)

- ## **Text Analyzer**

   - For example we have a text file that has no restrictions on its size. We also do not impose restrictions on the length of the line in this file. The text is composed of words, for example, the identifiers of the English language. The words are interspersed with spaces, brackets, codes of operations, in general characters that naturally separate words from one another. We will also not deal with the spelling of such words. Let the length of the word we set the limit - 30 letters. In the result field you need to display the words without repetitions that satisfy a certain condition.
      - Find only those words, which consists of non-repeating letters.
   - [Code](https://github.com/ElizaLo/Practice-C-/blob/master/Text%20Analyzer/main.cpp)
   - [Labs](http://ttp.infosoft.ua/sp/lr1.htm)

## Problems

**Problem:**
`-bash: ./configure: /bin/sh^M: bad interpreter: No such file or directory`
- **Solution:**
`sed -i '' $'s/\r//' configure`
