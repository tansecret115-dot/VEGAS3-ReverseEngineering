/* Module: vegas30.exe
   Function: FUN_0044ad60
   Address: 0044ad60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044ad60(int *param_1,double param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_c;
  int local_8;
  int local_4;
  
  if (_DAT_00610fd8 != param_2) {
    if (param_1 == (int *)0x0) {
      local_c = 0;
    }
    else {
      local_c = *param_1;
    }
    local_4 = 0;
    if (0 < local_c) {
      do {
        if (param_1 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *param_1;
        }
        if ((local_4 < 0) || (iVar2 + -1 < local_4)) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(param_1[2] + local_4 * 4);
        }
        if (*(int *)(iVar2 + 0x14) != 0) {
          if (*(int **)(iVar2 + 0x60) == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = **(int **)(iVar2 + 0x60);
          }
          iVar5 = iVar3 + -1;
          local_8 = -1;
          iVar4 = -1;
          if (param_2 < _DAT_006106d0) {
            iVar5 = 0;
            local_8 = 1;
            iVar4 = iVar3;
          }
          for (; iVar5 != iVar4; iVar5 = iVar5 + local_8) {
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 1;
            iVar3 = *(int *)(*(int *)(iVar2 + 0x60) + 4);
            iVar1 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
            uVar6 = ftol(1,0,0);
            FUN_0044aa90(iVar2,0,0,iVar3 * iVar5 + iVar1,iVar5,uVar6,uVar7,uVar8,uVar9);
          }
        }
        local_4 = local_4 + 1;
      } while (local_4 < local_c);
    }
    return 0;
  }
  return 0x80070057;
}


