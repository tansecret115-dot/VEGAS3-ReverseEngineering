/* Module: sfpaplug.dll
   Function: FUN_00414e40
   Address: 00414e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00414e40(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_0045c108,param_2,0x104);
    DAT_0045c20b = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_0045c20c,param_2,0x104);
    DAT_0045c30f = 0;
    return;
  }
  return;
}


