/* Module: ednt3260.dll
   Function: FUN_630f6bd0
   Address: 630f6bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f6bd0(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int local_c;
  
  if (*(int *)(param_1 + 0x1b836) == param_1 + 0x1419e) {
    *(int *)(param_1 + 0x1b836) = param_1 + 0x17cea;
    *(int *)(param_1 + 0x1b86a) = param_1 + 0x1b852;
  }
  else {
    *(int *)(param_1 + 0x1b836) = param_1 + 0x1419e;
    *(int *)(param_1 + 0x1b86a) = param_1 + 0x1b83a;
  }
  puVar2 = (undefined2 *)(param_1 + 0x1b87a);
  puVar5 = (undefined2 *)(param_1 + 0x1414a);
  puVar1 = (undefined2 *)(param_1 + 0x3fbd2);
  local_c = 6;
  do {
    if (puVar1[-0x15d4b] != 0) {
      puVar1[-0x12182] = *puVar1;
      puVar1[-0x121b2] = puVar1[-0x1873b];
      if (puVar1[-0x1cbeb] != 0) {
        puVar1[-0x12188] = puVar1[-0x18735];
      }
      iVar4 = 0;
      puVar3 = puVar2;
      if (0 < *(short *)(param_1 + 0x6344)) {
        do {
          iVar4 = iVar4 + 1;
          *puVar3 = puVar3[-0x6583];
          puVar3 = puVar3 + 1;
        } while (iVar4 < *(short *)(param_1 + 0x6344));
      }
      if (*(short *)(param_1 + 0x6312) != 0) {
        iVar4 = 0;
        puVar1[-0x1218e] = puVar1[-0x18711];
        puVar3 = puVar5;
        if (0 < (short)puVar1[-0x1a595]) {
          do {
            iVar4 = iVar4 + 1;
            *puVar3 = puVar3[-0x61];
            puVar3 = puVar3 + 1;
          } while (iVar4 < (short)puVar1[-0x1a595]);
        }
      }
      puVar1[-0x1217c] = puVar1[-0x18747];
    }
    puVar5 = puVar5 + 7;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 5;
    local_c = local_c + -1;
  } while (local_c != 0);
  return;
}


