/* Module: vegas30.exe
   Function: FUN_004e4f20
   Address: 004e4f20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e4f20(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_8;
  
  iVar2 = *(int *)(DAT_0064762c + 0x70);
  if ((iVar2 != 0) && (local_8 = 0, 0 < *(int *)(iVar2 + 0xe14))) {
    piVar6 = (int *)(iVar2 + 0xe08);
    do {
      iVar3 = *piVar6;
      iVar7 = 0;
      iVar4 = **(int **)(iVar3 + 0x24);
      if (0 < iVar4) {
        do {
          iVar5 = *(int *)(*(int *)(*(int *)(iVar3 + 0x24) + 8) + iVar7 * 4);
          if ((*(int *)(iVar5 + 0x50) != 0) &&
             ((*(byte *)(*(int *)(*(int *)(iVar5 + 0x50) + 0x18) + 0x134) & 0x80) != 0)) {
            if (*(int *)(iVar5 + 4) == 2) {
              puVar1 = (uint *)(*(int *)(iVar5 + 0x218) + 0xb8);
              *puVar1 = *puVar1 | 1;
            }
            else if (*(int *)(iVar5 + 4) == 3) {
              FUN_00543530(*(undefined4 *)(*(int *)(iVar5 + 0x218) + 0xdc));
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar4);
      }
      local_8 = local_8 + 1;
      piVar6 = piVar6 + 1;
    } while (local_8 < *(int *)(iVar2 + 0xe14));
  }
  return;
}


