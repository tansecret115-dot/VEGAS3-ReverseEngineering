/* Module: sfxpfx1.dll
   Function: FUN_5c97ac87
   Address: 5c97ac87
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5c97ac87(ushort param_1,DLGPROC param_2,LPARAM param_3,int *param_4)

{
  HWND pHVar1;
  tagRECT local_14;
  
  pHVar1 = GetDesktopWindow();
  pHVar1 = CreateDialogParamA(DAT_5c99df38,(LPCSTR)(uint)param_1,pHVar1,param_2,param_3);
  if (pHVar1 != (HWND)0x0) {
    GetWindowRect(pHVar1,&local_14);
    *param_4 = local_14.right - local_14.left;
    param_4[1] = local_14.bottom - local_14.top;
    DestroyWindow(pHVar1);
  }
  return pHVar1 != (HWND)0x0;
}


