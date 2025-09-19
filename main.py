# Запись массива данных типа список на Python
tp = [1, 2, 3]
print(tp)  # => [1, 2, 3]

# Создание структуры данных стек на Python
stack = []
stack.append("anna")
stack.append("elena")
stack.append("ivan")

print("Верхний элемент:", stack[-1])  # => ivan
print("Размер стека:", len(stack))     # => 3

stack.pop()
print("Верхний элемент после pop:", stack[-1])  # => elena

while stack:
    print("Удаляем:", stack.pop())
