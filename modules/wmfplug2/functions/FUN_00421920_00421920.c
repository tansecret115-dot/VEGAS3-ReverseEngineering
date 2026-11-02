/* Module: wmfplug2.dll
   Function: FUN_00421920
   Address: 00421920
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00421920(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_0048a0cc == 0) {
    uVar1 = FUN_00421780();
    DAT_00489e24 = (uint)uVar1;
    DAT_0048a0cc = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_00489e24 & param_1;
}


