/* Module: oggplug.dll
   Function: FUN_0040c810
   Address: 0040c810
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040c810(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_00511134 == 0) {
    uVar1 = FUN_0040c670();
    DAT_00510e8c = (uint)uVar1;
    DAT_00511134 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_00510e8c & param_1;
}


