function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main(): void {
  echo foo(5);
}

This code will produce a StackOverflowError for large values of x due to recursive calls.  Hack's lack of tail-call optimization means that each recursive call adds a new stack frame, eventually leading to a stack overflow. 