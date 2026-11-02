/* Module: extmondrv.dll
   Function: FUN_00413a10
   Address: 00413a10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00413a10(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_0045b42c == 0) {
    uVar1 = FUN_00413870();
    DAT_0045b184 = (uint)uVar1;
    DAT_0045b42c = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_0045b184 & param_1;
}


