/* Module: Setup.exe
   Function: FUN_00419470
   Address: 00419470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00419470(int param_1,void *param_2,size_t param_3)

{
  if ((~*(uint *)(param_1 + 0x28) & 0x10000000) != 0) {
    realloc(param_2,param_3);
    return;
  }
  HeapReAlloc(*(HANDLE *)(param_1 + 0x40),*(DWORD *)(param_1 + 0x44),param_2,param_3);
  return;
}


