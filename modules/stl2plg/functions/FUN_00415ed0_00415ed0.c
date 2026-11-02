/* Module: stl2plg.dll
   Function: FUN_00415ed0
   Address: 00415ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00415ed0(int param_1,size_t param_2)

{
  if ((~*(uint *)(param_1 + 0x28) & 0x10000000) != 0) {
    calloc(1,param_2);
    return;
  }
  HeapAlloc(*(HANDLE *)(param_1 + 0x40),*(DWORD *)(param_1 + 0x44),param_2);
  return;
}


