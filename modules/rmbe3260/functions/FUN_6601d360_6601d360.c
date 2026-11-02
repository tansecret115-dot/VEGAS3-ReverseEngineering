/* Module: rmbe3260.dll
   Function: FUN_6601d360
   Address: 6601d360
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6601d360(int *param_1)

{
  param_1[0x4b] = 1;
  (**(code **)(*param_1 + 0x48))(param_1);
  param_1[0x4b] = 0;
  return;
}


