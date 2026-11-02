/* Module: vegas30.exe
   Function: FUN_0040afc0
   Address: 0040afc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040afc0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_4 != 0) {
    return 0x80004003;
  }
  _DAT_00000000 = GetDC(*(HWND *)(param_1 + -0x24));
  return 0;
}


