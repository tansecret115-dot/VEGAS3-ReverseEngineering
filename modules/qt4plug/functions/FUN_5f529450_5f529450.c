/* Module: qt4plug.dll
   Function: FUN_5f529450
   Address: 5f529450
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f529450(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_5f5a43f4 == 0) {
    uVar1 = FUN_5f5292b0();
    DAT_5f5a414c = (uint)uVar1;
    DAT_5f5a43f4 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_5f5a414c & param_1;
}


