/* Module: qt4plug.dll
   Function: FUN_5f5259d0
   Address: 5f5259d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f5259d0(HWND param_1,int param_2,short param_3,int param_4)

{
  LONG LVar1;
  UINT UVar2;
  HWND hWnd;
  int nCmdShow;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (param_2 == 0x4e) {
    if ((*(int *)(param_4 + 8) == -0x69) && (*(int *)(param_4 + 4) == 0x3f6)) {
      FUN_5f5454b0(param_1,"http://www.apple.com/quicktime/download");
    }
  }
  else {
    if (param_2 == 0x110) {
      SetWindowLongA(param_1,8,param_4);
      FUN_5f546080(param_1,(HWND)0x0,(int *)0x0,0x8001);
      if (*(int *)(param_4 + 0xc) == 0) {
        nCmdShow = 0;
        hWnd = GetDlgItem(param_1,0x400);
        ShowWindow(hWnd,nCmdShow);
      }
      return 1;
    }
    if ((param_2 == 0x111) && (param_3 == 1)) {
      UVar2 = IsDlgButtonChecked(param_1,0x400);
      FUN_5f525b30(LVar1,0x2717,(uint)(UVar2 == 0));
      EndDialog(param_1,1);
      return 1;
    }
  }
  return 0;
}


