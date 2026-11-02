/* Module: vidcap30.exe
   Function: _SfViewField_SetupSpread@20
   Address: 004ab7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_SfViewField_SetupSpread_20
          (HWND param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined *lParam;
  WPARAM wParam;
  LPARAM lParam_00;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0xab7f0  667  _SfViewField_SetupSpread@20 */
  local_1c = 2;
  local_18 = 0xff00;
  local_14 = 0xffffffff;
  local_10 = 0xffffffff;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  SendMessageA(param_1,0x438,1,0);
  lParam = &DAT_005b7580;
  if (param_3 == 0) {
    lParam = &DAT_005b7538;
  }
  SendMessageA(param_1,0x40b,0,(LPARAM)lParam);
  SendMessageA(param_1,0x42e,0,0x10000004);
  SendMessageA(param_1,0x437,0,(LPARAM)&local_1c);
  _DAT_005b75a4 = param_5;
  _DAT_005b75bc = param_4;
  _DAT_005b7598 = param_2;
  _DAT_005b75c0 = param_3;
  SendMessageA(param_1,0x419,0,0x5b7598);
  lParam_00 = 0;
  wParam = _SfGetUIFont_4(100);
  SendMessageA(param_1,0x30,wParam,lParam_00);
  SendMessageA(param_1,0x438,0,0);
  return 1;
}


