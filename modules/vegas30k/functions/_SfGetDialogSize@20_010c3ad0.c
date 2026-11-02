/* Module: vegas30k.dll
   Function: _SfGetDialogSize@20
   Address: 010c3ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfGetDialogSize_20(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                   int *param_5)

{
  HWND pHVar1;
  tagRECT local_10;
  
                    /* 0xc3ad0  944  _SfGetDialogSize@20 */
  pHVar1 = GetDesktopWindow();
  pHVar1 = (HWND)_SfCreateDialogParam_20(param_1,param_2,pHVar1,param_3,param_4);
  if (pHVar1 == (HWND)0x0) {
    return 0;
  }
  GetWindowRect(pHVar1,&local_10);
  *param_5 = local_10.right - local_10.left;
  param_5[1] = local_10.bottom - local_10.top;
  DestroyWindow(pHVar1);
  return 1;
}


