/* Module: vidpcore.dll
   Function: FUN_5de85290
   Address: 5de85290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5de85290(int param_1)

{
  undefined1 uVar1;
  int local_4c;
  float local_48 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  float *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_c;
  
  local_28 = &local_40;
  local_24 = &local_3c;
  local_20 = local_48;
  local_18 = &local_34;
  local_14 = &local_30;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0x3f800000;
  local_30 = 0;
  local_2c = 0;
  local_1c = 0;
  local_c = 0;
  local_4c = 0;
  do {
    FUN_5df07bd0(&local_28,&local_18,1,(double)local_4c * _DAT_5df231d0);
    uVar1 = ftol();
    *(undefined1 *)(local_4c + param_1) = uVar1;
    local_4c = local_4c + 1;
  } while (local_4c < 0x100);
  return;
}


