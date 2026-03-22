### GCD
함수 GCD(a, b):
    a ← |a|,  b ← |b|

    while b ≠ 0 do
        temp ← b
        b    ← a mod b
        a    ← temp
    end while

    return a

### LCM
함수 LCM(a, b):
    if a = 0 또는 b = 0 then
        return 0
    end if

    return (a / gcd(a, b)) × b

### main 함수
시작
    정수 a, b 입력
    g ← GCD(a, b)
    l ← LCM(a, b)
    출력 "GCD: g, LCM: l"
종료