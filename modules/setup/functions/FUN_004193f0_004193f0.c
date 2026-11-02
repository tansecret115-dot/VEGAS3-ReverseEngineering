/* Module: Setup.exe
   Function: FUN_004193f0
   Address: 004193f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004193f0(int param_1,void *param_2)

{
  if ((~*(uint *)(param_1 + 0x28) & 0x10000000) != 0) {
    _msize(param_2);
    return;
  }
  HeapSize(*(HANDLE *)(param_1 + 0x40),*(uint *)(param_1 + 0x44) & 0xfffffffe,param_2);
  return;
}


