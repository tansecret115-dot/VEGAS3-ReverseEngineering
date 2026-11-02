/* Module: vidcap30.exe
   Function: FUN_0054c390
   Address: 0054c390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054c390(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  return;
}


