/* Module: sfnetmedia.dll
   Function: FUN_0040a410
   Address: 0040a410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a410(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_4 != 0) {
    return 0x80004003;
  }
  pHRam00000000 = GetDC(*(HWND *)(param_1 + -0x24));
  return 0;
}


