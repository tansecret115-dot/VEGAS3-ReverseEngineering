/* Module: sfs4rw.dll
   Function: FUN_0041bde0
   Address: 0041bde0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041bde0(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


