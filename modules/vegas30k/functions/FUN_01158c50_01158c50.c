/* Module: vegas30k.dll
   Function: FUN_01158c50
   Address: 01158c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01158c50(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  return;
}


