/* Module: sfs4rw.dll
   Function: FUN_004787a0
   Address: 004787a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004787a0(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  return;
}


