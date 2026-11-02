/* Module: sfmarket2.dll
   Function: FUN_00481040
   Address: 00481040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00481040(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  return;
}


