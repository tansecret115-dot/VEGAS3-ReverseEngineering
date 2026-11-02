/* Module: qt4plug.dll
   Function: FUN_5f529c60
   Address: 5f529c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f529c60(int param_1,size_t param_2)

{
  if ((~*(uint *)(param_1 + 0x28) & 0x10000000) != 0) {
    calloc(1,param_2);
    return;
  }
  HeapAlloc(*(HANDLE *)(param_1 + 0x40),*(DWORD *)(param_1 + 0x44),param_2);
  return;
}


