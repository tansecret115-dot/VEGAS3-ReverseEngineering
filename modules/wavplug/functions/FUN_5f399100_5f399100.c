/* Module: wavplug.dll
   Function: FUN_5f399100
   Address: 5f399100
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f399100(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_5f3db61c == 0) {
    uVar1 = FUN_5f398f60();
    DAT_5f3db374 = (uint)uVar1;
    DAT_5f3db61c = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_5f3db374 & param_1;
}


