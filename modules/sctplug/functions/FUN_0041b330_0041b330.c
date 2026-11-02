/* Module: sctplug.dll
   Function: FUN_0041b330
   Address: 0041b330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041b330(int param_1,uint param_2)

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


