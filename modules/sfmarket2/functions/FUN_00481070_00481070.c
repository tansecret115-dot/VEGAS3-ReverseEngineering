/* Module: sfmarket2.dll
   Function: FUN_00481070
   Address: 00481070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00481070(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 8);
  param_1[1] = (char)param_2;
  return;
}


