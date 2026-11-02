/* Module: 14_43260.dll
   Function: FUN_10005420
   Address: 10005420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_10005420(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float local_34 [10];
  float *local_c;
  float *local_8;
  
  pfVar8 = param_2;
  local_c = local_34;
  param_2 = (float *)0x0;
  pfVar3 = local_34;
  do {
    iVar1 = (int)param_2 * 4;
    local_c = pfVar3;
    pfVar3[(int)param_2] = *(float *)(param_1 + iVar1);
    pfVar5 = pfVar3;
    if (-1 < (int)param_2 + -1) {
      local_8 = param_2;
      pfVar4 = pfVar3;
      iVar6 = iVar1;
      do {
        iVar2 = iVar6 + -4;
        iVar6 = iVar6 + -4;
        pfVar7 = (float *)((int)local_8 + -1);
        local_8 = pfVar7;
        *pfVar4 = *(float *)((int)pfVar8 + iVar2) * *(float *)(param_1 + iVar1) +
                  *(float *)((int)pfVar8 + (-4 - (int)pfVar3) + (int)(pfVar4 + 1));
        pfVar5 = local_c;
        pfVar4 = pfVar4 + 1;
      } while (pfVar7 != (float *)0x0);
    }
    param_2 = (float *)((int)param_2 + 1);
    local_c = pfVar8;
    pfVar3 = pfVar8;
    pfVar8 = pfVar5;
  } while ((int)param_2 < 10);
  return 0;
}


