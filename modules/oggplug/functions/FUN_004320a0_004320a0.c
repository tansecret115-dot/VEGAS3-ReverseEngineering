/* Module: oggplug.dll
   Function: FUN_004320a0
   Address: 004320a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004320a0(int param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x18) + param_2)) {
    return 0xffffff7d;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
  return 0;
}


