/* Module: vfplugs.dll
   Function: FUN_00422940
   Address: 00422940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422940(uint *param_1,uint param_2)

{
  uint uVar1;
  
  *param_1 = param_2;
  uVar1 = (uint)((param_2 & 0x30) == 0);
  param_1[7] = param_2 & 1;
  param_1[8] = uVar1;
  if ((uVar1 == 0) && ((param_2 & 0x4000) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  param_1[9] = uVar1;
  param_1[10] = param_2 >> 0xf & 1;
  param_1[0xb] = param_2 >> 0xc & 1;
  if ((param_2 & 1) == 0) {
    uVar1 = 0xb;
  }
  else {
    uVar1 = 0xc;
  }
  uVar1 = FUN_0044f330(uVar1);
  param_1[0xd] = uVar1;
  param_1[0xc] = (uint)(param_1[10] == 0);
  return;
}


