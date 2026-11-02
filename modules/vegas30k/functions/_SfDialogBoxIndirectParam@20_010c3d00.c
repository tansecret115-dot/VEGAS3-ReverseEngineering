/* Module: vegas30k.dll
   Function: _SfDialogBoxIndirectParam@20
   Address: 010c3d00
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfDialogBoxIndirectParam_20
               (undefined4 *param_1,LPCDLGTEMPLATEA param_2,HWND param_3,DLGPROC param_4,
               LPARAM param_5)

{
                    /* 0xc3d00  816  _SfDialogBoxIndirectParam@20 */
  DialogBoxIndirectParamA((HINSTANCE)*param_1,param_2,param_3,param_4,param_5);
  return;
}


