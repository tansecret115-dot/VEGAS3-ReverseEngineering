/* Module: oggplug.dll
   Function: FUN_00442230
   Address: 00442230
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_00442230(int *param_1)

{
  return ((int)(param_1[1] + 7 + (param_1[1] + 7 >> 0x1f & 7U)) >> 3) + *param_1;
}


