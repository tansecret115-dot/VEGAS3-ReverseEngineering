/* Module: aifplug.dll
   Function: FUN_5fbdb510
   Address: 5fbdb510
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5fbdb510(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_5fc09bac == 0) {
    uVar1 = FUN_5fbdb370();
    DAT_5fc09904 = (uint)uVar1;
    DAT_5fc09bac = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_5fc09904 & param_1;
}


