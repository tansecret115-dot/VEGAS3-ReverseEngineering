/* Module: oggplug.dll
   Function: FUN_00440e00
   Address: 00440e00
   Source: Ghidra pseudocode (Stage 10 batch) */


byte __cdecl FUN_00440e00(int *param_1)

{
  return *(byte *)(*param_1 + 5) & 1;
}


