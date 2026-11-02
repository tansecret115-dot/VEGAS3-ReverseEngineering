/* Module: vegas30k.dll
   Function: FUN_01067010
   Address: 01067010
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01067010(int *param_1,int *param_2,int param_3,float param_4)

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
  int *local_18;
  int *local_14;
  int local_c;
  
  if (0 < param_3) {
    local_18 = param_2;
    iVar9 = 0;
    do {
      iVar2 = *local_18;
      iVar3 = *(int *)(iVar2 + 0x40);
      iVar6 = ftol();
      iVar1 = iVar9 + 1;
      iVar6 = iVar6 + *(int *)(iVar2 + 0x44);
      local_14 = local_18;
      for (iVar8 = iVar1; iVar8 < param_3; iVar8 = iVar8 + 1) {
        local_14 = local_14 + 2;
        iVar4 = *(int *)(*local_14 + 0x40);
        iVar5 = *(int *)(*local_14 + 0x44);
        iVar7 = ftol();
        iVar7 = iVar7 + iVar5;
        if ((iVar7 <= iVar6) &&
           ((local_c = iVar3, iVar5 != iVar6 || (local_c = iVar4, iVar4 < iVar3)))) {
          iVar6 = iVar7;
          iVar9 = iVar8;
          iVar3 = local_c;
        }
        local_c = iVar3;
        iVar3 = local_c;
      }
      *local_18 = param_2[iVar9 * 2];
      param_2[iVar9 * 2] = iVar2;
      iVar9 = iVar1;
      local_18 = local_18 + 2;
    } while (iVar1 < param_3);
  }
  iVar9 = 0;
  if (0 < param_3) {
    do {
      iVar1 = *param_2;
      if ((param_4 < *(float *)(iVar1 + 0x20)) && (*(float *)(iVar1 + 4) <= param_4)) {
        iVar9 = iVar9 + 1;
        *param_1 = iVar1;
        param_1[1] = param_2[1];
        param_1 = param_1 + 2;
      }
      param_2 = param_2 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return iVar9;
}


