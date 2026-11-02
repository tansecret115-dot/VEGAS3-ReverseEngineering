/* Module: vegas30.exe
   Function: FUN_004e33d0
   Address: 004e33d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e33d0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    param_2[6] = *(undefined4 *)(param_1 + 0xb90);
    param_2[7] = *(undefined4 *)(param_1 + 0xb94);
    param_2[4] = *(undefined4 *)(param_1 + 0xb88);
    param_2[5] = *(undefined4 *)(param_1 + 0xb8c);
    *param_2 = *(undefined4 *)(param_1 + 0xb70);
    param_2[1] = *(undefined4 *)(param_1 + 0xb74);
    param_2[2] = *(undefined4 *)(param_1 + 0xb78);
    param_2[3] = *(undefined4 *)(param_1 + 0xb7c);
    param_2[8] = *(undefined4 *)(param_1 + 0xb48);
    param_2[9] = *(undefined4 *)(param_1 + 0xb4c);
    param_2[10] = *(undefined4 *)(param_1 + 0xb50);
    param_2[0xb] = *(undefined4 *)(param_1 + 0xb54);
    param_2[0xe] = *(undefined4 *)(param_1 + 0xd98);
    puVar1 = param_2 + 0x10;
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    puVar1 = (undefined4 *)(param_1 + 0xbd8);
    puVar3 = param_2 + 0x10;
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar2 = 0;
    param_2[0x24] = *(undefined4 *)(param_1 + 0xc28);
    param_2[0x25] = *(undefined4 *)(param_1 + 0xc2c);
    param_2[0x26] = *(undefined4 *)(param_1 + 0xc30);
    param_2[0x27] = *(undefined4 *)(param_1 + 0xc34);
    if (0 < *(int *)(param_1 + 0xd94)) {
      puVar1 = (undefined4 *)(param_1 + 0xd80);
      do {
        if (*(int *)(puVar1[2] + 4) == 2) {
          param_2[0xd] = *puVar1;
        }
        else if (*(int *)(puVar1[2] + 4) == 3) {
          param_2[0xc] = *puVar1;
        }
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 1;
      } while (iVar2 < *(int *)(param_1 + 0xd94));
    }
  }
  return;
}


