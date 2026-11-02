/* Module: mp3plug.dll
   Function: FUN_5f69fc10
   Address: 5f69fc10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f69fc10(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_5f74d724 == 0) {
    uVar1 = FUN_5f69fa70();
    DAT_5f74d47c = (uint)uVar1;
    DAT_5f74d724 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_5f74d47c & param_1;
}


