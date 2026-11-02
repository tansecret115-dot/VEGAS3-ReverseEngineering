/* Module: sfpublish.dll
   Function: FUN_0040a630
   Address: 0040a630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a630(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_4 != 0) {
    return 0x80004003;
  }
  pHRam00000000 = GetDC(*(HWND *)(param_1 + -0x24));
  return 0;
}


