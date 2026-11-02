/* Module: vegas30.exe
   Function: FUN_00468f50
   Address: 00468f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00468f50(HWND param_1,LPCSTR param_2,RECT *param_3)

{
  tagRECT local_10;
  
  if ((DAT_0064be64 == (HWND)0x0) &&
     (DAT_0064be64 = (HWND)FUN_00468f00(), DAT_0064be64 == (HWND)0x0)) {
    return;
  }
  GetWindowRect(param_1,&local_10);
  SetWindowTextA(DAT_0064be64,param_2);
  DrawAnimatedRects(DAT_0064be64,3,param_3,&local_10);
  return;
}


