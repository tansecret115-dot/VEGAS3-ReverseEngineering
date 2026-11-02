/* Module: vidcap30.exe
   Function: FUN_00481a30
   Address: 00481a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00481a30(int param_1,void *param_2)

{
  if ((~*(uint *)(param_1 + 0x28) & 0x10000000) != 0) {
    _msize(param_2);
    return;
  }
  HeapSize(*(HANDLE *)(param_1 + 0x40),*(uint *)(param_1 + 0x44) & 0xfffffffe,param_2);
  return;
}


