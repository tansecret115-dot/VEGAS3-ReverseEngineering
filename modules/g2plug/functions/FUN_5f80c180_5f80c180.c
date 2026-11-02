/* Module: g2plug.dll
   Function: FUN_5f80c180
   Address: 5f80c180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80c180(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  int dwNewLong;
  HWND pHVar1;
  HWND pHVar2;
  int *piVar3;
  UINT Msg;
  uint uVar4;
  WPARAM WVar5;
  LPARAM lParam;
  
  GetWindowLongA(param_1,8);
  if (param_2 == 0x4e) {
    if (*(int *)(param_4 + 8) == -0xcd) {
      FUN_5f8111c0(1,0xd);
    }
    else if (*(int *)(param_4 + 8) == -200) {
      lParam = 2;
      WVar5 = 0;
      Msg = 0x470;
      pHVar1 = GetParent(param_1);
      PostMessageA(pHVar1,Msg,WVar5,lParam);
      return 0;
    }
  }
  else if (param_2 == 0x110) {
    dwNewLong = *(int *)(param_4 + 0x1c);
    SetWindowLongA(param_1,8,dwNewLong);
    WVar5 = *(WPARAM *)(dwNewLong + 0x688);
    if (WVar5 != 0) {
      FUN_5f80c130(param_1,WVar5);
    }
    uVar4 = 0x8001;
    piVar3 = (int *)0x0;
    pHVar2 = (HWND)0x0;
    pHVar1 = GetParent(param_1);
    FUN_5f82c620(pHVar1,pHVar2,piVar3,uVar4);
    return 1;
  }
  return 0;
}


