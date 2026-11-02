/* Module: aviplug.dll
   Function: FUN_5f93ad10
   Address: 5f93ad10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f93ad10(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  piVar4 = param_1;
  iVar5 = 0;
  iVar7 = 0;
  iVar1 = param_1[0x48];
  local_8 = 0;
  if (0 < param_1[0x4b]) {
    local_c = 0;
    do {
      iVar2 = *(int *)(piVar4[0x4c] + 0x44 + local_c);
      param_1 = (int *)(iVar2 + 0x50);
      if (iVar7 < piVar4[0x48]) {
        iVar6 = iVar7 * 0x48;
        do {
          iVar3 = *(int *)(piVar4[0x49] + 0x44 + iVar6);
          iVar5 = FUN_5f94cdc0(*(int **)(iVar2 + 0x48),*(short **)(iVar3 + 0x5c),(byte)piVar4[0x55])
          ;
          if (iVar5 != 0) break;
          iVar5 = FUN_5f94ce70(*(int **)(iVar2 + 0x48),*(short **)(iVar3 + 0x58),(byte)piVar4[0x55],
                               param_1);
          if (iVar5 < 0) {
            return iVar5;
          }
          *(undefined4 *)(iVar3 + 0x80) = 1;
          iVar6 = iVar6 + 0x48;
          param_1[5] = iVar7;
          param_1 = param_1 + 6;
          *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < piVar4[0x48]);
      }
      if (iVar5 < 0) {
        return iVar5;
      }
      local_8 = local_8 + 1;
      local_c = local_c + 0x48;
    } while (local_8 < piVar4[0x4b]);
    if (iVar5 < 0) {
      return iVar5;
    }
  }
  if (iVar1 - iVar7 == piVar4[0x48]) {
    iVar5 = 0x4e822;
  }
  return iVar5;
}


