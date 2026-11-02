/* Module: Setup.exe
   Function: FUN_00431f80
   Address: 00431f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00431f80(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


