/* Module: vidcap30.exe
   Function: FUN_0043c720
   Address: 0043c720
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043c720(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  WPARAM wParam;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  HWND pHVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  LRESULT LVar12;
  undefined4 *puVar13;
  int local_50;
  DWORD local_4c;
  int local_30 [7];
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  iVar1 = GetSystemMetrics(6);
  iVar1 = iVar1 * 2;
  iVar2 = GetSystemMetrics(0x2e);
  iVar2 = iVar2 * 2;
  iVar3 = GetSystemMetrics(5);
  iVar4 = GetSystemMetrics(0x2d);
  local_50 = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  wParam = _SfGetUIFont_4(100);
  uVar5 = _SfGetUIFont_4(100);
  uVar6 = _SfGetUIFont_4(100);
  local_4c = 0x40810148;
  piVar7 = (int *)_SfGetUIFontSize_4(100);
  local_30[6] = *piVar7;
  local_14 = piVar7[1];
  if (DAT_005bb558 == 2) {
    local_4c = 0x4081014b;
  }
  else if (DAT_005bb558 != 0) {
    local_4c = 0x40810149;
  }
  pHVar8 = CreateWindowExA(0x200,"EDIT","",0x40810080,0,0,0,0,*(HWND *)(param_1 + 8),(HMENU)0x218,
                           DAT_005ba298,(LPVOID)0x0);
  *(HWND *)(param_1 + 0x14dc) = pHVar8;
  SendMessageA(pHVar8,0x30,wParam,0);
  pHVar8 = CreateWindowExA(0x200,"COMBOBOX","",0x40810102,0,0,0,0,*(HWND *)(param_1 + 8),
                           (HMENU)0x21a,DAT_005ba298,(LPVOID)0x0);
  *(HWND *)(param_1 + 0x14e0) = pHVar8;
  SendMessageA(pHVar8,0x30,wParam,0);
  pHVar8 = CreateWindowExA(0x200,"EDIT","",0x40810080,0,0,0,0,*(HWND *)(param_1 + 8),(HMENU)0x21e,
                           DAT_005ba298,(LPVOID)0x0);
  *(HWND *)(param_1 + 0x14e8) = pHVar8;
  SendMessageA(pHVar8,0x30,wParam,0);
  pHVar8 = CreateWindowExA(0x200,"COMBOBOX","",0x40810002,0,0,0,0,*(HWND *)(param_1 + 8),
                           (HMENU)0x21c,DAT_005ba298,(LPVOID)0x0);
  *(HWND *)(param_1 + 0x14e4) = pHVar8;
  SendMessageA(pHVar8,0x30,wParam,0);
  FUN_0044e240(*(undefined4 *)(param_1 + 0x14e4));
  pHVar8 = CreateWindowExA(0x200,"EDIT","",0x40810082,0,0,0,0,*(HWND *)(param_1 + 8),(HMENU)0x220,
                           DAT_005ba298,(LPVOID)0x0);
  *(HWND *)(param_1 + 0x14ec) = pHVar8;
  SendMessageA(pHVar8,0x30,wParam,0);
  pHVar8 = CreateWindowExA(0x200,"EDIT","",0x40810082,0,0,0,0,*(HWND *)(param_1 + 8),(HMENU)0x222,
                           DAT_005ba298,(LPVOID)0x0);
  *(HWND *)(param_1 + 0x14f0) = pHVar8;
  SendMessageA(pHVar8,0x30,wParam,0);
  pHVar8 = CreateWindowExA(0x200,"EDIT","",0x40810082,0,0,0,0,*(HWND *)(param_1 + 8),(HMENU)0x224,
                           DAT_005ba298,(LPVOID)0x0);
  *(HWND *)(param_1 + 0x14f4) = pHVar8;
  SendMessageA(pHVar8,0x30,wParam,0);
  uVar9 = FUN_00460780(*(undefined4 *)(param_1 + 8),0x219,"Clip name:",0x200,0x20,&local_10);
  *(undefined4 *)(param_1 + 0x14f8) = uVar9;
  FUN_00460850(uVar9,0x30,uVar5,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x14f8),0x607,0,local_30);
  iVar10 = *(int *)(param_1 + 0x1644);
  if (*(int *)(param_1 + 0x1644) <= local_30[0]) {
    iVar10 = local_30[0];
  }
  *(int *)(param_1 + 0x1644) = iVar10;
  uVar9 = FUN_00460780(*(undefined4 *)(param_1 + 8),0x21b,"Tape name:",0x200,0x20,&local_10);
  *(undefined4 *)(param_1 + 0x14fc) = uVar9;
  FUN_00460850(uVar9,0x30,uVar5,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x14fc),0x607,0,local_30);
  iVar10 = *(int *)(param_1 + 0x1644);
  if (*(int *)(param_1 + 0x1644) <= local_30[0]) {
    iVar10 = local_30[0];
  }
  *(int *)(param_1 + 0x1644) = iVar10;
  uVar9 = FUN_00460780(*(undefined4 *)(param_1 + 8),0x21f,"Comment:",0x200,0x20,&local_10);
  *(undefined4 *)(param_1 + 0x1504) = uVar9;
  FUN_00460850(uVar9,0x30,uVar5,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x1504),0x607,0,local_30);
  iVar10 = *(int *)(param_1 + 0x1644);
  if (*(int *)(param_1 + 0x1644) <= local_30[0]) {
    iVar10 = local_30[0];
  }
  *(int *)(param_1 + 0x1644) = iVar10;
  uVar9 = FUN_00460780(*(undefined4 *)(param_1 + 8),0x21d,"Rating:",0x200,0x20,&local_10);
  *(undefined4 *)(param_1 + 0x1500) = uVar9;
  FUN_00460850(uVar9,0x30,uVar5,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x1500),0x607,0,local_30);
  iVar10 = *(int *)(param_1 + 0x1644);
  if (*(int *)(param_1 + 0x1644) <= local_30[0]) {
    iVar10 = local_30[0];
  }
  *(int *)(param_1 + 0x1644) = iVar10;
  uVar9 = FUN_00460780(*(undefined4 *)(param_1 + 8),0x221,"Timecode in:",0x200,0x20,&local_10);
  *(undefined4 *)(param_1 + 0x1508) = uVar9;
  FUN_00460850(uVar9,0x30,uVar5,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x1508),0x607,0,local_30);
  iVar10 = *(int *)(param_1 + 0x1644);
  if (*(int *)(param_1 + 0x1644) <= local_30[0]) {
    iVar10 = local_30[0];
  }
  *(int *)(param_1 + 0x1644) = iVar10;
  uVar9 = FUN_00460780(*(undefined4 *)(param_1 + 8),0x223,"Timecode out:",0x200,0x20,&local_10);
  *(undefined4 *)(param_1 + 0x150c) = uVar9;
  FUN_00460850(uVar9,0x30,uVar5,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x150c),0x607,0,local_30);
  iVar10 = *(int *)(param_1 + 0x1644);
  if (*(int *)(param_1 + 0x1644) <= local_30[0]) {
    iVar10 = local_30[0];
  }
  *(int *)(param_1 + 0x1644) = iVar10;
  uVar9 = FUN_00460780(*(undefined4 *)(param_1 + 8),0x225,"Length:",0x200,0x20,&local_10);
  *(undefined4 *)(param_1 + 0x1510) = uVar9;
  FUN_00460850(uVar9,0x30,uVar5,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x1510),0x607,0,local_30);
  iVar10 = *(int *)(param_1 + 0x1644);
  if (*(int *)(param_1 + 0x1644) <= local_30[0]) {
    iVar10 = local_30[0];
  }
  *(int *)(param_1 + 0x1644) = iVar10;
  uVar5 = FUN_00430bf0(*(undefined4 *)(param_1 + 8),0x19,&DAT_005b5620,2,0,0);
  *(undefined4 *)(param_1 + 0x1514) = uVar5;
  FUN_00430860(uVar5,1,DAT_005bb9a4,DAT_005bb9a8,DAT_005bb9ac,DAT_005bb9a8,DAT_005bb998,
               &DAT_005bb99c,100,&LAB_004316b0);
  uVar5 = FUN_00430bf0(*(undefined4 *)(param_1 + 8),0x19,&DAT_005b5648,2,0,0);
  *(undefined4 *)(param_1 + 0x1518) = uVar5;
  FUN_00430860(uVar5,1,DAT_005bb9a4,DAT_005bb9a8,DAT_005bb9ac,DAT_005bb9a8,DAT_005bb998,
               &DAT_005bb99c,100,&LAB_004316b0);
  local_30[3] = DAT_005bb9a0;
  local_30[2] = DAT_005bb99c;
  uVar5 = FUN_00430bf0(*(undefined4 *)(param_1 + 8),0x1b,&DAT_005b5670,3,0,0);
  *(undefined4 *)(param_1 + 0x151c) = uVar5;
  puVar13 = &DAT_005b5680;
  do {
    piVar7 = local_30 + 4;
    uVar9 = 0xffffffff;
    uVar5 = _SfGetString_8(DAT_005ba2a0,*puVar13);
    _SfGetTextExtent_16(uVar6,uVar5,uVar9,piVar7);
    if (local_50 <= local_30[4]) {
      local_50 = local_30[4];
    }
    puVar13 = puVar13 + 5;
  } while (puVar13 < &DAT_005b56bc);
  local_30[2] = local_30[2] + 8 + local_50;
  FUN_00430860(*(undefined4 *)(param_1 + 0x151c),1,DAT_005bb9a4,DAT_005bb9a8,DAT_005bb9ac,
               DAT_005bb9a8,DAT_005bb998,local_30 + 2,100,&LAB_004316b0);
  FUN_0042ffb0(*(undefined4 *)(param_1 + 0x151c),param_1 + 0x1410);
  uVar5 = FUN_0045b610(*(undefined4 *)(param_1 + 8),0x226,DAT_005bb9a4,DAT_005bb9a8,0,&DAT_005b56b0,
                       7,param_1 + 0x1788);
  *(undefined4 *)(param_1 + 0x1664) = uVar5;
  pHVar8 = CreateWindowExA(0x200,"SysListView32","",local_4c,0,0,0,0,*(HWND *)(param_1 + 8),
                           (HMENU)0x227,DAT_005ba298,(LPVOID)0x0);
  *(HWND *)(param_1 + 0x1668) = pHVar8;
  iVar10 = FUN_0041f710(param_1 + 0x166c,0x47e);
  if (iVar10 == 0) {
    puVar11 = &DAT_005b574c;
    puVar13 = (undefined4 *)(param_1 + 0x1678);
    do {
      uVar5 = *puVar13;
      puVar13 = puVar13 + 1;
      *puVar11 = uVar5;
      puVar11 = puVar11 + 4;
    } while (puVar11 < &DAT_005b576c);
  }
  FUN_0041f790(*(undefined4 *)(param_1 + 0x1668),&DAT_005b5740,2);
  SendMessageA(*(HWND *)(param_1 + 0x1668),0x1036,0x20,0x20);
  SendMessageA(*(HWND *)(param_1 + 0x1668),0x1003,1,DAT_005bb9d0);
  SendMessageA(*(HWND *)(param_1 + 0x1668),0x103a,0x1e,param_1 + 0x16f0);
  SendMessageA(*(HWND *)(param_1 + 0x1668),0x1003,0,DAT_005bb9c0);
  FUN_0042ffb0(*(undefined4 *)(param_1 + 0x1514),param_1 + 0x1654);
  SendMessageA(*(HWND *)(param_1 + 0x14dc),0xb2,0,(LPARAM)&local_10);
  *(int *)(param_1 + 0x1630) = (iVar2 - local_c) + iVar1 + local_4;
  *(int *)(param_1 + 0x1634) = iVar2 + (local_4 - local_c) * 3 + iVar1;
  LVar12 = SendMessageA(*(HWND *)(param_1 + 0x14e4),0x154,0xffffffff,0);
  *(LRESULT *)(param_1 + 0x1638) = LVar12 + iVar2 + iVar1;
  LVar12 = SendMessageA(*(HWND *)(param_1 + 0x14e4),0x154,0,0);
  *(int *)(param_1 + 0x163c) = *(int *)(param_1 + 0x1638) + LVar12 * 0x14 + iVar1;
  *(int *)(param_1 + 0x1648) = iVar4 * 2 + local_30[6] * 0xc + iVar3 * 2;
  *(int *)(param_1 + 0x1640) = (*(int *)(param_1 + 0x1658) - *(int *)(param_1 + 0x1630)) + 4;
  *(int *)(param_1 + 0x165c) = (*(int *)(param_1 + 0x1630) - *(int *)(param_1 + 0x1658)) / 2;
  return;
}


