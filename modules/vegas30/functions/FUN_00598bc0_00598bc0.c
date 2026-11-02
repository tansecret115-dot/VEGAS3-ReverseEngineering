/* Module: vegas30.exe
   Function: FUN_00598bc0
   Address: 00598bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00598bc0(undefined4 *param_1)

{
  HWND hWnd;
  
  hWnd = GetDlgItem((HWND)*param_1,0x435);
  SendMessageA(hWnd,0x1003,1,0);
  if ((HIMAGELIST)param_1[2] != (HIMAGELIST)0x0) {
    ImageList_Destroy((HIMAGELIST)param_1[2]);
  }
  param_1[2] = 0;
  return;
}


