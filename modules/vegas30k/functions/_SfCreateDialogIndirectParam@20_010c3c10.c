/* Module: vegas30k.dll
   Function: _SfCreateDialogIndirectParam@20
   Address: 010c3c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfCreateDialogIndirectParam_20
               (undefined4 *param_1,LPCDLGTEMPLATEA param_2,HWND param_3,DLGPROC param_4,
               LPARAM param_5)

{
  HWND pHVar1;
  
                    /* 0xc3c10  794  _SfCreateDialogIndirectParam@20 */
  if ((((HINSTANCE)param_1[0x4e] == (HINSTANCE)0x0) || (param_1[0x4d] == 0)) ||
     (pHVar1 = CreateDialogIndirectParamA((HINSTANCE)param_1[0x4e],param_2,param_3,param_4,param_5),
     pHVar1 == (HWND)0x0)) {
    CreateDialogIndirectParamA((HINSTANCE)*param_1,param_2,param_3,param_4,param_5);
  }
  return;
}


