/* Module: mp3rw.dll
   Function: FUN_004055a0
   Address: 004055a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004055a0(HWND param_1,LPSTR param_2,int param_3)

{
  HWND pHVar1;
  uchar local_40 [64];
  
  *param_2 = '\0';
  pHVar1 = GetDlgItem(param_1,0x1f43);
  if (pHVar1 == (HWND)0x0) {
    return;
  }
  GetDlgItemTextA(param_1,0x1f43,(LPSTR)local_40,0x40);
  FUN_00404b40(local_40);
  lstrcpynA(param_2,(LPCSTR)local_40,param_3);
  param_2[param_3 + -1] = '\0';
  lstrlenA(param_2);
  return;
}


