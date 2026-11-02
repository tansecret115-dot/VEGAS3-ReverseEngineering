/* Module: mpgmux.dll
   Function: FUN_1000f7fd
   Address: 1000f7fd
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000f7fd(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}


