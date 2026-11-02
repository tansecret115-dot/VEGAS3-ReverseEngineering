/* Module: wmfplug2.dll
   Function: FUN_0041c2c0
   Address: 0041c2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041c2c0(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  int dwNewLong;
  HWND pHVar1;
  HWND pHVar2;
  int *piVar3;
  UINT UVar4;
  uint uVar5;
  WPARAM WVar6;
  LPARAM lParam;
  
  GetWindowLongA(param_1,8);
  if (param_2 == 0x4e) {
    if (*(int *)(param_4 + 8) == -0xcf) {
      UVar4 = IsDlgButtonChecked(param_1,0xf9);
      if (UVar4 != 0) {
        SetWindowLongA(param_1,0,0xf7);
        return 1;
      }
      SetWindowLongA(param_1,0,0xf9);
      return 1;
    }
    if (*(int *)(param_4 + 8) == -200) {
      lParam = 2;
      WVar6 = 0;
      UVar4 = 0x470;
      pHVar1 = GetParent(param_1);
      PostMessageA(pHVar1,UVar4,WVar6,lParam);
    }
  }
  else if (param_2 == 0x110) {
    dwNewLong = *(int *)(param_4 + 0x1c);
    SetWindowLongA(param_1,8,dwNewLong);
    WVar6 = *(WPARAM *)(dwNewLong + 0x910);
    if (WVar6 != 0) {
      FUN_0041c270(param_1,WVar6);
    }
    uVar5 = 0x8001;
    piVar3 = (int *)0x0;
    pHVar2 = (HWND)0x0;
    pHVar1 = GetParent(param_1);
    FUN_00447730(pHVar1,pHVar2,piVar3,uVar5);
    return 1;
  }
  return 0;
}


