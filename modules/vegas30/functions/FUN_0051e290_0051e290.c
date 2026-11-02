/* Module: vegas30.exe
   Function: FUN_0051e290
   Address: 0051e290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051e290(int param_1,int *param_2)

{
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  
  local_28 = *(float *)(param_1 + 0x14);
  local_24 = *(float *)(param_1 + 0x18);
  local_18 = 0x15;
  local_14 = 0x15;
  if ((0x10 < *param_2) && (0x10 < param_2[1])) {
    local_30 = (float)(int)local_28 * _DAT_0061a460;
    local_2c = (float)(int)local_24 * _DAT_0061a460;
    FUN_0050d730(&local_10,&local_30,param_1,&local_18);
    local_30 = (float)*param_2 * _DAT_0061a460;
    local_2c = (float)param_2[1] * _DAT_0061a460;
    FUN_0050d730(&local_28,&local_30,param_1,&local_18);
    local_28 = local_28 - local_10;
    if (DAT_00647e50 != 0) {
      local_28 = local_28 * (float)*(double *)(param_1 + 0x80);
    }
    *(float *)(param_1 + 0xc) = local_28 + *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0x10) = (local_24 - local_c) + *(float *)(param_1 + 0x10);
    *(int *)(param_1 + 0x14) = *param_2;
    *(int *)(param_1 + 0x18) = param_2[1];
  }
  return;
}


