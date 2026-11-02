/* Module: vegas30.exe
   Function: FUN_005d51f0
   Address: 005d51f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d51f0(HWND param_1,HWND param_2,int param_3,int param_4)

{
  HWND hWnd;
  HWND pHVar1;
  WPARAM wParam;
  float10 fVar2;
  UINT Msg;
  LPARAM LVar3;
  CHAR local_10c [264];
  
  local_10c[0] = '\0';
  if (param_4 == 0x300) {
    GetWindowTextA(param_2,local_10c,0x104);
    fVar2 = (float10)_SfTextToDoubleTokenEx_32
                               (local_10c,*(undefined4 *)(param_3 + 0xd60),
                                *(undefined4 *)(param_3 + 0xd64),DAT_0062a170,DAT_0062a174,
                                DAT_0062a178,DAT_0062a17c,0);
    if (fVar2 != (float10)*(double *)(param_3 + 0xd60)) {
      if (*(int *)(param_3 + 0xd58) == 0) {
        if (*(int *)(param_3 + 0xd30) == 0) {
          LVar3 = 0;
          Msg = 0x468;
          pHVar1 = param_1;
          hWnd = GetParent(param_1);
          SendMessageA(hWnd,Msg,(WPARAM)pHVar1,LVar3);
        }
        *(undefined4 *)(param_3 + 0xd4c) = 1;
      }
      pHVar1 = GetDlgItem(param_1,0x49e);
      LVar3 = 0;
      wParam = ftol();
      SendMessageA(pHVar1,0x610,wParam,LVar3);
      return 1;
    }
  }
  else if (param_4 == 0x200) {
    GetWindowTextA(param_2,local_10c,0x104);
    fVar2 = (float10)_SfTextToDoubleTokenEx_32
                               (local_10c,*(undefined4 *)(param_3 + 0xd60),
                                *(undefined4 *)(param_3 + 0xd64),DAT_0062a170,DAT_0062a174,
                                DAT_0062a178,DAT_0062a17c,0);
    *(double *)(param_3 + 0xd60) = (double)fVar2;
    SfSetWindowText(param_2,&DAT_0062a218,(double)fVar2);
  }
  return 1;
}


