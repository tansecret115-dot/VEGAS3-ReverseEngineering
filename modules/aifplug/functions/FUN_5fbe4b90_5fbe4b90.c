/* Module: aifplug.dll
   Function: FUN_5fbe4b90
   Address: 5fbe4b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbe4b90(int param_1,uint param_2)

{
  HANDLE pvVar1;
  
  if ((~*(uint *)(param_1 + 0x28) & 0x10000000) == 0) {
    pvVar1 = HeapCreate(param_2,0x1000,0);
    *(HANDLE *)(param_1 + 0x40) = pvVar1;
    if (pvVar1 == (HANDLE)0x0) {
      return 0x8007000e;
    }
  }
  *(uint *)(param_1 + 0x48) = param_2;
  *(uint *)(param_1 + 0x44) = param_2 | 8;
  return 0;
}


