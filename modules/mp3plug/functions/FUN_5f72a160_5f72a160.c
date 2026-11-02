/* Module: mp3plug.dll
   Function: FUN_5f72a160
   Address: 5f72a160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f72a160(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


