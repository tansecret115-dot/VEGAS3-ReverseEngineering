/* Module: vegas30.exe
   Function: FUN_00483220
   Address: 00483220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483220(HWND param_1,undefined4 param_2,int param_3)

{
  WPARAM WVar1;
  HWND pHVar2;
  LPCSTR pCVar3;
  int *piVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  LRESULT LVar9;
  int *unaff_EBX;
  int *unaff_EBP;
  code *pcVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  CHAR *pCVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  UINT UVar18;
  BOOL BVar19;
  WPARAM lParam;
  LPARAM LVar20;
  CHAR aCStack_d5c [8];
  CHAR aCStack_d54 [308];
  CHAR aCStack_c20 [1023];
  undefined1 uStack_821;
  WCHAR aWStack_820 [1000];
  undefined4 uStack_50;
  LPCSTR pCStack_48;
  int iStack_40;
  
  pcVar10 = GetDlgItem_exref;
  if (*(int *)(param_3 + 0x214) != 0) {
    pCVar3 = "";
    pHVar2 = GetDlgItem(param_1,0x635);
    SetWindowTextA(pHVar2,pCVar3);
LAB_004837f2:
    pHVar2 = (HWND)(*pcVar10)();
    EnableWindow(pHVar2,(BOOL)param_1);
    return;
  }
  WVar1 = FUN_00483810();
  pcVar10 = GetDlgItem_exref;
  if (WVar1 != 0) {
    pCVar3 = "";
    pHVar2 = GetDlgItem(param_1,0x635);
    SetWindowTextA(pHVar2,pCVar3);
    goto LAB_004837f2;
  }
  UVar18 = 0x147;
  lParam = WVar1;
  pHVar2 = GetDlgItem(param_1,0x63f);
  WVar1 = SendMessageA(pHVar2,UVar18,WVar1,lParam);
  if (WVar1 == 0xffffffff) {
    if (*(int *)(param_3 + 0x218) == 0) {
      pCVar3 = "";
      pHVar2 = GetDlgItem(param_1,0x635);
      pcVar10 = SetWindowTextA_exref;
      SetWindowTextA(pHVar2,pCVar3);
      BVar19 = 0;
      pHVar2 = GetDlgItem(param_1,0x635);
      EnableWindow(pHVar2,BVar19);
    }
    else {
      pCVar3 = (LPCSTR)_SfGetString_8();
      pHVar2 = GetDlgItem(param_1,0x635);
      pcVar10 = SetWindowTextA_exref;
      SetWindowTextA(pHVar2,pCVar3);
    }
    GetDlgItem(param_1,0x438);
    (*pcVar10)();
    BVar19 = 0;
    pHVar2 = GetDlgItem(param_1,0x438);
    EnableWindow(pHVar2,BVar19);
    (**(code **)(*unaff_EBX + 8))();
    return;
  }
  BVar19 = 1;
  pHVar2 = GetDlgItem(param_1,0x635);
  EnableWindow(pHVar2,BVar19);
  LVar20 = 0;
  UVar18 = 0x150;
  pHVar2 = GetDlgItem(param_1,0x63f);
  piVar4 = (int *)SendMessageA(pHVar2,UVar18,WVar1,LVar20);
  uVar5 = (**(code **)(_DAT_00000000 + 0x10))();
  iVar6 = (**(code **)(*piVar4 + 0x24))();
  if (iVar6 == -0x7ffb1fb9) {
    SfShowFioInstallWizard(param_1,DAT_0064b510,uVar5,0,0,0);
    (**(code **)(*unaff_EBP + 8))();
    return;
  }
  iVar17 = 0x400;
  iVar6 = (**(code **)(*(int *)DAT_0064b510 + 0x84))();
  if (-1 < iVar6) {
    if ((&stack0x00000000 == (undefined1 *)0x820) || (aWStack_820[0] != L'\0')) {
      WideCharToMultiByte(0,0,aWStack_820,-1,aCStack_c20,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0xc20) {
      aCStack_c20[0] = '\0';
    }
    pCVar13 = aCStack_c20;
    uStack_821 = 0;
    pHVar2 = GetDlgItem(param_1,0x635);
    SetWindowTextA(pHVar2,pCVar13);
    BVar19 = 1;
    pHVar2 = GetDlgItem(param_1,0x635);
    EnableWindow(pHVar2,BVar19);
  }
  uVar16 = 0;
  uVar14 = uVar5;
  uVar7 = (**(code **)(*(int *)DAT_0064b510 + 0x90))(DAT_0064b510);
  *(undefined4 *)(param_3 + 0x250) = uVar7;
  uVar15 = 0;
  piVar4 = (int *)0x25;
  uVar7 = (**(code **)(*(int *)DAT_0064b510 + 0x90))(DAT_0064b510,uVar5,uVar16,0x25,0,0);
  *(undefined4 *)(param_3 + 0x254) = uVar7;
  iVar6 = FUN_004809a0(*(uint *)(iStack_40 + 0x108) & 2,uVar15,*(undefined4 *)(iStack_40 + 0xa24));
  iVar8 = FUN_004809a0(*(uint *)(iStack_40 + 0x108) & 1,uVar15,*(undefined4 *)(iStack_40 + 0xa24));
  uVar5 = iVar6 + iVar8;
  if (*(int *)(iStack_40 + 0x118) != 0) {
    FUN_004a45b0(DAT_00647630,&stack0xfffff248,&stack0xfffff240);
    if ((-1 < iVar17) && ((0 < iVar17 || (uVar14 != 0)))) {
      uVar7 = 0;
      goto LAB_00483519;
    }
  }
  uVar14 = uVar5;
  uVar7 = *(undefined4 *)(param_3 + 0x23c);
  uVar5 = *(ulong *)(param_3 + 0x238);
  iVar17 = 0;
LAB_00483519:
  uVar12 = __allmul(uVar5,uVar7,uVar14,iVar17);
  uVar12 = __alldiv(uVar12,80000000,0);
  *(undefined8 *)(param_3 + 0x230) = uVar12;
  aCStack_d54[0] = '\0';
  _SfGetByteSizeText_12
            (*(undefined4 *)(param_3 + 0x230),(int)((ulonglong)uVar12 >> 0x20),aCStack_d54);
  iVar6 = lstrlenA(aCStack_d54);
  if (((iVar6 == 0) || (*(int *)(param_3 + 0x234) < 0)) ||
     ((*(int *)(param_3 + 0x234) < 1 && (*(int *)(param_3 + 0x230) == 0)))) {
    pCVar3 = "";
    pHVar2 = GetDlgItem(param_1,0x438);
    SetWindowTextA(pHVar2,pCVar3);
    BVar19 = 0;
    pHVar2 = GetDlgItem(param_1,0x438);
    EnableWindow(pHVar2,BVar19);
    iVar6 = 0;
    pHVar2 = GetDlgItem(param_1,0x646);
    pcVar10 = ShowWindow_exref;
    ShowWindow(pHVar2,iVar6);
    iVar6 = 0;
    pHVar2 = GetDlgItem(param_1,0x438);
    ShowWindow(pHVar2,iVar6);
    iVar6 = 0;
    pHVar2 = GetDlgItem(param_1,0x649);
    ShowWindow(pHVar2,iVar6);
    iVar6 = 0;
    pHVar2 = GetDlgItem(param_1,0x439);
    ShowWindow(pHVar2,iVar6);
    iVar6 = 0;
    pHVar2 = GetDlgItem(param_1,0x64a);
    ShowWindow(pHVar2,iVar6);
    iVar6 = 0;
    pHVar2 = GetDlgItem(param_1,0x434);
    ShowWindow(pHVar2,iVar6);
    uVar7 = 0;
    iVar6 = 0x43a;
  }
  else {
    pCVar13 = aCStack_d54;
    pHVar2 = GetDlgItem(param_1,0x438);
    SetWindowTextA(pHVar2,pCVar13);
    BVar19 = 1;
    pHVar2 = GetDlgItem(param_1,0x438);
    EnableWindow(pHVar2,BVar19);
    iVar6 = 5;
    pHVar2 = GetDlgItem(param_1,0x646);
    pcVar10 = ShowWindow_exref;
    ShowWindow(pHVar2,iVar6);
    iVar6 = 5;
    pHVar2 = GetDlgItem(param_1,0x438);
    ShowWindow(pHVar2,iVar6);
    iVar6 = 5;
    pHVar2 = GetDlgItem(param_1,0x649);
    ShowWindow(pHVar2,iVar6);
    uVar7 = 5;
    iVar6 = 0x439;
  }
  pHVar2 = GetDlgItem(param_1,iVar6);
  (*pcVar10)(pHVar2,uVar7);
  LVar20 = 0;
  WVar1 = 0;
  UVar18 = 0x147;
  pHVar2 = GetDlgItem(param_1,0x434);
  WVar1 = SendMessageA(pHVar2,UVar18,WVar1,LVar20);
  LVar20 = 0;
  UVar18 = 0x150;
  pHVar2 = GetDlgItem(param_1,0x434);
  LVar9 = SendMessageA(pHVar2,UVar18,WVar1,LVar20);
  uVar7 = 1;
  puVar11 = (undefined4 *)&stack0xfffff248;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  uVar12 = __allmul(*(undefined4 *)(param_3 + 0x230),*(undefined4 *)(param_3 + 0x234),10000000,0);
  uVar12 = __alldiv(uVar12,LVar9,LVar9 >> 0x1f);
  _SfNanoTimeToTextEx_20(&stack0xfffff270,&stack0xfffff248,uVar12,uVar7);
  pCVar3 = &stack0xfffff270;
  pHVar2 = GetDlgItem(param_1,0x43a);
  SetWindowTextA(pHVar2,pCVar3);
  FUN_00483880(param_1,uStack_50,pCStack_48,0x104,piVar4,*(undefined4 *)(param_3 + 0x21c));
  pCVar3 = pCStack_48;
  pHVar2 = GetDlgItem(param_1,0x648);
  SetWindowTextA(pHVar2,pCVar3);
  iVar6 = _SfGetRootPathFromFilePath_12(pCStack_48,aCStack_d5c,0x104);
  if (iVar6 < 2) {
    pCVar13 = "";
  }
  else {
    uVar7 = _SfGetDiskFreeSpace_8(aCStack_d5c,0x400);
    uVar12 = __allmul(uVar7,0,0x400,0);
    _SfGetByteSizeText_12(uVar12,aCStack_d5c);
    pCVar13 = aCStack_d5c;
  }
  SetDlgItemTextA(param_1,0x439,pCVar13);
  (**(code **)(*piVar4 + 8))(piVar4);
  return;
}


