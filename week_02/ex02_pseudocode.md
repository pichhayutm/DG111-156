BEGIN [ตรวจเกรด]
 INPUT รับคะแนน score
 IF score >= 80 THEN
 เกรด = "A"
 ELIF score >= 70 THEN
 เกรด = "B"
 ELIF score >= 60 THEN
 เกรด = "C"
 ELIF score >= 50 THEN
 เกรด = "D"
 ELSE
 เกรด = "F"
 OUTPUT เกรด
END

BEGIN [รับAและB]
INPUT A,B
IF a>b? THEN
แสดงa
ELSE
แสดงb
END

BEGIN [นับจาก1ถึงN]
INPUT N
i = 1
WHILE i <= N DO
    OUTPUT i
    i = i + 1
END WHILE
END