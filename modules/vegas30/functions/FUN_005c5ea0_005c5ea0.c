/* Module: vegas30.exe
   Function: FUN_005c5ea0
   Address: 005c5ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005c5ea0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  iVar1 = **(int **)(param_1 + 0x1dc);
  if (0 < iVar1) {
    do {
      iVar7 = 0;
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1dc) + 8) + local_10 * 4);
      iVar3 = **(int **)(iVar2 + 0x24);
      if (0 < iVar3) {
        do {
          iVar4 = *(int *)(*(int *)(*(int *)(iVar2 + 0x24) + 8) + iVar7 * 4);
          if (((*(int *)(iVar4 + 0x50) != 0) &&
              (iVar5 = *(int *)(*(int *)(iVar4 + 0x50) + 0x18), iVar5 != 0)) &&
             ((*(byte *)(iVar5 + 0x134) & 0x80) != 0)) {
            if (*(int *)(iVar4 + 4) == 2) {
              *(uint *)(*(int *)(iVar4 + 0x218) + 0xb8) =
                   *(uint *)(*(int *)(iVar4 + 0x218) + 0xb8) | 1;
            }
            else if (*(int *)(iVar4 + 4) == 3) {
              FUN_005435b0(*(undefined4 *)(*(int *)(iVar4 + 0x218) + 0xdc));
              if ((*(byte *)(*(int *)(*(int *)(iVar4 + 0x50) + 0x18) + 0x134) & 0x20) == 0) {
                iVar6 = FUN_005f1460(3,*(undefined4 *)(*(int *)(iVar4 + 0x50) + 0x1c));
                iVar5 = *(int *)(iVar6 + 0x30);
                if (iVar5 != 0) {
                  local_8 = *(undefined4 *)(iVar5 + 4);
                  local_4 = *(undefined4 *)(iVar5 + 8);
                  FUN_00522150(iVar4 + 0x144,&local_8,*(undefined4 *)(iVar6 + 0x50),
                               *(undefined4 *)(iVar6 + 0x54));
                }
              }
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar3);
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar1);
  }
  return;
}


