/* Module: sfcdi.dll
   Function: FUN_5bf2b690
   Address: 5bf2b690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf2b690(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  if (param_1 == (uint *)0x0) {
    return 0x80004003;
  }
  if (param_2 == (uint *)0x0) {
    return 0x80004003;
  }
  uVar1 = *param_2;
  *param_1 = uVar1 / 0x3c;
  param_1[1] = *param_2 + (uVar1 / 0x3c) * -0x3c;
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  return 0;
}


