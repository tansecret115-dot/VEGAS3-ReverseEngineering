/* Module: vegas30k.dll
   Function: _SfViewField_ShowDialog@32
   Address: 010377f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfViewField_ShowDialog_32
               (HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  HINSTANCE hInstance;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x377f0  1286  _SfViewField_ShowDialog@32 */
  local_14 = param_3;
  local_10 = param_4;
  local_1c = param_5;
  local_18 = param_6;
  local_20 = 1;
  local_c = param_2;
  local_8 = param_7;
  local_4 = param_8;
  hInstance = DAT_0120e5c0;
  if (param_1 != (HWND)0x0) {
    hInstance = (HINSTANCE)GetWindowLongA(param_1,-6);
  }
  CreateDialogIndirectParamA
            (hInstance,(LPCDLGTEMPLATEA)PTR_DAT_01204f70,param_1,FUN_01037520,(LPARAM)&local_20);
  return;
}


