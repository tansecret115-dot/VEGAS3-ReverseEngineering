/* Module: vegas30k.dll
   Function: FUN_0101c9f0
   Address: 0101c9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0101c9f0(HWND param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  LONG LVar2;
  HWND pHVar3;
  HWND pHVar4;
  HWND pHVar5;
  int iVar6;
  int local_24;
  tagRECT local_20;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_24 = 0;
  if (param_2 < 0x54) {
    if (param_2 == 0x53) {
      if (*(int *)(param_4 + 8) == 0x14e) {
        GetWindowLongA(param_1,8);
        return 1;
      }
      if (*(int *)(param_4 + 8) != 9) {
        return 1;
      }
    }
    else {
      if (param_2 == 2) {
        LVar2 = GetWindowLongA(param_1,8);
        _SfHelp_ContextHelp_20(0,param_1,0,2,*(undefined4 *)(LVar2 + 0x10c));
        return 0;
      }
      if (param_2 == 0x4e) {
        uVar1 = FUN_0101c8b0(param_1,param_4);
        return uVar1;
      }
    }
  }
  else if (param_2 == 0x110) {
    if ((param_4 != 0) && (*(int *)(param_4 + 0x40) != 0)) {
      SetWindowLongA(param_1,8,*(int *)(param_4 + 0x40));
      local_24 = *(int *)(param_4 + 0x40);
    }
    pHVar3 = GetParent(param_1);
    iVar6 = 0;
    pHVar4 = GetDlgItem(pHVar3,0x460);
    ShowWindow(pHVar4,iVar6);
    pHVar4 = GetDlgItem(param_1,0x4a1);
    pHVar5 = GetDlgItem(pHVar3,0x442);
    GetWindowRect(pHVar5,&local_20);
    MapWindowPoints((HWND)0x0,pHVar3,(LPPOINT)&local_20,2);
    SetParent(pHVar4,pHVar3);
    SetWindowPos(pHVar4,pHVar5,local_20.left,local_20.top,local_20.right - local_20.left,
                 local_20.bottom - local_20.top,0x40);
    pHVar4 = GetDlgItem(param_1,0x148);
    pHVar5 = GetDlgItem(pHVar3,0x480);
    local_c = local_20.top;
    local_10 = local_20.left;
    local_8 = local_20.right;
    local_4 = local_20.bottom;
    GetWindowRect(pHVar5,&local_20);
    MapWindowPoints((HWND)0x0,pHVar3,(LPPOINT)&local_20,2);
    local_20.top = local_c;
    local_20.bottom = local_4;
    SetParent(pHVar4,pHVar3);
    SetWindowPos(pHVar4,pHVar5,local_20.left,local_20.top,local_20.right - local_20.left,
                 local_20.bottom - local_20.top,0x40);
    if ((local_24 != 0) && (*(int *)(local_24 + 0x110) == 0)) {
      iVar6 = 0;
      pHVar4 = GetDlgItem(pHVar3,0x441);
      ShowWindow(pHVar4,iVar6);
      iVar6 = 0;
      pHVar3 = GetDlgItem(pHVar3,0x470);
      ShowWindow(pHVar3,iVar6);
    }
    return 1;
  }
  return 0;
}


