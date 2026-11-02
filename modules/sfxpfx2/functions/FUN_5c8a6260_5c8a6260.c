/* Module: sfxpfx2.dll
   Function: FUN_5c8a6260
   Address: 5c8a6260
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5c8a6260(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_5c8e9694 == 0) {
    uVar1 = FUN_5c8a60c0();
    DAT_5c8e93ec = (uint)uVar1;
    DAT_5c8e9694 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_5c8e93ec & param_1;
}


