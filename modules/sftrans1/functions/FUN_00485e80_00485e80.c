/* Module: sftrans1.dll
   Function: FUN_00485e80
   Address: 00485e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00485e80(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  HWND pHVar4;
  HWND pHVar5;
  undefined4 uVar6;
  undefined1 local_10 [12];
  LONG local_4;
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar1 = *param_2;
  if ((uVar1 & 1) == 0) {
    if ((HWND)param_2[2] == (HWND)0x0) {
      return 0;
    }
    BVar3 = IsWindow((HWND)param_2[2]);
    if (BVar3 == 0) {
      return 0;
    }
    param_1[1] = param_2[2];
  }
  else {
    iVar2 = FUN_004c88e0(DAT_0057b888,*(undefined2 *)(param_1 + 4),param_2[1],FUN_00485d40,param_1);
    param_1[1] = iVar2;
    if (iVar2 == 0) {
      GetLastError();
      return 0;
    }
  }
  param_1[2] = uVar1 & 1;
  param_1[5] = param_2[4];
  param_1[6] = param_2[5];
  param_1[7] = param_2[6];
  param_1[8] = param_2[7];
  param_1[9] = param_2[8];
  if (((uVar1 & 2) != 0) || ((uVar1 & 4) != 0)) {
    local_10._4_4_ = 0;
    local_10._8_4_ = 0;
    local_10._0_4_ = 0;
    local_4 = 0;
    pHVar4 = GetDlgItem((HWND)param_1[1],param_2[3]);
    if (pHVar4 != (HWND)0x0) {
      if ((uVar1 & 2) != 0) {
        GetWindowRect(pHVar4,(LPRECT)local_10);
        ScreenToClient((HWND)param_1[1],(LPPOINT)local_10);
        ScreenToClient((HWND)param_1[1],(LPPOINT)(local_10 + 8));
        param_1[5] = local_10._0_4_;
        param_1[6] = local_10._4_4_;
        param_1[7] = local_10._8_4_;
        param_1[8] = local_4;
      }
      if ((uVar1 & 4) != 0) {
        pHVar5 = GetWindow(pHVar4,3);
        param_1[9] = pHVar5;
      }
      DestroyWindow(pHVar4);
    }
  }
  pHVar4 = GetParent((HWND)param_1[1]);
  if (param_1[2] == 0) {
    SetActiveWindow(pHVar4);
    pHVar5 = GetWindow(pHVar4,3);
    SetWindowPos((HWND)param_1[1],pHVar5,0,0,0,0,3);
  }
  param_1[3] = pHVar4;
  if (param_1[1] != 0) {
    FUN_004c5a20(param_1[1],0);
  }
  iVar2 = FUN_004dd740(param_1 + 10,4,4,10,0,0,0,0);
  if (iVar2 != 0) {
    return 0;
  }
  uVar6 = (**(code **)*param_1)();
  return uVar6;
}


