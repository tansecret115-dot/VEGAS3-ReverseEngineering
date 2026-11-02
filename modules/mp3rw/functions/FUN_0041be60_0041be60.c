/* Module: mp3rw.dll
   Function: FUN_0041be60
   Address: 0041be60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041be60(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


