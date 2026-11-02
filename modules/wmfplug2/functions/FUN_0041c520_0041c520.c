/* Module: wmfplug2.dll
   Function: FUN_0041c520
   Address: 0041c520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041c520(HWND param_1,int param_2,short param_3,int param_4)

{
  int dwNewLong;
  LONG LVar1;
  UINT UVar2;
  uint uVar3;
  HWND hWnd;
  LRESULT LVar4;
  WPARAM WVar5;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (param_2 == 0x4e) {
    uVar3 = *(uint *)(param_4 + 8);
    if (0xffffff2f < uVar3) {
      if (uVar3 < 0xffffff33) {
        UVar2 = IsDlgButtonChecked(param_1,0x3e9);
        if (UVar2 != 0) {
          WVar5 = SendDlgItemMessageA(param_1,2000,0x147,0,0);
          LVar4 = SendDlgItemMessageA(param_1,2000,0x150,WVar5,0);
          *(LRESULT *)(LVar1 + 0x914) = LVar4;
          return 0;
        }
        *(undefined4 *)(LVar1 + 0x914) = 0;
      }
      else if (uVar3 == 0xffffff38) {
        FUN_0041c6c0(param_1,*(int *)(LVar1 + 0x914));
        uVar3 = (-(uint)(*(int *)(LVar1 + 0x90c) != 0) & 0xfffffffe) + 4 | 1;
        WVar5 = 0;
        UVar2 = 0x470;
        hWnd = GetParent(param_1);
        PostMessageA(hWnd,UVar2,WVar5,uVar3);
        return 0;
      }
    }
  }
  else {
    if (param_2 == 0x110) {
      dwNewLong = *(int *)(param_4 + 0x1c);
      SetWindowLongA(param_1,8,dwNewLong);
      WVar5 = *(WPARAM *)(dwNewLong + 0x910);
      if (WVar5 != 0) {
        FUN_0041c270(param_1,WVar5);
      }
      return 1;
    }
    if ((param_2 == 0x111) && (param_3 == 0x3e9)) {
      UVar2 = IsDlgButtonChecked(param_1,0x3e9);
      FUN_0041c660(param_1,(uint)(UVar2 != 0));
      return 0;
    }
  }
  return 0;
}


