/* Module: sfcdi.dll
   Function: FUN_5bf1eac0
   Address: 5bf1eac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1eac0(HWND param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  LONG LVar2;
  ULONG_PTR *pUVar3;
  HWND pHVar4;
  HWND pHVar5;
  HWND pHVar6;
  int iVar7;
  int local_24;
  tagRECT local_20;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_24 = 0;
  if (param_2 < 0x54) {
    if (param_2 == 0x53) {
      if (*(int *)(param_4 + 8) == 0x493) {
        pUVar3 = (ULONG_PTR *)GetWindowLongA(param_1,8);
        FUN_5bf35d70(0,param_1,*pUVar3,*(int *)(param_4 + 8),(int *)&DAT_5bf64f28,
                     (uchar *)pUVar3[0x43]);
        return 1;
      }
      if (*(int *)(param_4 + 8) != 9) {
        return 1;
      }
    }
    else {
      if (param_2 == 2) {
        LVar2 = GetWindowLongA(param_1,8);
        FUN_5bf35f80(0,param_1,0,2,*(uchar **)(LVar2 + 0x10c));
        return 0;
      }
      if (param_2 == 0x4e) {
        uVar1 = FUN_5bf1e980(param_1,param_4);
        return uVar1;
      }
    }
  }
  else if (param_2 == 0x110) {
    if ((param_4 != 0) && (*(int *)(param_4 + 0x40) != 0)) {
      SetWindowLongA(param_1,8,*(int *)(param_4 + 0x40));
      local_24 = *(int *)(param_4 + 0x40);
    }
    pHVar4 = GetParent(param_1);
    iVar7 = 0;
    pHVar5 = GetDlgItem(pHVar4,0x442);
    ShowWindow(pHVar5,iVar7);
    iVar7 = 0;
    pHVar5 = GetDlgItem(pHVar4,0x480);
    ShowWindow(pHVar5,iVar7);
    iVar7 = 0;
    pHVar5 = GetDlgItem(pHVar4,0x460);
    ShowWindow(pHVar5,iVar7);
    pHVar5 = GetDlgItem(param_1,0x494);
    pHVar6 = GetDlgItem(pHVar4,0x442);
    GetWindowRect(pHVar6,&local_20);
    MapWindowPoints((HWND)0x0,pHVar4,(LPPOINT)&local_20,2);
    SetParent(pHVar5,pHVar4);
    SetWindowPos(pHVar5,pHVar6,local_20.left,local_20.top,local_20.right - local_20.left,
                 local_20.bottom - local_20.top,0x40);
    pHVar5 = GetDlgItem(param_1,0x495);
    pHVar6 = GetDlgItem(pHVar4,0x480);
    local_10 = local_20.left;
    local_8 = local_20.right;
    local_c = local_20.top;
    local_4 = local_20.bottom;
    GetWindowRect(pHVar6,&local_20);
    MapWindowPoints((HWND)0x0,pHVar4,(LPPOINT)&local_20,2);
    local_20.top = local_c;
    local_20.bottom = local_4;
    SetParent(pHVar5,pHVar4);
    SetWindowPos(pHVar5,pHVar6,local_20.left,local_20.top,local_20.right - local_20.left,
                 local_20.bottom - local_20.top,0x40);
    if ((local_24 != 0) && (*(int *)(local_24 + 0x110) == 0)) {
      iVar7 = 0;
      pHVar5 = GetDlgItem(pHVar4,0x441);
      ShowWindow(pHVar5,iVar7);
      iVar7 = 0;
      pHVar4 = GetDlgItem(pHVar4,0x470);
      ShowWindow(pHVar4,iVar7);
    }
    return 1;
  }
  return 0;
}


