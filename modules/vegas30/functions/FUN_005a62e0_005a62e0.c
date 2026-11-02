/* Module: vegas30.exe
   Function: FUN_005a62e0
   Address: 005a62e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a62e0(float *param_1,float *param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float local_5c [4];
  float local_4c;
  float local_48;
  float local_3c;
  float local_38;
  float local_2c;
  float local_28;
  float local_1c;
  float local_18;
  undefined4 local_c;
  undefined4 local_8;
  
  pfVar2 = param_2;
  pfVar3 = local_5c;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  local_5c[0] = 1e+06;
  local_5c[1] = 1e+06;
  local_3c = -1e+06;
  pfVar2 = (float *)(param_3 + 4);
  iVar1 = (int)param_2 - param_3;
  iVar4 = 4;
  local_38 = _DAT_00629d6c;
  do {
    if (*param_2 <= local_5c[0]) {
      local_5c[0] = *param_2;
    }
    if (pfVar2[-1] <= local_5c[0]) {
      local_5c[0] = pfVar2[-1];
    }
    if (*(float *)(iVar1 + (int)pfVar2) <= local_5c[1]) {
      local_5c[1] = *(float *)(iVar1 + (int)pfVar2);
    }
    if (*pfVar2 <= local_5c[1]) {
      local_5c[1] = *pfVar2;
    }
    if (local_3c <= *param_2) {
      local_3c = *param_2;
    }
    if (local_3c <= pfVar2[-1]) {
      local_3c = pfVar2[-1];
    }
    if (local_38 <= *(float *)(iVar1 + (int)pfVar2)) {
      local_38 = *(float *)(iVar1 + (int)pfVar2);
    }
    if (local_38 <= *pfVar2) {
      local_38 = *pfVar2;
    }
    param_2 = param_2 + 4;
    pfVar2 = pfVar2 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_28 = local_38;
  local_4c = local_3c;
  local_2c = local_5c[0];
  local_8 = *(undefined4 *)(param_3 + 0x54);
  local_1c = (local_3c + local_5c[0]) * _DAT_0061a460;
  local_48 = local_5c[1];
  local_c = *(undefined4 *)(param_3 + 0x50);
  local_18 = (local_38 + local_5c[1]) * _DAT_0061a460;
  pfVar2 = local_5c;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


