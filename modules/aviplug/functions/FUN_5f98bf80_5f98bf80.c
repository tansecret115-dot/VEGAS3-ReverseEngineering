/* Module: aviplug.dll
   Function: FUN_5f98bf80
   Address: 5f98bf80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f98bf80(uint *param_1)

{
  param_1[1] = 0x8000003c;
  param_1[2] = 0;
  *param_1 = *param_1 & 0xfffffff0;
  param_1[4] = 0x40004;
  param_1[3] = 4;
  param_1[5] = 0;
  return;
}


