
```mermaid
flowchart TD
 Start([Start]) --> Input[/รับ player_attack, enemy_defense,
enemy_hp/]
 Input --> Calc["damage = max(player_attack - enemy_defense,
1)"]
 Calc --> Reduce["enemy_hp = enemy_hp - damage"]
 Reduce --> D1{enemy_hp <= 0?}
 D1 -->|Yes| Win[/แสดง Victory!/]
 D1 -->|No| Show[/แสดง enemy_hp ที่เหลือ/]
 Win & Show --> End([End])
```


```mermaid
flowchart TD
 Start([Start]) --> Input[/รับ current_xp, xp_needed,level/]
 Input --> A{current_xp >= xp_needed?}
A -->|Yes| B[level = level + 1]
B --> C[xp_needed = xp_needed * 1.5]
C --> D[current_xp = 0]
D --> Output
A -->|No| Output[/แสดงlevelและcurrent_xp/]
Output --> End([End])
```


```mermaid
flowchart TD
 Start([Start]) --> Input[pos = A, dir = forwward]
Input --> A{ระยะถึงplayer < 100?}
A --> |Yes| A1[/chase player/]
A1 --> End([End])
A --> |No| A2[เลื่อนenemy ตาม dir]
A2 --> A3{ถึงจุด B?}
A3 -->|Yes| A4[dir = กลับไปA]
A4 --> A
A3 -->|No| A5{ถึงจุด A?}
A5 -->|Yes| A6[dir = ไปหน้าB]
A6 --> A
A5 -->|No| A
```


<style>#mermaid-1782721554693{font-family:sans-serif;font-size:16px;fill:#333;}@keyframes edge-animation-frame{from{stroke-dashoffset:0;}}@keyframes dash{to{stroke-dashoffset:0;}}#mermaid-1782721554693 .edge-animation-slow{stroke-dasharray:9,5!important;stroke-dashoffset:900;animation:dash 50s linear infinite;stroke-linecap:round;}#mermaid-1782721554693 .edge-animation-fast{stroke-dasharray:9,5!important;stroke-dashoffset:900;animation:dash 20s linear infinite;stroke-linecap:round;}#mermaid-1782721554693 .error-icon{fill:#552222;}#mermaid-1782721554693 .error-text{fill:#552222;stroke:#552222;}#mermaid-1782721554693 .edge-thickness-normal{stroke-width:1px;}#mermaid-1782721554693 .edge-thickness-thick{stroke-width:3.5px;}#mermaid-1782721554693 .edge-pattern-solid{stroke-dasharray:0;}#mermaid-1782721554693 .edge-thickness-invisible{stroke-width:0;fill:none;}#mermaid-1782721554693 .edge-pattern-dashed{stroke-dasharray:3;}#mermaid-1782721554693 .edge-pattern-dotted{stroke-dasharray:2;}#mermaid-1782721554693 .marker{fill:#333333;stroke:#333333;}#mermaid-1782721554693 .marker.cross{stroke:#333333;}#mermaid-1782721554693 svg{font-family:sans-serif;font-size:16px;}#mermaid-1782721554693 p{margin:0;}#mermaid-1782721554693 .node .neo-node{stroke:#9370DB;}#mermaid-1782721554693 [data-look="neo"].node rect,#mermaid-1782721554693 [data-look="neo"].cluster rect,#mermaid-1782721554693 [data-look="neo"].node polygon{stroke:#9370DB;filter:drop-shadow(1px 2px 2px rgba(185, 185, 185, 1));}#mermaid-1782721554693 [data-look="neo"].node path{stroke:#9370DB;stroke-width:1px;}#mermaid-1782721554693 [data-look="neo"].node .outer-path{filter:drop-shadow(1px 2px 2px rgba(185, 185, 185, 1));}#mermaid-1782721554693 [data-look="neo"].node .neo-line path{stroke:#9370DB;filter:none;}#mermaid-1782721554693 [data-look="neo"].node circle{stroke:#9370DB;filter:drop-shadow(1px 2px 2px rgba(185, 185, 185, 1));}#mermaid-1782721554693 [data-look="neo"].node circle .state-start{fill:#000000;}#mermaid-1782721554693 [data-look="neo"].icon-shape .icon{fill:#9370DB;filter:drop-shadow(1px 2px 2px rgba(185, 185, 185, 1));}#mermaid-1782721554693 [data-look="neo"].icon-shape .icon-neo path{stroke:#9370DB;filter:drop-shadow(1px 2px 2px rgba(185, 185, 185, 1));}#mermaid-1782721554693 :root{--mermaid-font-family:sans-serif;}#mermaid-1782721554693 :root{--mermaid-alt-font-family:sans-serif;}</style>
