/* Module: wmfplug2.dll
   Function: FUN_0041c7b0
   Address: 0041c7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041c7b0(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  int dwNewLong;
  uint uVar1;
  LONG LVar2;
  HWND hWnd;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM lParam;
  
  LVar2 = GetWindowLongA(param_1,8);
  if (param_2 == 0x4e) {
    uVar1 = *(uint *)(param_4 + 8);
    if (0xffffff2f < uVar1) {
      if (uVar1 < 0xffffff33) {
        UVar3 = IsDlgButtonChecked(param_1,0x3fb);
        *(uint *)(LVar2 + 0x918) = (uint)(UVar3 != 0);
      }
      else if (uVar1 == 0xffffff38) {
        if (*(int *)(LVar2 + 0x918) == 0) {
          lParam = 5;
        }
        else {
          lParam = 3;
        }
        WVar4 = 0;
        UVar3 = 0x470;
        hWnd = GetParent(param_1);
        PostMessageA(hWnd,UVar3,WVar4,lParam);
        return 0;
      }
    }
  }
  else if (param_2 == 0x110) {
    dwNewLong = *(int *)(param_4 + 0x1c);
    SetWindowLongA(param_1,8,dwNewLong);
    WVar4 = *(WPARAM *)(dwNewLong + 0x910);
    if (WVar4 != 0) {
      FUN_0041c270(param_1,WVar4);
    }
    return 1;
  }
  return 0;
}


