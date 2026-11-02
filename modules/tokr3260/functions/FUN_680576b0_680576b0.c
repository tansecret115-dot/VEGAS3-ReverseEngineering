/* Module: tokr3260.dll
   Function: FUN_680576b0
   Address: 680576b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_680576b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_18;
  int local_14;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 8);
  local_14 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 4);
  local_18 = (iVar1 + -1 + param_3) / iVar1;
  uVar5 = 0;
  local_8 = 0;
  if (local_14 == 1) {
    iVar4 = 0;
    if (0 < local_18) {
      do {
        iVar7 = iVar1 + iVar4;
        if (param_3 < iVar1 + iVar4) {
          iVar7 = param_3;
        }
        uVar5 = FUN_68057660((uint *)(param_2 + iVar4 * 4),iVar7 - iVar4,iVar2);
        local_8 = local_8 + *(int *)(*(int *)(param_1 + 0x1c) + 4 + uVar5 * 8);
        local_18 = local_18 + -1;
        iVar4 = iVar7;
      } while (local_18 != 0);
      return local_8;
    }
  }
  else {
    if (local_14 < 2) {
      return -1;
    }
    iVar7 = 0;
    iVar4 = 0;
    if (0 < local_18) {
      do {
        iVar6 = iVar1 + iVar4;
        if (param_3 < iVar1 + iVar4) {
          iVar6 = param_3;
        }
        uVar3 = FUN_68057660((uint *)(param_2 + iVar4 * 4),iVar6 - iVar4,iVar2);
        uVar5 = uVar5 | uVar3;
        iVar7 = iVar7 + *(int *)(*(int *)(param_1 + 0x1c) + 4 + uVar3 * 8);
        local_14 = local_14 + -1;
        if (local_14 == 0) {
          iVar4 = 1;
          if (uVar5 == 0) {
            iVar4 = iVar7 + 1;
          }
          local_8 = local_8 + iVar4;
          uVar5 = 0;
        }
        local_18 = local_18 + -1;
        iVar4 = iVar6;
      } while (local_18 != 0);
    }
  }
  return local_8;
}


