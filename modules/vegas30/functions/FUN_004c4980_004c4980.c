/* Module: vegas30.exe
   Function: FUN_004c4980
   Address: 004c4980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c4980(undefined4 param_1,int param_2,uchar *param_3)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    _mbscpy(param_3,DAT_0063ea40);
    lstrlenA((LPCSTR)param_3);
    return;
  case 1:
    _mbscpy(param_3,DAT_0063ea44);
    lstrlenA((LPCSTR)param_3);
    return;
  case 2:
    _mbscpy(param_3,DAT_0063ea48);
    lstrlenA((LPCSTR)param_3);
    return;
  case 3:
    _mbscpy(param_3,DAT_0063ea4c);
    lstrlenA((LPCSTR)param_3);
    return;
  case 4:
    _mbscpy(param_3,DAT_0063ea50);
    lstrlenA((LPCSTR)param_3);
    return;
  case 5:
    _mbscpy(param_3,DAT_0063ea54);
    lstrlenA((LPCSTR)param_3);
    return;
  case 0x80:
    _mbscpy(param_3,(uchar *)"Level:");
    lstrlenA((LPCSTR)param_3);
    return;
  case 0x81:
    _mbscpy(param_3,(uchar *)"Child:");
    lstrlenA((LPCSTR)param_3);
    return;
  }
  if ((0x1ff < param_2) && (param_2 < 0x300)) {
    SfPrintF(param_3,DAT_0063ea58,param_2 + -0x1ff);
    lstrlenA((LPCSTR)param_3);
    return;
  }
  if ((0xff < param_2) && (param_2 < 0x200)) {
    param_2 = param_2 + -0xbf;
    uVar1 = _SfGetString_8(DAT_00647204,0x6e95);
    SfPrintF(param_3,uVar1,param_2);
  }
  lstrlenA((LPCSTR)param_3);
  return;
}


