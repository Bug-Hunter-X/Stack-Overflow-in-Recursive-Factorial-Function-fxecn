# Hack Recursion Bug

This repository demonstrates a common error in recursive functions written in Hack: stack overflow due to the lack of tail-call optimization.  The `foo` function calculates the factorial recursively. For large inputs, this leads to a stack overflow because each recursive call adds a new stack frame.  The solution demonstrates how to avoid this by using iteration.