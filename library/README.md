# BOOLEAN
## x == y : equal
```brainfuck
(0)x; y 0
[->-<]>>+<[[-]>-<]>
(0)0 0 bool;
```

## x != y : not equal
```brainfuck
(0)x; y
[->-<]>[[-]+]
(0)0 bool;
```

## x > y : greater than
```brainfuck
(0)x; y 0 0 0 (5)0
[>[->+>+<<]>>[-<<+>>]<[->-<]>>+<[[-]>-<]>[->+<]<<<<->-<]>[-]>>>>
(0)0 0 0 0 0 (5)boolean;
```

## x >= y : greater than or equal to
```brainfuck
(0)x; y 0 0 0 (5)0
+[>[->+>+<<]>>[-<<+>>]<[->-<]>>+<[[-]>-<]>[->+<]<<<<->-<]>[-]>>>>
(0)0 0 0 0 0 (5)boolean;

```

## x < y : less than
```brainfuck
(0)x; y 0 0 0 (5)0
[->>+<<]>[-<+>]>[-<+>]<<
[>[->+>+<<]>>[-<<+>>]<[->-<]>>+<[[-]>-<]>[->+<]<<<<->-<]>[-]>>>>
(0)0 0 0 0 0 (5)boolean;
```

## x <= y : less than or equal to
```brainfuck
```

## x % y == 0 : factor
```brainfuck
```

## !bool : boolean inversion
```brainfuck
(0)bool; 0
>+<[[-]>-<]>
(0)0 !bool;
```


# CALCULATION
## x + y : addition
```brainfuck
```

## x - y : subtraction
```brainfuck
```

## x * y : multiplicaion
```brainfuck
```

## x // y : division
```brainfuck
```

## x % y : modulo
```brainfuck
```

## y = x : copy
```brainfuck
```

## x,y = y,x : swap
```brainfuck
(0)x; y 0
[->>+<<]>[-<+>]>[-<+>]<<
(0)y; x 0
```

## x+0 : zero
```brainfuck
```

## x+A : A
```brainfuck
```

## x+a : a
```brainfuck
```


# INPUT OUTPUT
## input  x where 0<=x<2^8
```brainfuck
```

## output x where 0<=x<2^8
```brainfuck
```
