/* Module: oggplug.dll
   Function: FUN_0043c450
   Address: 0043c450
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
FUN_0043c450(int param_1,int param_2,int param_3,int param_4,float *param_5,int param_6,int param_7)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float *pfVar6;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  pfVar1 = param_5;
  fVar2 = (float)FUN_0043c6c0();
  pfVar6 = param_5;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 1;
  }
  iVar4 = 0;
  fVar5 = 0.0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  *param_5 = (float)param_3;
  param_5[1] = (float)param_4;
  param_5[10] = fVar2;
  if (param_6 < param_4) {
    param_4 = param_6;
  }
  if (param_3 < param_4) {
    param_5 = (float *)(param_1 + param_3 * 4);
    do {
      uVar3 = FUN_0043c6c0();
      if (uVar3 != 0) {
        if (*(float *)((param_2 - param_1) + (int)param_5) + *(float *)(param_7 + 0x460) < *param_5)
        {
          local_24 = local_24 + uVar3;
          local_28 = local_28 + param_3;
          local_20 = local_20 + param_3 * param_3;
          local_1c = local_1c + uVar3 * uVar3;
          local_18 = local_18 + uVar3 * param_3;
          iVar4 = iVar4 + 1;
        }
        else {
          local_10 = local_10 + uVar3;
          local_14 = local_14 + param_3;
          local_c = local_c + param_3 * param_3;
          local_8 = local_8 + uVar3 * uVar3;
          local_4 = local_4 + uVar3 * param_3;
          fVar5 = (float)((int)fVar5 + 1);
        }
      }
      param_3 = param_3 + 1;
      param_5 = param_5 + 1;
    } while (param_3 < param_4);
  }
  fVar2 = (float)(iVar4 + (int)fVar5);
  if (((int)fVar2 < *(int *)(param_7 + 0x454)) || ((int)fVar5 < *(int *)(param_7 + 0x458))) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(int *)(param_7 + 0x45c) * (int)fVar2) / (int)fVar5;
  }
  pfVar1[2] = (float)(iVar4 * local_14 + local_28 + local_14);
  pfVar1[3] = (float)(iVar4 * local_10 + local_24 + local_10);
  pfVar1[4] = (float)(iVar4 * local_c + local_20 + local_c);
  pfVar1[5] = (float)(iVar4 * local_8 + local_1c + local_8);
  pfVar1[8] = (float)(iVar4 * (int)fVar5 + (int)fVar2);
  pfVar1[6] = (float)(iVar4 * local_4 + local_18 + local_4);
  pfVar1[7] = fVar2;
  pfVar1[9] = fVar5;
  if (*(int *)(param_7 + 0x464) <= (int)fVar2) {
    pfVar1[9] = (float)((int)fVar5 + 1);
  }
  pfVar1[0xb] = -NAN;
  if (param_4 < param_6) {
    fVar2 = (float)FUN_0043c6c0();
    pfVar1[0xb] = fVar2;
  }
  return (int)pfVar1[7];
}


