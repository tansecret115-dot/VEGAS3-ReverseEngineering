/* Module: aviplug.dll
   Function: FUN_5f982b80
   Address: 5f982b80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f982b80(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_5f9f5c14 == 0) {
    uVar1 = FUN_5f9829e0();
    DAT_5f9f596c = (uint)uVar1;
    DAT_5f9f5c14 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_5f9f596c & param_1;
}


