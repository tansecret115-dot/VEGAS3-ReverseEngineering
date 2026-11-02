/* Module: gifplug.dll
   Function: FUN_5f6cda80
   Address: 5f6cda80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f6cda80(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_5f70c18c == 0) {
    uVar1 = FUN_5f6cd8e0();
    DAT_5f70bee4 = (uint)uVar1;
    DAT_5f70c18c = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_5f70bee4 & param_1;
}


