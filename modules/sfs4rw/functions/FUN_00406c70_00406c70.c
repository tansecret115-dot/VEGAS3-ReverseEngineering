/* Module: sfs4rw.dll
   Function: FUN_00406c70
   Address: 00406c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406c70(HWND param_1,int param_2)

{
  HWND hWnd;
  
  SetWindowLongA(param_1,-0x15,param_2);
  FUN_0041fea0(param_1,(HFONT)0x0);
  FUN_00429f20(param_1,(HWND)0x0,(int *)0x0,0x8001);
  FUN_00406e00(param_2,param_1);
  hWnd = GetDlgItem(param_1,0x1b98);
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0xf1,0,0);
    ShowWindow(hWnd,0);
    EnableWindow(hWnd,0);
  }
  FUN_00406d10(param_1,*(int *)(param_2 + 0x1dc),(uint)(*(int *)(param_2 + 0x22c) == 0),
               *(int *)(param_2 + 0x254));
  return 1;
}


