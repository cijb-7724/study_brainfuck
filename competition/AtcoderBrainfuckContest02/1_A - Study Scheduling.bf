
input h1
(0)0; 0 0 0
>>,>++++++[-<----->]<--
[>++++[-<---->]<<<[->++++++++++<]
>>[-<+>]<[-<+>]>,>+++++ +[-<----->]<--]<<
(0)x; 0 0 0

>

input m1
(0)0; 0 0 0
>>,>++++++[-<----->]<--
[>++++[-<---->]<<<[->++++++++++<]
>>[-<+>]<[-<+>]>,>+++++ +[-<----->]<--]<<
(0)x; 0 0 0

>

input h2
(0)0; 0 0 0
>>,>++++++[-<----->]<--
[>++++[-<---->]<<<[->++++++++++<]
>>[-<+>]<[-<+>]>,>+++++ +[-<----->]<--]<<
(0)x; 0 0 0

>

input m2
(0)0; 0 0 0
>>,>++++++[-<----->]<--
[>++++[-<---->]<<<[->++++++++++<]
>>[-<+>]<[-<+>]>,>+++++ +[-<----->]<--]<<
(0)x; 0 0 0

>
(0)h1 m1 h2 m2 0;

input k
===== ===== ===== =====

>>>>> >
(10)0

事前に255フラグを(15)に追加
>>>>>-<<<<<

,----- -----
[
    (2)m38
    >+++++ +[-<----- ->]<--
    >
    (2);
    ,----- -----
]
(10)5 5 3 0;
<<<<
千の位を参照

上3桁を1cellにまとめる
[->+++++ +++++<]
>
[->+++++ +++++<]
>

0; (10)5
(10)2; 5
(10)0 55; 3 0
(10)0 0 107; 0

右詰めにする際に，1の位が0にならないように一時的に1の位に1を加算
>+

0 (10)6;
(10)2 6;
(10)0 55 4; 0
(10)0 0 107 1;

0 10 21 35; 0 0 0 0 (x)255
>>+[-<<[[->+<]<]>>[>]>+]<<[[->+<]<]>>[>]<
(x)0  0 0 0 0 10 21 35; (x)0

0 6; (15)0
2 6; (15)0
55 4; (15)0
107 1; (15)0

右詰めが終了したので
1の位から1を減算
-

<[->>+<<]
>>


5 (15)0;
5 (15)2;
3 (15)55;
0 (15)107;

割る数6をセット
>+++++ +<

(0)x; y 0 0 0 0 0
>[->+>+<<]>>[-<<+>>]<<<
[->>->[-]>[-]>[-]<<<[->+>+<<]>>
[-<<+>>]<[[-]>+<]>>+<[[-]>-<]>
[<<<<[->+>+<<]>>[-<<+>>]>>->+<]
<<<<<]>>[-<->]>>>>
[-<<<<<<+>>>>>>]<<<<<<
(0)x//y; x%y 0 0 0 0 0

5 (15)0; 0
5 (15)0; 2
3 (15)9; 1
0 (15)17; 5

(14) = (14) plus 10 times (15)
>
[-<<+++++ +++++>>]

(14)k_m k_h 0;

hour
(4) = (15)
<
[
    -
    <<<<< <<<<< <+
    >>>>> >>>>> >
]

(5) = (14)
<
[
    -
    <<<<< <<<<+
    >>>>> >>>>
]
<<<<< <<<<
===== ===== ===== =====


(0)h1 m1 h2 m2 hk mk;

<<<<<
[->>-<<]
(0)0; m1 h2mh1 m2 hk mk

>>>>
[-<<->>]
(0)0 m1 h2mh1mhk m2 0; mk

<<--
(0)0 m1 h2_m_h1_m_hk_m_2; m2 0 mk

>>+++++ +++++ ++[-<+++++ +++++>]
(0)0 m1 h2_m_h1_m_hk_m_2; 120pm2 0; mk

<<<
[->>-<<]
>>>>
[-<<->>]
(0)0 0 h2_m_h1_m_hk_m_2 120pm2_m_m1_m_mk 0 0;


+++++ +++++[-<+++++ +>]
(0)0 0 h2_m_h1_m_hk_m_2 120pm2_m_m1_m_mk 60 0;

<<
(0)x; y 0 0 0 0 0
>[->+>+<<]>>[-<<+>>]<<<
[->>->[-]>[-]>[-]<<<[->+>+<<]>>
[-<<+>>]<[[-]>+<]>>+<[[-]>-<]>
[<<<<[->+>+<<]>>[-<<+>>]>>->+<]
<<<<<]>>[-<->]>>>>
[-<<<<<<+>>>>>>]<<<<<<
(0)x//y; x%y 0 0 0 0 0

(0)0 0 h2_m_h1_m_hk_m_2 min//60; min%60 0

[-<+>]
(0)0 0 h2_m_h1_m_hk_m_2_p_min//60 0; min%60 0

(0)0 0 h_ans 0; h_min 0
+++++ +
<
[
    -
    >
    [
        -
        >>+>+
        <<<
    ]
    >>>
    [
        -
        <<<+
        >>>
    ]
    <<<<
]
>[-]
(0)0 0 0 0; h_min 6*h_ans

h*60: h*6のあと1bit左シフト
h*6=138 to 1 3 8 (これがむずそう)
h_min//10 h_min%10

>>
(0)0 0 0 0 h_min 6*h_ans;
(0)0 0 0 0 h_min 138;

(0)n; 0 0 0 0 0 0 (7)0
===== ===== ===== ===== 
output n
===== ===== ===== ===== 
>+++++ +++++<
>[->+>+<<]>>[-<<+>>]<<<
[->>->[-]>[-]>[-]<<<[->+>+<<]>>
[-<<+>>]<[[-]>+<]>>+<[[-]>-<]>
[<<<<[->+>+<<]>>[-<<+>>]>>->+<]
<<<<<]>>[-<->]>>>>
[-<<<<<<+>>>>>>]<<<<<<
[->>+<<]>[-<+>]>[-<+>]<<
>>+++++ +++++<
>[->+>+<<]>>[-<<+>>]<<<
[->>->[-]>[-]>[-]<<<[->+>+<<]>>
[-<<+>>]<[[-]>+<]>>+<[[-]>-<]>
[<<<<[->+>+<<]>>[-<<+>>]>>->+<]
<<<<<]>>[-<->]>>>>
[-<<<<<<+>>>>>>]<<<<<<
[->>+<<]>[-<+>]>[-<+>]<<>
(0)c b a; 0 0 0

(0)0 0 0 0 h_min 8 3 1;

[-<<<<< <+>>>>> >]
(0)0 1 0 0 h_min 8 3 0;
<
[-<<<<+>>>>]
(0)0 1 3 0 h_min 8 0; 0
<
[-<<+>>]
(0)0 1 3 8 h_min 0; 0 0
+++++ +++++
<
(0)x; y 0 0 0 0 0
>[->+>+<<]>>[-<<+>>]<<<
[->>->[-]>[-]>[-]<<<[->+>+<<]>>
[-<<+>>]<[[-]>+<]>>+<[[-]>-<]>
[<<<<[->+>+<<]>>[-<<+>>]>>->+<]
<<<<<]>>[-<->]>>>>
[-<<<<<<+>>>>>>]<<<<<<
(0)x//y; x%y 0 0 0 0 0

(0)0 1 3 8 h_min//10; (5)h_min%10 0 0

(15) = (5) and (5) = 0
>
[->>>>> >>>>>+<<<<< <<<<<]

(0)0 1 3 8 h_min//10 (5)0; 0 0 ''' (15)1_curai
<
[-<+>]
+++++ +++++
<
(0)0 1 3 13; 10 (5)0; 0 0 ''' (15)1_curai

(0)x; y 0 0 0 0 0
>[->+>+<<]>>[-<<+>>]<<<
[->>->[-]>[-]>[-]<<<[->+>+<<]>>
[-<<+>>]<[[-]>+<]>>+<[[-]>-<]>
[<<<<[->+>+<<]>>[-<<+>>]>>->+<]
<<<<<]>>[-<->]>>>>
[-<<<<<<+>>>>>>]<<<<<<
(0)x//y; x%y 0 0 0 0 0

(0)0 1 3 1; 3 (5)0; 0 0 ''' (15)1_curai

(14) = (4) and (4) = 0
>
[->>>>> >>>>>+<<<<< <<<<<]
<
[-<+>]
+++++ +++++
<

(0)0 1 4; 10 (4)0 (5)0; 0 0 '''(14)10_curai (15)1_curai

(0)x; y 0 0 0 0 0
>[->+>+<<]>>[-<<+>>]<<<
[->>->[-]>[-]>[-]<<<[->+>+<<]>>
[-<<+>>]<[[-]>+<]>>+<[[-]>-<]>
[<<<<[->+>+<<]>>[-<<+>>]>>->+<]
<<<<<]>>[-<->]>>>>
[-<<<<<<+>>>>>>]<<<<<<
(0)x//y; x%y 0 0 0 0 0

(0)0 1 0; 4 (4)0 (5)0; 0 0 '''(14)10_curai (15)1_curai

(13) = (3) and (3) = 0
>
[->>>>> >>>>>+<<<<< <<<<<]

<
[-<+>]
<
(1)1000_curai;

(12) = (1) and (1) = 0

[->>>>> >>>>> >+<<<<< <<<<< <]
>>>>> >>>>> >

1の位の右側に255フラグ
>>>>-<<<<<

0 0 0; 0 0 5
0 0 0 0 0; 5
++
[
  --
  [-<+<+>>]<<[->>+<<]
  +
  >
  [
    [-]
    <[-]
    >
    <<
  ]
  <
  [
    -
    >>>++<<<
  ]
  >>>
]

0 0 0 0 0; 5
0 0 0 0 0; 5
>
+
[
    -
    +++++ +++++
    +++++ +++++
    +++++ +++++
    +++++ +++++
    +++++ +++
    .
    [-]
    +
    >+
]

if left == 0 then put 0
+
<
[
    -
    >[-]
    <
]
>
[
    -
    put 0
    >+++++ +++[-<+++++ +>]<
    .
    [-]
]


