/* Module: vidcap30.exe
   Function: FUN_00457420
   Address: 00457420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00457420(HWND param_1,int param_2)

{
  LPCSTR lpString2;
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  HWND pHVar4;
  HANDLE h;
  HFONT wParam;
  uint uVar5;
  UINT uCheck;
  int iVar6;
  undefined *puVar7;
  char *pcVar8;
  tagRECT local_4c;
  LOGFONTA local_3c;
  
  iVar2 = FUN_004349c0();
  puVar7 = &DAT_005bb680;
  if (iVar2 == 0) {
    puVar7 = &DAT_005bb57c;
  }
  SetWindowLongA(param_1,8,param_2);
  if (*(int *)(param_2 + 8) == 0) {
    pcVar8 = "%s - Still";
  }
  else {
    pcVar8 = "%s - Clip";
  }
  SfPrintF(param_2 + 0x10,pcVar8,puVar7);
  *(uint *)(param_2 + 0x188) = (-(uint)(DAT_005bb218 != 0) & 3) + 4;
  puVar7 = &DAT_005b5f90;
  if (DAT_005bb218 == 0) {
    puVar7 = &DAT_005b5f50;
  }
  *(undefined **)(param_2 + 0x18c) = puVar7;
  FUN_0041f710(param_2 + 0x8c,0x46a);
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0x188)) {
    iVar6 = 0;
    puVar3 = (undefined4 *)(param_2 + 0x98);
    do {
      uVar1 = *puVar3;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
      *(undefined4 *)(*(int *)(param_2 + 0x18c) + 0xc + iVar6) = uVar1;
      iVar6 = iVar6 + 0x10;
    } while (iVar2 < *(int *)(param_2 + 0x188));
  }
  pHVar4 = GetDlgItem(param_1,0x4e3);
  h = (HANDLE)SendMessageA(pHVar4,0x31,0,0);
  GetObjectA(h,0x3c,&local_3c);
  local_3c.lfWeight = 700;
  wParam = CreateFontIndirectA(&local_3c);
  *(HFONT *)(param_2 + 4) = wParam;
  SendMessageA(pHVar4,0x30,(WPARAM)wParam,0);
  pHVar4 = GetDlgItem(param_1,0x9c80);
  SendMessageA(pHVar4,0x1036,0x30,0x30);
  SendMessageA(pHVar4,0x1003,1,DAT_005bb9d0);
  SendMessageA(pHVar4,0x1003,0,DAT_005bb9c0);
  FUN_0041f790(pHVar4,*(undefined4 *)(param_2 + 0x18c),*(undefined4 *)(param_2 + 0x188));
  SendMessageA(pHVar4,0x103a,*(WPARAM *)(param_2 + 0x188),param_2 + 0x110);
  uVar5 = GetWindowLongA(pHVar4,-0x10);
  if (DAT_005bb21c == 0) {
    uVar5 = uVar5 & 0xfffffffe;
  }
  else {
    uVar5 = uVar5 | 1;
  }
  SetWindowLongA(pHVar4,-0x10,uVar5);
  GetClientRect(param_1,&local_4c);
  *(LONG *)(param_2 + 0x198) = local_4c.right - local_4c.left;
  *(LONG *)(param_2 + 0x19c) = local_4c.bottom - local_4c.top;
  GetWindowRect(param_1,&local_4c);
  *(LONG *)(param_2 + 400) = local_4c.right - local_4c.left;
  *(LONG *)(param_2 + 0x194) = local_4c.bottom - local_4c.top;
  if (local_4c.right <= DAT_005bb220 + local_4c.left) {
    local_4c.right = DAT_005bb220 + local_4c.left;
  }
  if (local_4c.bottom <= DAT_005bb224 + local_4c.top) {
    local_4c.bottom = DAT_005bb224 + local_4c.top;
  }
  SetWindowPos(param_1,(HWND)0x0,local_4c.left,local_4c.top,local_4c.right - local_4c.left,
               local_4c.bottom - local_4c.top,6);
  FUN_00457f70(param_1,param_2,DAT_005bb214);
  FUN_00458000(param_1,param_2);
  if ((*(int *)(param_2 + 0xc) != 0) && (DAT_005bba9c != '\0')) {
    lpString2 = (LPCSTR)(param_2 + 0x10);
    iVar2 = lstrcmpiA(&DAT_005bba9c,lpString2);
    if (iVar2 != 0) {
      SfPrintF(lpString2,&DAT_005bba9c);
      FUN_00456c20(param_1,lpString2);
    }
  }
  pcVar8 = "Show after every video &capture session";
  if (*(int *)(param_2 + 8) == 0) {
    pcVar8 = "Show after every still &capture session";
  }
  SetDlgItemTextA(param_1,0x4e8,pcVar8);
  uCheck = DAT_005bb20c;
  if (*(int *)(param_2 + 8) == 0) {
    uCheck = DAT_005bb210;
  }
  CheckDlgButton(param_1,0x4e8,uCheck);
  _SfWndCenter_16(param_1,0,0,0x8001);
  return;
}


