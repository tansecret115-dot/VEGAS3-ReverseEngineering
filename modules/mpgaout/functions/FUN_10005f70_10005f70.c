/* Module: mpgaout.dll
   Function: FUN_10005f70
   Address: 10005f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10005f70(int param_1,int param_2)

{
  return *(undefined4 *)(&DAT_1001e2d0 + param_1 * 0x10 + param_2 * 4);
}


