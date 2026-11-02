/* Module: sftrans1.dll
   Function: FUN_00487d40
   Address: 00487d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00487d40(int param_1,wchar_t *param_2,int param_3)

{
  int *piVar1;
  wchar_t *_Str1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  HWND pHVar5;
  size_t sVar6;
  HDC hdc;
  DWORD DVar7;
  int *piVar8;
  WPARAM *pWVar9;
  int iVar10;
  undefined4 uVar11;
  size_t lParam;
  wchar_t *local_108;
  int *local_104;
  int local_100;
  undefined4 *****local_fc;
  HINSTANCE local_f8;
  undefined4 local_f4;
  HWND local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  char *local_d8;
  char *local_d4;
  undefined4 local_d0;
  wchar_t local_cc [102];
  
  piVar8 = (int *)(param_1 + 0x100);
  iVar3 = FUN_0048c9a0(piVar8);
  if (iVar3 == 0) {
    return 0;
  }
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + *piVar8 * 4);
  piVar4 = (int *)FUN_00486910(*piVar8);
  if (piVar4 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = 1 < piVar4[3];
  }
  iVar3 = *(int *)(param_1 + 0x3c) + 2 + *(int *)(param_1 + 0x94);
  *(int *)(param_1 + 0x84) = iVar3;
  if ((bVar2) && (0 < *(int *)(param_1 + 0x104))) {
    *(int *)(param_1 + 0x84) = *(int *)(piVar1[2] + -4 + *(int *)(param_1 + 0x104) * 4) + 1 + iVar3;
  }
  local_104 = piVar4;
  iVar3 = FUN_004864f0(*piVar8);
  *(int *)(param_1 + 0x88) = iVar3 + 1;
  if ((bVar2) && (*(int *)(param_1 + 0x104) <= piVar4[3] + -2)) {
    *(int *)(param_1 + 0x8c) =
         *(int *)(piVar1[2] + *(int *)(param_1 + 0x104) * 4) + -1 + *(int *)(param_1 + 0x84);
  }
  else {
    if (*piVar1 == -1) {
      iVar10 = *piVar8 + -1;
      if ((iVar10 < 0) || (**(int **)(param_1 + 0xa4) <= iVar10)) goto LAB_00487e5c;
      piVar4 = *(int **)(*(int *)((*(int **)(param_1 + 0xa4))[2] + -4 + *piVar8 * 4) + 8);
      if (piVar4 == (int *)0x0) {
        *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x9c) + -2;
        goto LAB_00487e6b;
      }
      iVar10 = *(int *)(param_1 + 0x84) + -1 + *piVar4;
    }
    else {
LAB_00487e5c:
      iVar10 = *(int *)(param_1 + 0x9c) + -2;
    }
    *(int *)(param_1 + 0x8c) = iVar10;
  }
LAB_00487e6b:
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x38) + -2 + iVar3 + 1;
  FUN_0048c830(*piVar8,1,1);
  local_f0 = *(HWND *)(param_1 + 4);
  local_e4 = *(int *)(param_1 + 0x88);
  local_fc = &local_fc;
  local_f8 = DAT_0057b880;
  local_e0 = *(int *)(param_1 + 0x84);
  local_ec = *(int *)(param_1 + 0x90) - local_e4;
  local_e8 = *(int *)(param_1 + 0x8c) - local_e0;
  local_f4 = 0;
  local_dc = 0x40000080;
  local_d8 = "SF CreditTxtCtl RichEditbox popup";
  local_d4 = "RichEdit20A";
  local_d0 = 8;
  pHVar5 = CreateWindowExA(8,"RichEdit20A","SF CreditTxtCtl RichEditbox popup",0x40000080,local_e0,
                           local_e4,local_e8,local_ec,local_f0,(HMENU)0x1,DAT_0057b880,&local_fc);
  *(HWND *)(param_1 + 0x10c) = pHVar5;
  GetLastError();
  if (*(int *)(param_1 + 0x10c) == 0) {
    return 0;
  }
  local_108 = param_2;
  if (((param_2 != (wchar_t *)0x0) && (sVar6 = wcslen(param_2), sVar6 == 0)) && (piVar1[1] != 0)) {
    param_2 = *(wchar_t **)(piVar1[1] + *(int *)(param_1 + 0x104) * 4);
    local_108 = param_2;
  }
  SendMessageA(*(HWND *)(param_1 + 0x10c),0xc,0,0);
  SendMessageA(*(HWND *)(param_1 + 0x10c),0x459,1,0);
  if (param_2 == (wchar_t *)0x0) {
    uVar11 = *(undefined4 *)(param_1 + 0x10c);
    param_2 = L"";
  }
  else {
    uVar11 = *(undefined4 *)(param_1 + 0x10c);
  }
  FUN_00487830(uVar11,param_2);
  hdc = GetDC(*(HWND *)(param_1 + 0x10c));
  DVar7 = GetSysColor(5);
  SetBkColor(hdc,DVar7);
  DVar7 = GetSysColor(8);
  SetTextColor(hdc,DVar7);
  ReleaseDC(*(HWND *)(param_1 + 0x10c),hdc);
  piVar8 = local_104;
  if (*piVar1 == -1) {
    iVar3 = *(int *)(param_1 + 0x100) + -1;
    if ((iVar3 < 0) || (**(int **)(param_1 + 0xa4) <= iVar3)) {
      uVar11 = FUN_00486990(1);
      piVar8 = (int *)FUN_00486940(uVar11);
    }
    else {
      piVar8 = (int *)FUN_00486910(iVar3);
    }
  }
  if (piVar8 == (int *)0x0) {
    iVar3 = *(int *)(param_1 + 0x2c);
joined_r0x0048806b:
    if (iVar3 == 0) {
      iVar3 = param_1 + 8;
    }
    pWVar9 = (WPARAM *)(iVar3 + 0x18);
  }
  else {
    pWVar9 = (WPARAM *)(piVar8 + 5);
    if ((piVar8[5] == 0) || (pWVar9 == (WPARAM *)0x0)) {
      iVar3 = *(int *)(param_1 + 0x2c);
      if (*piVar8 != 0) goto joined_r0x0048806b;
      if (iVar3 == 0) {
        iVar3 = param_1 + 8;
      }
      pWVar9 = (WPARAM *)(iVar3 + 0x1c);
    }
  }
  SendMessageA(*(HWND *)(param_1 + 0x10c),0x30,*pWVar9,0);
  if (param_3 == 0) {
    if (local_108 == (wchar_t *)0x0) goto LAB_004880b8;
    sVar6 = wcslen(local_108);
  }
  else {
    if (local_108 != (wchar_t *)0x0) {
      pHVar5 = *(HWND *)(param_1 + 0x10c);
      sVar6 = 0;
      lParam = 0xffffffff;
      goto LAB_004880c8;
    }
LAB_004880b8:
    sVar6 = 0;
  }
  pHVar5 = *(HWND *)(param_1 + 0x10c);
  lParam = sVar6;
LAB_004880c8:
  SendMessageA(pHVar5,0xb1,sVar6,lParam);
  ShowWindow(*(HWND *)(param_1 + 0x10c),5);
  *(undefined4 *)(param_1 + 0x108) = 1;
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
  SetActiveWindow(*(HWND *)(param_1 + 0x10c));
  SetFocus(*(HWND *)(param_1 + 0x10c));
  piVar8 = (int *)(param_1 + 0x100);
  local_100 = 0;
  FUN_0048c310(6,*(undefined4 *)(param_1 + 0x100),0);
  iVar3 = FUN_004879b0(*piVar1,&local_100);
  FUN_00487960(*(undefined4 *)(param_1 + 0x10c),200,local_cc);
  ShowWindow(*(HWND *)(param_1 + 0x10c),0);
  local_104 = (int *)wcslen(local_cc);
  if ((iVar3 == 1) || ((iVar3 == 2 && (0 < (int)local_104)))) {
    if (*piVar1 == -1) {
      iVar3 = *piVar8;
      uVar11 = 1;
      if ((-1 < iVar3 + -1) && (iVar3 + -1 < **(int **)(param_1 + 0xa4))) {
        uVar11 = **(undefined4 **)((*(int **)(param_1 + 0xa4))[2] + -4 + iVar3 * 4);
      }
      FUN_0048c380(iVar3,uVar11);
    }
    if (((*(int *)(piVar1[1] + *(int *)(param_1 + 0x104) * 4) == 0) &&
        (iVar3 = wcscmp(local_cc,L""), iVar3 != 0)) ||
       ((_Str1 = *(wchar_t **)(piVar1[1] + *(int *)(param_1 + 0x104) * 4), _Str1 != (wchar_t *)0x0
        && (iVar3 = wcscmp(_Str1,local_cc), iVar3 != 0)))) {
      FUN_00486350(local_cc,9,0x20);
      local_108 = local_cc;
      FUN_00486e50(piVar1[1] + *(int *)(param_1 + 0x104) * 4,&local_108,(int)local_104 + 1);
      FUN_0048c310(0,*piVar8,0);
    }
  }
  SetFocus(*(HWND *)(param_1 + 4));
  DestroyWindow(*(HWND *)(param_1 + 0x10c));
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  FUN_0048c310(7,*piVar8,0);
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
  if ((local_100 != 0) && (iVar3 = FUN_0048c9f0(piVar8,1), iVar3 != 0)) {
    FUN_00487d40(&DAT_005633f8,1);
  }
  return 1;
}


