/* Module: sctplug.dll
   Function: FUN_0040eac0
   Address: 0040eac0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040eac0(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_0043cfcc == 0) {
    uVar1 = FUN_0040e920();
    DAT_0043cd24 = (uint)uVar1;
    DAT_0043cfcc = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_0043cd24 & param_1;
}


