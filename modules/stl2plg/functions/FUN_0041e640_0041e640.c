/* Module: stl2plg.dll
   Function: FUN_0041e640
   Address: 0041e640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041e640(int param_1)

{
  if (*(char *)(param_1 + 0x11b) != '\0') {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 2;
    return 7;
  }
  return 1;
}


