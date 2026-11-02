/* Module: vegas30.exe
   Function: FUN_0049cf50
   Address: 0049cf50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049cf50(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  FUN_005b87b0(*(undefined4 *)(param_1 + 0xbc8));
  local_8 = 0;
  iVar1 = **(int **)(param_1 + 0xcd0);
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(param_1 + 0xcd0);
      if (piVar2 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar2;
      }
      if ((local_8 < 0) || (iVar6 + -1 < local_8)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(piVar2[2] + local_8 * 4);
      }
      iVar3 = *(int *)(iVar6 + 8);
      iVar7 = 0;
      iVar4 = **(int **)(iVar3 + 0x24);
      if (0 < iVar4) {
        do {
          iVar5 = *(int *)(*(int *)(*(int *)(iVar3 + 0x24) + 8) + iVar7 * 4);
          if ((*(byte *)(iVar5 + 0x10) & 0x10) == 0) {
            if ((*(int *)(iVar6 + 0x1c) <= *(int *)(iVar5 + 0x1c)) &&
               ((*(int *)(iVar6 + 0x1c) < *(int *)(iVar5 + 0x1c) ||
                (*(uint *)(iVar6 + 0x18) < *(uint *)(iVar5 + 0x18))))) {
              FUN_0049ce10(param_1,iVar5);
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar4);
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar1);
  }
  return;
}


