/* Module: sfmarket2.dll
   Function: FUN_00450270
   Address: 00450270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00450270(int param_1)

{
  if (*(char *)(param_1 + 0x11f) == '\x10') {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x10;
  }
  return;
}


