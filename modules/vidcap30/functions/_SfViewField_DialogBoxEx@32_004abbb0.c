/* Module: vidcap30.exe
   Function: _SfViewField_DialogBoxEx@32
   Address: 004abbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfViewField_DialogBoxEx_32
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
  
                    /* 0xabbb0  666  _SfViewField_DialogBoxEx@32 */
  local_14 = param_3;
  local_10 = param_4;
  local_1c = param_5;
  local_18 = param_6;
  local_20 = 0;
  local_c = param_2;
  local_8 = param_7;
  local_4 = param_8;
  hInstance = DAT_005c16d0;
  if (param_1 != (HWND)0x0) {
    hInstance = (HINSTANCE)GetWindowLongA(param_1,-6);
  }
  DialogBoxIndirectParamA
            (hInstance,(LPCDLGTEMPLATEA)PTR_DAT_005b74f8,param_1,(DLGPROC)&LAB_004ab960,
             (LPARAM)&local_20);
  return;
}


