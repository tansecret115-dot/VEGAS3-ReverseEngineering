/* Module: oggplug.dll
   Function: FUN_004442a0
   Address: 004442a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __cdecl FUN_004442a0(int param_1)

{
  if (*(int *)(param_1 + 0x58) < 2) {
    return 0xffffffffffffff7d;
  }
  return *(undefined8 *)(param_1 + 0x50);
}


