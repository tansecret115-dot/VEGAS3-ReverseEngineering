/* Module: vegas30.exe
   Function: FUN_004da160
   Address: 004da160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004da160(undefined4 param_1,int param_2,uchar *param_3)

{
  uchar *_Source;
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xc4;
  }
  else {
    if ((param_2 < 1) || (2 < param_2)) {
      param_2 = param_2 + -3;
      uVar1 = _SfGetString_8(DAT_00647204,0xc6);
      SfPrintF(param_3,uVar1,param_2);
      lstrlenA((LPCSTR)param_3);
      return;
    }
    uVar1 = 0xc5;
  }
  _Source = (uchar *)_SfGetString_8(DAT_00647204,uVar1);
  _mbscpy(param_3,_Source);
  lstrlenA((LPCSTR)param_3);
  return;
}


