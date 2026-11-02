/* Module: aviplug.dll
   Function: FUN_5f981320
   Address: 5f981320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f981320(int param_1,LPSTR param_2,int param_3)

{
  if (param_1 != 0) {
    GetLocaleInfoA(*(LCID *)(param_1 + 0x13c),3,param_2,param_3);
    return 1;
  }
  return 0;
}


