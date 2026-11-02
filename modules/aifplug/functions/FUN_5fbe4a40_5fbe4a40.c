/* Module: aifplug.dll
   Function: FUN_5fbe4a40
   Address: 5fbe4a40
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_5fbe4a40(int param_1,void *param_2)

{
  BOOL BVar1;
  
  if ((~*(uint *)(param_1 + 0x28) & 0x10000000) != 0) {
    free(param_2);
    return 1;
  }
  BVar1 = HeapFree(*(HANDLE *)(param_1 + 0x40),*(DWORD *)(param_1 + 0x48),param_2);
  return BVar1;
}


