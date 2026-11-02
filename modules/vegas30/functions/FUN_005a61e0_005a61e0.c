/* Module: vegas30.exe
   Function: FUN_005a61e0
   Address: 005a61e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a61e0(float *param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_5c [4];
  float local_4c;
  float local_48;
  float local_3c;
  float local_38;
  float local_2c;
  float local_28;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
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
  iVar1 = 4;
  pfVar2 = param_2;
  local_38 = _DAT_00629d6c;
  do {
    if (*pfVar2 <= local_5c[0]) {
      local_5c[0] = *pfVar2;
    }
    if (pfVar2[1] <= local_5c[1]) {
      local_5c[1] = pfVar2[1];
    }
    if (local_3c <= *pfVar2) {
      local_3c = *pfVar2;
    }
    if (local_38 <= pfVar2[1]) {
      local_38 = pfVar2[1];
    }
    pfVar2 = pfVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_2c = local_5c[0];
  local_4c = local_3c;
  local_48 = local_5c[1];
  local_1c = param_2[0x10];
  local_18 = param_2[0x11];
  local_14 = param_2[0x12];
  local_10 = param_2[0x13];
  local_c = param_2[0x14];
  local_28 = local_38;
  local_8 = param_2[0x15];
  pfVar2 = local_5c;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


