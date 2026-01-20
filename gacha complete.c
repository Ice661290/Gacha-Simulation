#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> // จำเป็นสำหรับการสุ่ม (srand)

// --- 4. การนำโครงสร้างของ Struct มาประยุกต์ใช้งาน ---
struct Item {
    char name[20];
    int id;
    int amt; // จำนวนที่มีในกระเป๋า
};

struct Player {
    char name[20];
    struct Item inventory[22]; // ผู้เล่นแต่ละคนมีกระเป๋าเก็บของตัวเอง
};

// --- 3. & 5. Array และ Array of Struct ---
struct Item dbItems[22]; // Database ของไอเทมทั้งหมด
struct Player players[2]; // เก็บผู้เล่น 2 คน (Array of Struct)

// --- Function Prototypes ---
void initGameData();
void showMainMenu();
void inputPlayerData();
void playerMenu(int playerIndex); // ยุบ showinA, showinB เป็นอันเดียว
void showInventory(int playerIndex); // ยุบ itA, itB เป็นอันเดียว
void gachaSystem(int playerIndex, int bannerType); // ยุบ gachaA, B, C, D...

// --- 1. Basic C Commands & Main ---
int main() {
    // ใช้ time เป็น seed ในการสุ่ม เพื่อให้เลขไม่ล็อคค่าเดิม
    srand(time(NULL)); 
    
    // เตรียมข้อมูลไอเทม
    initGameData(); 

    int choice;
    do {
        showMainMenu();
        printf("Select Option: ");
        if (scanf("%d", &choice) != 1) { // ดักจับ Error หากใส่ตัวอักษร
            while(getchar() != '\n'); // เคลียร์ buffer
            choice = 0;
        }

        // --- 2. Control Structure (Switch Case) ---
        switch (choice) {
            case 1: 
                inputPlayerData(); 
                break;
            case 2: 
                // เมนูเลือกผู้เล่น
                printf("\n--- Select Player ---\n");
                printf("1. %s\n", players[0].name);
                printf("2. %s\n", players[1].name);
                printf("3. Back\n");
                printf("Select: ");
                int pSelect;
                scanf("%d", &pSelect);
                if (pSelect == 1) playerMenu(0);      // ส่ง index 0
                else if (pSelect == 2) playerMenu(1); // ส่ง index 1
                break;
            case 3: 
                printf("\nExiting Game... Goodbye!\n"); 
                break;
            default: 
                printf("\nInvalid Selection!\n");
        }
    } while (choice != 3);

    return 0;
}

// --- 6. Pre-defined Function (strcpy) ---
void initGameData() {
    // กำหนดชื่อไอเทมลง Database (dbItems)
    strcpy(dbItems[0].name, "Otto (Legendary)");     dbItems[0].id = 1000;
    strcpy(dbItems[1].name, "Mary (Legendary)");     dbItems[1].id = 2000;
    strcpy(dbItems[2].name, "Kira (Epic)"); dbItems[2].id = 2100;
    strcpy(dbItems[3].name, "Anna (Epic)"); dbItems[3].id = 2200;
    strcpy(dbItems[4].name, "Rose (Epic)"); dbItems[4].id = 2300;
    strcpy(dbItems[5].name, "Nolle (Epic)"); dbItems[5].id = 2400;
    strcpy(dbItems[6].name, "Iris (Rare)"); dbItems[6].id = 2500;
    strcpy(dbItems[7].name, "Sharon (Rare)"); dbItems[7].id = 2600;
    strcpy(dbItems[8].name, "Jane (Rare)"); dbItems[8].id = 2700;
    strcpy(dbItems[9].name, "jade (Rare)"); dbItems[9].id = 2800;
    strcpy(dbItems[10].name, "Cara (Rare)"); dbItems[10].id = 2900;
    strcpy(dbItems[11].name, "Lily (Rare)"); dbItems[11].id = 3000;
    strcpy(dbItems[12].name, "Liona (Rare)"); dbItems[12].id = 3100;
    strcpy(dbItems[13].name, "Helena (Rare)"); dbItems[13].id = 3200;
    strcpy(dbItems[14].name, "Vivian (Common)"); dbItems[14].id = 3300;
    strcpy(dbItems[15].name, "Lena (Common)"); dbItems[15].id = 3400;
    strcpy(dbItems[16].name, "Eve (Common)"); dbItems[16].id = 3500;
    strcpy(dbItems[17].name, "Ronda (Common)"); dbItems[17].id = 3600;
    strcpy(dbItems[18].name, "Kate (Common)"); dbItems[18].id = 3700;
    strcpy(dbItems[19].name, "Julia (Common)"); dbItems[19].id = 3800;
    strcpy(dbItems[20].name, "Ruby (Common)"); dbItems[20].id = 3900;
    strcpy(dbItems[21].name, "Lucy (Common)"); dbItems[21].id = 4000;

    // ตั้งค่าเริ่มต้นให้ผู้เล่น (ชื่อว่าง, จำนวนของเป็น 0)
    for(int p=0; p<2; p++) {
        strcpy(players[p].name, "Unknown");
        for(int i=0; i<22; i++) {
            // ก๊อปปี้ข้อมูลไอเทมเข้ากระเป๋าผู้เล่น แต่เซ็ตจำนวนเป็น 0
            players[p].inventory[i] = dbItems[i];
            players[p].inventory[i].amt = 0;
        }
    }
}

// --- 7. User Defined Function ---
void showMainMenu() {
    printf("\n====================================================================================================");
    printf("\n");
    printf("\n / ____|          | |            / ____(_)               | |     | | (_)            ");
    printf("\n| |  __  __ _  ___| |__   __ _  | (___  _ _ __ ___  _   _| | __ _| |_ _  ___  _ __  ");
    printf("\n| | |_ |/ _` |/ __| '_ / / _` |  /___ /| | '_ ` _ /| | | | |/ _` | __| |/ _ /| '_ / ");
    printf("\n| |__| | (_| | (__| | | | (_| |  ____) | | | | | | | |_| | | (_| | |_| | (_) | | | |");
    printf("\n /_____|/__,_|/___|_| |_|/__,_| |_____/|_|_| |_| |_|/__,_|_|/__,_|/__|_|/___/|_| |_|");
    printf("\n");
    printf("\n====================================================================================================");
    printf("\n1. Register / Input Data");
    printf("\n2. Login (Select ID)");
    printf("\n3. Exit");
    printf("\n=========================\n");
}

void inputPlayerData() {
    printf("\n--- Register Players ---");
    for (int i = 0; i < 2; i++) {
        printf("\nEnter Name for Player %d: ", i + 1);
        scanf("%s", players[i].name);
    }
    printf("Registration Complete!\n");
}

// ฟังก์ชันนี้รับ Parameter เป็น index ของผู้เล่น ทำให้ไม่ต้องเขียนแยก A/B
void playerMenu(int pIdx) {
    int choice;
    do {
        printf("\n-------------------------");
        printf("\n Welcome, %s", players[pIdx].name);
        printf("\n-------------------------");
        printf("\n1. Show Inventory");
        printf("\n2. Normal Gacha (All Pool)");
        printf("\n3. Rate Up A (High Chance for Otto)");
        printf("\n4. Rate Up B (High Chance for Mary)");
        printf("\n5. Logout");
        printf("\nSelect: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: showInventory(pIdx); break;
            case 2: gachaSystem(pIdx, 0); break; // 0 = Normal
            case 3: gachaSystem(pIdx, 1); break; // 1 = Rate Up A
            case 4: gachaSystem(pIdx, 2); break; // 2 = Rate Up B
            case 5: printf("\nLogging out...\n"); break;
            default: printf("\nInvalid Choice!");
        }
    } while (choice != 5);
}

void showInventory(int pIdx) {
    printf("\n--- %s's Inventory ---", players[pIdx].name);
    int count = 0;
    // แสดงเฉพาะไอเทมที่มีจำนวนมากกว่า 0 เพื่อให้ดูง่าย
    for(int i = 0; i < 22; i++) {
        if(players[pIdx].inventory[i].amt > 0) {
            printf("\n%s : %d", players[pIdx].inventory[i].name, players[pIdx].inventory[i].amt);
            count++;
        }
    }
    if(count == 0) printf("\n(Empty Bag)");
    printf("\n----------------------\n");
}

// ฟังก์ชันกาชาแบบรวมศูนย์ (Unified Gacha Logic)
void gachaSystem(int pIdx, int bannerType) {
    printf("\n...Gacha Rolling...\n");
    
    // สุ่ม 5 ครั้ง
    for(int k=0; k<5; k++) {
        int n = rand() % 100; // สุ่มเลข 0-99 (คิดเป็นเปอร์เซ็นต์ง่ายกว่า)
        int itemIndex = 21; // Default เป็นตัวเกลือสุด (Lucy)

        if (bannerType == 0) { // Normal Pool
            if(n < 2) itemIndex = 0;      // 2% ได้ Ex.Otto
            else if(n < 4) itemIndex = 1; // 2% ได้ Ex.Mary
            else if(n < 15) itemIndex = 2; // Epic
            else itemIndex = 21; // Common (แบบย่อ)
        } 
        else if (bannerType == 1) { // Rate Up A (Otto)
            if(n < 10) itemIndex = 0;     // 10% ได้ Ex.Otto (Rate Up!)
            else itemIndex = 21;
        }
        else if (bannerType == 2) { // Rate Up B (Mary)
            if(n < 10) itemIndex = 1;     // 10% ได้ Ex.Mary (Rate Up!)
            else itemIndex = 21;
        }

        // เพิ่มจำนวนของเข้ากระเป๋า
        players[pIdx].inventory[itemIndex].amt++;
        printf("[%d] Got: %s\n", k+1, players[pIdx].inventory[itemIndex].name);
    }
    printf("----------------------\n");
}
