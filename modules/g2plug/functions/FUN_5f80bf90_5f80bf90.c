/* Module: g2plug.dll
   Function: FUN_5f80bf90
   Address: 5f80bf90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80bf90(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  LONG LVar1;
  HWND pHVar2;
  int iVar3;
  char *lpsz;
  HWND pHVar4;
  UINT Msg;
  int *piVar5;
  WPARAM WVar6;
  uint uVar7;
  LPARAM lParam;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (param_2 == 0x4e) {
    iVar3 = *(int *)(param_4 + 8);
    if (iVar3 == -0xcf) {
      if (*(LPSTR *)(LVar1 + 0x678) != (LPSTR)0x0) {
        GetDlgItemTextA(param_1,0x7eb,*(LPSTR *)(LVar1 + 0x678),0x104);
        GetDlgItemTextA(param_1,0x7ec,(LPSTR)(*(int *)(LVar1 + 0x678) + 0x104),0x104);
        lpsz = *(char **)(LVar1 + 0x678);
        iVar3 = _ismbcspace((int)*lpsz);
        while (iVar3 != 0) {
          lpsz = CharNextA(lpsz);
          iVar3 = _ismbcspace((int)*lpsz);
        }
        if (*lpsz == '\0') {
          FUN_5f826380(DAT_5f87746c,param_1,0x40,0xef6f);
          SetWindowLongA(param_1,0,0x1ad);
          return 1;
        }
      }
      SetWindowLongA(param_1,0,0x1b6);
      return 1;
    }
    if (iVar3 == -0xcd) {
      FUN_5f8111c0(1,1);
    }
    else if (iVar3 == -200) {
      if (*(LPCSTR *)(LVar1 + 0x678) != (LPCSTR)0x0) {
        SetDlgItemTextA(param_1,0x7eb,*(LPCSTR *)(LVar1 + 0x678));
        SetDlgItemTextA(param_1,0x7ec,(LPCSTR)(*(int *)(LVar1 + 0x678) + 0x104));
      }
      lParam = 2;
      WVar6 = 0;
      Msg = 0x470;
      pHVar2 = GetParent(param_1);
      PostMessageA(pHVar2,Msg,WVar6,lParam);
      return 0;
    }
  }
  else if (param_2 == 0x110) {
    iVar3 = *(int *)(param_4 + 0x1c);
    SetWindowLongA(param_1,8,iVar3);
    WVar6 = *(WPARAM *)(iVar3 + 0x688);
    if (WVar6 != 0) {
      FUN_5f80c130(param_1,WVar6);
    }
    uVar7 = 0x8001;
    piVar5 = (int *)0x0;
    pHVar4 = (HWND)0x0;
    pHVar2 = GetParent(param_1);
    FUN_5f82c620(pHVar2,pHVar4,piVar5,uVar7);
    return 1;
  }
  return 0;
}


