/* Module: mp3plug.dll
   Function: FUN_5f69d310
   Address: 5f69d310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f69d310(undefined4 *param_1,uint param_2,DLGPROC param_3,LPARAM param_4,int *param_5)

{
  HWND pHVar1;
  tagRECT local_10;
  
  pHVar1 = GetDesktopWindow();
  pHVar1 = (HWND)FUN_5f69d3c0(param_1,(LPCSTR)(param_2 & 0xffff),pHVar1,param_3,param_4);
  if (pHVar1 == (HWND)0x0) {
    return 0;
  }
  GetWindowRect(pHVar1,&local_10);
  *param_5 = local_10.right - local_10.left;
  param_5[1] = local_10.bottom - local_10.top;
  DestroyWindow(pHVar1);
  return 1;
}


