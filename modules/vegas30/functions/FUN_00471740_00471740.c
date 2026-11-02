/* Module: vegas30.exe
   Function: FUN_00471740
   Address: 00471740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471740(undefined2 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int local_44;
  int local_38;
  
  iVar2 = *(int *)(*(int *)(param_4 + 0x48) + param_5 * 0x58 + 0x44);
  if ((-1 < iVar2) &&
     (((0 < iVar2 || (*(int *)(*(int *)(param_4 + 0x48) + 0x40 + param_5 * 0x58) != 0)) &&
      (0 < param_2)))) {
    iVar2 = ftol();
    if (param_2 < iVar2) {
      iVar2 = param_2;
    }
    local_44 = iVar2;
    if (param_3 == 1) {
      puVar4 = param_1;
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          uVar1 = ftol();
          *puVar4 = uVar1;
          uVar1 = ftol();
          puVar4[1] = uVar1;
          local_44 = local_44 + -1;
          puVar4 = puVar4 + 2;
          iVar3 = iVar2;
        } while (local_44 != 0);
      }
      if (iVar3 < param_2) {
        param_2 = param_2 - iVar3;
        param_1 = param_1 + iVar3 * 2;
        do {
          *param_1 = 0;
          param_1[1] = 0;
          param_1 = param_1 + 2;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        return;
      }
    }
    else if (param_3 == 2) {
      iVar3 = 0;
      if (0 < iVar2) {
        puVar4 = param_1 + 2;
        do {
          uVar1 = ftol();
          puVar4[-2] = uVar1;
          uVar1 = ftol();
          puVar4[-1] = uVar1;
          uVar1 = ftol();
          *puVar4 = uVar1;
          uVar1 = ftol();
          puVar4[1] = uVar1;
          puVar4 = puVar4 + 4;
          local_44 = local_44 + -1;
          iVar3 = iVar2;
        } while (local_44 != 0);
      }
      if (iVar3 < param_2) {
        param_2 = param_2 - iVar3;
        param_1 = param_1 + iVar3 * 4 + 2;
        do {
          param_1[-2] = 0;
          param_1[-1] = 0;
          *param_1 = 0;
          param_1[1] = 0;
          param_1 = param_1 + 4;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        return;
      }
    }
    else {
      iVar3 = 0;
      puVar4 = param_1;
      local_38 = iVar2;
      if (0 < iVar2) {
        do {
          if (0 < param_3) {
            local_44 = param_3;
            puVar5 = puVar4;
            do {
              uVar1 = ftol();
              *puVar5 = uVar1;
              uVar1 = ftol();
              puVar5[1] = uVar1;
              puVar5 = puVar5 + 2;
              local_44 = local_44 + -1;
            } while (local_44 != 0);
          }
          local_38 = local_38 + -1;
          iVar3 = iVar2;
          puVar4 = puVar4 + param_3 * 2;
        } while (local_38 != 0);
      }
      if (iVar3 < param_2) {
        param_2 = param_2 - iVar3;
        param_1 = param_1 + iVar3 * param_3 * 2;
        do {
          puVar4 = param_1;
          iVar2 = param_3;
          if (0 < param_3) {
            do {
              *puVar4 = 0;
              puVar4[1] = 0;
              iVar2 = iVar2 + -1;
              puVar4 = puVar4 + 2;
            } while (iVar2 != 0);
          }
          param_1 = param_1 + param_3 * 2;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        return;
      }
    }
  }
  return;
}


