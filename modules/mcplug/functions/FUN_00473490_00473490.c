/* Module: mcplug.dll
   Function: FUN_00473490
   Address: 00473490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00473490(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


