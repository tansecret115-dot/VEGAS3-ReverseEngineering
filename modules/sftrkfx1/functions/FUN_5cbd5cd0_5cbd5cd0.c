/* Module: sftrkfx1.dll
   Function: FUN_5cbd5cd0
   Address: 5cbd5cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbd5cd0(int param_1,LPSTR param_2,int param_3)

{
  if (param_1 != 0) {
    GetLocaleInfoA(*(LCID *)(param_1 + 0x13c),3,param_2,param_3);
    return 1;
  }
  return 0;
}


