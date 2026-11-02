/* Module: vegas30.exe
   Function: FUN_0042b0d0
   Address: 0042b0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b0d0(HWND param_1,undefined4 param_2,int param_3)

{
  WPARAM WVar1;
  HWND pHVar2;
  LPCSTR pCVar3;
  int *piVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_EBX;
  code *pcVar9;
  int *unaff_EBP;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 uVar12;
  CHAR *lpString;
  int iVar13;
  UINT UVar14;
  BOOL BVar15;
  WPARAM lParam;
  LPARAM lParam_00;
  CHAR aCStack_c20 [1023];
  undefined1 uStack_821;
  WCHAR aWStack_820 [1004];
  undefined4 uStack_48;
  LPCSTR pCStack_40;
  
  pcVar9 = GetDlgItem_exref;
  if (*(int *)(param_3 + 0x210) != 0) {
    pCVar3 = "";
    pHVar2 = GetDlgItem(param_1,0x635);
    SetWindowTextA(pHVar2,pCVar3);
LAB_0042b5c9:
    pHVar2 = (HWND)(*pcVar9)();
    EnableWindow(pHVar2,(BOOL)param_1);
    return;
  }
  WVar1 = FUN_0042b5f0();
  pcVar9 = GetDlgItem_exref;
  if (WVar1 != 0) {
    pCVar3 = "";
    pHVar2 = GetDlgItem(param_1,0x635);
    SetWindowTextA(pHVar2,pCVar3);
    goto LAB_0042b5c9;
  }
  UVar14 = 0x147;
  lParam = WVar1;
  pHVar2 = GetDlgItem(param_1,0x63f);
  WVar1 = SendMessageA(pHVar2,UVar14,WVar1,lParam);
  if (WVar1 == 0xffffffff) {
    if (*(int *)(param_3 + 0xc60) == 0) {
      pCVar3 = "";
      pHVar2 = GetDlgItem(param_1,0x635);
      pcVar9 = SetWindowTextA_exref;
      SetWindowTextA(pHVar2,pCVar3);
      BVar15 = 0;
      pHVar2 = GetDlgItem(param_1,0x635);
      EnableWindow(pHVar2,BVar15);
    }
    else {
      pCVar3 = (LPCSTR)_SfGetString_8();
      pHVar2 = GetDlgItem(param_1,0x635);
      pcVar9 = SetWindowTextA_exref;
      SetWindowTextA(pHVar2,pCVar3);
    }
    GetDlgItem(param_1,0x438);
    (*pcVar9)();
    BVar15 = 0;
    pHVar2 = GetDlgItem(param_1,0x438);
    EnableWindow(pHVar2,BVar15);
    (**(code **)(*unaff_EBX + 8))();
    return;
  }
  BVar15 = 1;
  pHVar2 = GetDlgItem(param_1,0x635);
  EnableWindow(pHVar2,BVar15);
  lParam_00 = 0;
  UVar14 = 0x150;
  pHVar2 = GetDlgItem(param_1,0x63f);
  piVar4 = (int *)SendMessageA(pHVar2,UVar14,WVar1,lParam_00);
  uVar5 = (**(code **)(_DAT_00000000 + 0x10))();
  iVar6 = (**(code **)(*piVar4 + 0x24))();
  if (iVar6 == -0x7ffb1fb9) {
    SfShowFioInstallWizard(param_1,DAT_0064b510,uVar5,0,0,0);
    (**(code **)(*unaff_EBP + 8))();
    return;
  }
  iVar13 = 0x400;
  iVar6 = (**(code **)(*(int *)DAT_0064b510 + 0x84))();
  if (-1 < iVar6) {
    if ((&stack0x00000000 == (undefined1 *)0x820) || (aWStack_820[0] != L'\0')) {
      WideCharToMultiByte(0,0,aWStack_820,-1,aCStack_c20,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0xc20) {
      aCStack_c20[0] = '\0';
    }
    lpString = aCStack_c20;
    uStack_821 = 0;
    pHVar2 = GetDlgItem(param_1,0x635);
    SetWindowTextA(pHVar2,lpString);
    BVar15 = 1;
    pHVar2 = GetDlgItem(param_1,0x635);
    EnableWindow(pHVar2,BVar15);
  }
  uVar12 = 0;
  uVar11 = uVar5;
  uVar7 = (**(code **)(*(int *)DAT_0064b510 + 0x90))(DAT_0064b510);
  *(undefined4 *)(param_3 + 0xc50) = uVar7;
  piVar4 = (int *)0x0;
  uVar7 = (**(code **)(*(int *)DAT_0064b510 + 0x90))(DAT_0064b510,uVar5,uVar12,0x25,0);
  *(undefined4 *)(param_3 + 0xc54) = uVar7;
  iVar6 = FUN_004809a0(*(uint *)(pCStack_40 + 0x108) & 2,piVar4,*(undefined4 *)(pCStack_40 + 0xa24))
  ;
  iVar8 = FUN_004809a0(*(uint *)(pCStack_40 + 0x108) & 1,piVar4,*(undefined4 *)(pCStack_40 + 0xa24))
  ;
  uVar5 = iVar6 + iVar8;
  if (*(int *)(pCStack_40 + 0x118) != 0) {
    FUN_004a45b0(DAT_00647630,&stack0xfffff2a4,&stack0xfffff29c);
    if ((-1 < iVar13) && ((0 < iVar13 || (uVar11 != 0)))) {
      uVar7 = 0;
      goto LAB_0042b3c9;
    }
  }
  uVar11 = uVar5;
  uVar7 = *(undefined4 *)(param_3 + 0xc74);
  uVar5 = *(ulong *)(param_3 + 0xc70);
  iVar13 = 0;
LAB_0042b3c9:
  uVar10 = __allmul(uVar5,uVar7,uVar11,iVar13);
  uVar10 = __alldiv(uVar10,80000000,0);
  *(undefined8 *)(param_3 + 0xc68) = uVar10;
  _SfGetByteSizeText_12
            (*(undefined4 *)(param_3 + 0xc68),(int)((ulonglong)uVar10 >> 0x20),&stack0xfffff2ac);
  iVar6 = lstrlenA(&stack0xfffff2ac);
  if (((iVar6 == 0) || (*(int *)(param_3 + 0xc6c) < 0)) ||
     ((*(int *)(param_3 + 0xc6c) < 1 && (*(int *)(param_3 + 0xc68) == 0)))) {
    pCVar3 = "";
    pHVar2 = GetDlgItem(param_1,0x438);
    SetWindowTextA(pHVar2,pCVar3);
    BVar15 = 0;
    pHVar2 = GetDlgItem(param_1,0x438);
    EnableWindow(pHVar2,BVar15);
    iVar6 = 0;
    pHVar2 = GetDlgItem(param_1,0x646);
    ShowWindow(pHVar2,iVar6);
    iVar6 = 0;
    pHVar2 = GetDlgItem(param_1,0x438);
    ShowWindow(pHVar2,iVar6);
    iVar6 = 0;
    pHVar2 = GetDlgItem(param_1,0x649);
    ShowWindow(pHVar2,iVar6);
    iVar6 = 0;
  }
  else {
    pCVar3 = &stack0xfffff2ac;
    pHVar2 = GetDlgItem(param_1,0x438);
    SetWindowTextA(pHVar2,pCVar3);
    BVar15 = 1;
    pHVar2 = GetDlgItem(param_1,0x438);
    EnableWindow(pHVar2,BVar15);
    iVar6 = 5;
    pHVar2 = GetDlgItem(param_1,0x646);
    ShowWindow(pHVar2,iVar6);
    iVar6 = 5;
    pHVar2 = GetDlgItem(param_1,0x438);
    ShowWindow(pHVar2,iVar6);
    iVar6 = 5;
    pHVar2 = GetDlgItem(param_1,0x649);
    ShowWindow(pHVar2,iVar6);
    iVar6 = 5;
  }
  pHVar2 = GetDlgItem(param_1,0x439);
  ShowWindow(pHVar2,iVar6);
  FUN_0042b660(param_1,uStack_48,pCStack_40,0x104,piVar4,*(undefined4 *)(param_3 + 0xc4c));
  pCVar3 = pCStack_40;
  pHVar2 = GetDlgItem(param_1,0x648);
  SetWindowTextA(pHVar2,pCVar3);
  iVar6 = _SfGetRootPathFromFilePath_12(pCStack_40,&stack0xfffff2ac,0x104);
  if (iVar6 < 2) {
    pCVar3 = "";
  }
  else {
    uVar7 = _SfGetDiskFreeSpace_8(&stack0xfffff2ac,0x400);
    uVar10 = __allmul(uVar7,0,0x400,0);
    _SfGetByteSizeText_12(uVar10,&stack0xfffff2ac);
    pCVar3 = &stack0xfffff2ac;
  }
  SetDlgItemTextA(param_1,0x439,pCVar3);
  (**(code **)(*piVar4 + 8))(piVar4);
  return;
}


