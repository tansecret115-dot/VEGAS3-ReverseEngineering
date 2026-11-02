/* Module: oggplug.dll
   Function: FUN_004443d0
   Address: 004443d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_004443d0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (-1 < param_2) {
      if (*(int *)(param_1 + 0x34) <= param_2) {
        return 0;
      }
      return *(int *)(param_1 + 0x4c) + param_2 * 0x10;
    }
    if (2 < *(int *)(param_1 + 0x58)) {
      return *(int *)(param_1 + 0x60) * 0x10 + *(int *)(param_1 + 0x4c);
    }
  }
  return *(int *)(param_1 + 0x4c);
}


