/* Module: vegas30k.dll
   Function: FUN_01066df0
   Address: 01066df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01066df0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  int local_c;
  
  local_18 = 0;
  if (0 < param_2) {
    local_1c = param_1;
    iVar8 = 0;
    do {
      iVar1 = *local_1c;
      iVar2 = *(int *)(iVar1 + 0x40);
      iVar5 = ftol();
      iVar5 = iVar5 + *(int *)(iVar1 + 0x44);
      iVar9 = iVar8 + 1;
      local_14 = local_1c;
      for (iVar7 = iVar9; iVar7 < param_2; iVar7 = iVar7 + 1) {
        local_14 = local_14 + 2;
        iVar3 = *local_14;
        iVar4 = *(int *)(iVar3 + 0x40);
        iVar6 = ftol();
        iVar6 = iVar6 + *(int *)(iVar3 + 0x44);
        if ((iVar6 <= iVar5) &&
           ((local_c = iVar2, iVar6 != iVar5 || (local_c = iVar4, iVar4 < iVar2)))) {
          iVar8 = iVar7;
          iVar5 = iVar6;
          iVar2 = local_c;
        }
        local_c = iVar2;
        iVar2 = local_c;
      }
      *local_1c = param_1[iVar8 * 2];
      param_1[iVar8 * 2] = iVar1;
      iVar8 = iVar9;
      local_1c = local_1c + 2;
    } while (iVar9 < param_2);
  }
  if (0 < param_2) {
    do {
      iVar8 = *param_1;
      if ((*(float *)(iVar8 + 4) <= (float)param_3) ||
         ((float)(param_3 + 1) <= *(float *)(iVar8 + 4))) {
        if ((*(float *)(iVar8 + 0x20) <= (float)param_3) ||
           ((float)(param_3 + 1) <= *(float *)(iVar8 + 0x20))) {
          param_1[1] = 0;
        }
        else {
          param_1[1] = 2;
          local_18 = 1;
        }
      }
      else {
        param_1[1] = 1;
        local_18 = 1;
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return local_18;
}


