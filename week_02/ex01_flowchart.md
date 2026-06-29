```mermaid
flowchart TD
Start([Start]) --> Input[/รับคะแนน score/]
Input --> D1{score >= 80?}
D1 -->|Yes| A[เกรด = A]
D1 -->|No| D2{score >= 70?}
D2 -->|Yes| B[เกรด = B]
D2 -->|No| D3{score >= 60?}
D3 -->|Yes| C[เกรด = C]
D3 -->|No| D4{score >= 50?}
D4 -->|Yes| D[เกรด = D]
D4 -->|No| F[เกรด = F]
A & B & C & D & F --> Output[/แสดงเกรด/]
Output --> End([End])
```
```mermaid
flowchart TD
Start([Start]) --> Input[/รับAและB/]
Input --> D1{"a>b?"}
D1 -->|Yes| A[/แสดงa/]
D1 -->|No| B[/แสดงb/]
A & B --> Output
Output --> End([End])
```
```mermaid
flowchart TD
Start([Start]) --> Input[/รับN/]
Input --> D1[i = 1]
D1 --> I1{i <= N?}
I1 -->|Yes| A[/พิมพ์i/]
A --> C[i = i + 1]
C --> I1
I1 -->|No| End([End])
```