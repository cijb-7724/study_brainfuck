>>

>>
(0)0 0 0 0 0;
おそらくここからAの入力
符号bit 9桁と残りの2bitは何？ 多分，単に全部で12bitということ
>+>>+>>+>>+>>+> >+>>+>>+>>+>>+> >+>>+>
(4)0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 (28)0;
>+
(29)1;
[
  -<
  (28)0; 0
  ,
  ----- -----
  = 10 ='\n'
  if (28) == '\n' break
  [
    ----- -----
    ----- -----
    --
    = 22 means 10 puls 22 = 32 = 'space'
    if (28) == ' ' break
    [
      ----- -----
      -----
      =15 means 32 puls 15 = 47 = '0' minus 1
      この時点(先頭の桁の数 puls 1)が(28)にある
      つまりその桁に数が存在すれば(28)は非零
      
      _2_cycle (24)0 1 xp1 1 yp1; 0 0
      [<<]
      (26)0; 1 xp1
      _2_cycle (24)0; 1 xp1 1 yp1 0 0
      >>
      (26)0 1 xp1;
      _2_cycle (24)0 1 xp1; 1 yp1 0 0
      [
        [-<<+>>]
        >>
      ]
      (26)xp1 1 (28)0 0 0;
      _2_cycle (24)xp1 1 yp1 1 (28)0 0 0;
      <+
      この(29)のインクリメントは入力を継続するフラグ
      <
      (26)xp1 1 0; 1 0
      _2_cycle (24)xp1 1 yp1 1 (28)0; 1 0
    ]
  ]
  >
  (26)xp1 1 0 (29)1; 0
  _2_cycle (24)xp1 1 yp1 1 (28)0; 1; 0
]
A = 123456789のときのこの時点でのメモリ予想
(4)0 1 0 1 0 1 0 1 2 1 3 1 4 1 5 1 6 1 7 1 8 1 9 1 10 (29)0;
正解
(4)0 1 0 1 0 1 2 1 3 1 4 1 5 1 6 1 7 1 8 1 9 1 10 1 0 (29)0; 0

<<
(0)0 0 0 0 0 1 0 1 0 1 2 1 3 1 4 1 5 1 6 1 7 1 8 1 9 1 10 1; 0 (29)0 0

(27)桁右フラグ
[
  (0)0 0 0 0 0 1 0 1 0 1 2 1 3 1 4 1 5 1 6 1 7 1 8 1 9 1 10; 1 0 (29)0 0
  <
  桁に注目
  すべての桁について存在するならデクリメントして本来の数を表すようにする
  [-<<]
  (0)0 0 0 0 0 1 0 1 0; 1 1 1 2 1 3 1 4 1 5 1 6 1 7 1 8 1 9 1 0 (29)0 0
  <
]
(0)0 0 0 0; 0 1 0 1 0 1 1 1 2 1 3 1 4 1 5 1 6 1 7 1 8 1 9 1 0 (29)0 0
最も左の桁右フラグの2個となりまで行って出る
>>
(0)0 0 0 0 0 1; 0 1 0 1 1 1 2 1 3 1 4 1 5 1 6 1 7 1 8 1 9 1 0 (29)0 0
最上位桁の桁右フラグ　数が存在するとは限らない

[-<+>>>]
(0)0 0 0 0 1 0 1 0 1 0 2 0 3 0 4 0 5 0 6 0 7 0 8 0 9 0 10 0 0 (29)0; 0
桁右フラグを桁の数に足していつもの表現になったが桁の間にあったフラグがなくなった
<<<
(0)0 0 0 0 1 0 1 0 1 0 2 0 3 0 4 0 5 0 6 0 7 0 8 0 9 0 (26)10; 0 0 (29)0 0

[
  -
  [-<+>]
  >
  +++++ +++++
  <<
  [->+>-<<]
  <
]
(0)0 0 0; 0 0 10 0 10 0 10 1 9 2 8 3 7 4 6 5 5 6 4 7 4 8 2 (26)9 1 0 (29)0 0
その数自身と10の補数をペアで持っている
>>>
[>>]
補数が0になるまで右へ　つまり数が存在する限り右へ
<<
(0)0 0 0; 0 0 10 0 10 0 10 1 9 2 8 3 7 4 6 5 5 6 4 7 4 8 2 (26)9 1; 0 (29)0 0
最下位桁の10の補数を参照

A
(0)~(3)空き
(4)数(5)補数
(26)数(27)補数 計12桁

>>>>
>>
(33)0;

おそらくここからBの入力
>+>>+>>+>>+>>+> >+>>+>>+>>+>>+> >+>>+>
>+[-<,----------[----------------------[---------------[<<]>>[[-<<+>>]>>]<+<]]>]<<
[<[-<<]<]>>[-<+>>>]<<<[-[-<+>]>++++++++++<<[->+>-<<]<]>>>[>>]<<
(56);

B
(28)~(31)空き
(33)数(34)補数
(55)数(56)補数 計12桁

幅29で見やすい A B が縦に並んでくれる

[
  <
  [
    -
    <<<<< <<<<<
    <<<<< <<<<<
    <<<<< <<<
    {
    [
      [
        -<+>
        [
          [>>]
          >
        ]
      ]
      <
      [->+<]
      <
    ]
    <
    [[<<]<]
    >>>
    [>>]
    <<
    }
    >>>>> >>
    [>>]
    <
  ]
  <
  _lastm2_cycle (29)0 0 0 0 0 10 0 10;
  _lastm1_cycle (29)0 0 0 0 0 10; 0 10
  _last_cycle (29)0 0 0 0; 0 10 0 10
]
結局 A puls equal B をやっていた
(29)0 0 0 (32)0; 0 10 0 10

<<<<<
(26)x 10mx;

[<<]
(0)0 0 0 0; 0 10
>>
(0)0 0 0 0 0 10;

正規化
割り算をしていた

(0)0 0 0 0 0 10; 0 10 0 10 1 9 5 5 6 4 7 3 9 1 0 10 1 9 2 8 2 (27)8 0
[
  [-]
  <[-<+>>+<]
  <[--[--[--[--[--[--[--[--[--[--[[+]>>->++++++++++<<<]]]]]]]]]]]
  >+>[--<<+>>]
  >>
]
(0)0 0 0 0 1 0 1 0 1 0 1 7 1 8 1 3 1 9 1 5 1 0 1 6 1 1 1 (27)0 0 0; 

+<
[ >[-]<[-]
  ++++++++++[->+++++++<]>+++.++++.+++.-.++++..----------.-------.++++++++++.-------.[>]
]
>
[
  -
  <<<
  <+>[<<]>
  >[<+>>[<<-<[<<]<]>]
  >[->>]
  >>>[<+>>>]
  ++++++++++[-<+++++>]<---
  <<->>
  [[+<<]>>[>>]<+<--]
  <<[<<]>>[.>>]
  >+[-<<<[<<]>>[->>]>]
  
]


