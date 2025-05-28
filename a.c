echo "Enter a no a: "
read a
echo "Enter a no b: "
read b

c='expr $a + $b'
echo"add $c"

d='expr $a - $b'
echo"sub $d"

e='expr $a * $b'
echo "Mul $e"

f='expr $a / $b'
echo "Div $f"

g='expr $a % $b'
echo "Mod $g"


