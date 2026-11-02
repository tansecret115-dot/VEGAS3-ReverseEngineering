/* Module: vegas30.exe
   Function: FUN_00562280
   Address: 00562280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00562280(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[0x5c];
  param_1[0x5c] = uVar1 + 1;
  if ((uVar1 + 1 == 1) && ((*param_1 & 0x100) != 0)) {
    (**(code **)(*(int *)param_1[0x46] + 0x20))((int *)param_1[0x46]);
    *param_1 = *param_1 & 0xfffffeff;
    param_1[0x5d] = param_1[0x5d] + 1;
  }
  param_1[0x5c] = param_1[0x5c] - 1;
  return;
}


