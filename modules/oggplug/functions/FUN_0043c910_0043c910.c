/* Module: oggplug.dll
   Function: FUN_0043c910
   Address: 0043c910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_0043c910(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int local_18;
  int local_14;
  
  iVar7 = param_1;
  uVar5 = param_4 - param_3;
  iVar8 = param_2 - param_1;
  iVar1 = (int)uVar5 / iVar8;
  if ((int)uVar5 < 0) {
    iVar2 = iVar1 + -1;
  }
  else {
    iVar2 = iVar1 + 1;
  }
  param_4 = param_3;
  local_18 = 0;
  iVar4 = param_1 * 4;
  uVar3 = FUN_0043c6c0();
  local_14 = 0;
  param_1 = 0;
  uVar6 = iVar1 * iVar8 >> 0x1f;
  if (*(float *)(param_5 + iVar4) <= *(float *)(param_6 + iVar7 * 4) + *(float *)(param_7 + 0x460))
  {
    if ((float)param_3 + *(float *)(param_7 + 0x448) < (float)(int)uVar3) {
      return 1;
    }
    if ((float)(int)uVar3 < (float)param_3 - *(float *)(param_7 + 0x44c)) {
      return 1;
    }
    param_1 = 1;
    local_14 = (param_3 - uVar3) * (param_3 - uVar3);
  }
  iVar7 = iVar7 + 1;
  if (iVar7 < param_2) {
    pfVar9 = (float *)(param_5 + iVar7 * 4);
    do {
      local_18 = local_18 +
                 (((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) -
                 ((iVar1 * iVar8 ^ uVar6) - uVar6));
      iVar4 = iVar1;
      if (iVar8 <= local_18) {
        local_18 = local_18 - iVar8;
        iVar4 = iVar2;
      }
      param_4 = param_4 + iVar4;
      if ((*pfVar9 <= *(float *)((param_6 - param_5) + (int)pfVar9) + *(float *)(param_7 + 0x460))
         && (uVar3 = FUN_0043c6c0(), uVar3 != 0)) {
        if ((float)param_4 + *(float *)(param_7 + 0x448) < (float)(int)uVar3) {
          return 1;
        }
        if ((float)(int)uVar3 < (float)param_4 - *(float *)(param_7 + 0x44c)) {
          return 1;
        }
        local_14 = local_14 + (param_4 - uVar3) * (param_4 - uVar3);
        param_1 = param_1 + 1;
      }
      iVar7 = iVar7 + 1;
      pfVar9 = pfVar9 + 1;
    } while (iVar7 < param_2);
  }
  if ((((param_1 != 0) &&
       ((*(float *)(param_7 + 0x448) * *(float *)(param_7 + 0x448)) / (float)param_1 <=
        *(float *)(param_7 + 0x450))) &&
      ((*(float *)(param_7 + 0x44c) * *(float *)(param_7 + 0x44c)) / (float)param_1 <=
       *(float *)(param_7 + 0x450))) && (*(float *)(param_7 + 0x450) < (float)(local_14 / param_1)))
  {
    return 1;
  }
  return 0;
}


