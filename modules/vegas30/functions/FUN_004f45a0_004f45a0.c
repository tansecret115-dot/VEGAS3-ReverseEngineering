/* Module: vegas30.exe
   Function: FUN_004f45a0
   Address: 004f45a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f45a0(HWND param_1,int param_2)

{
  HWND pHVar1;
  LPARAM LVar2;
  HWND pHVar3;
  int iVar4;
  int iVar5;
  LONG LVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  code *pcVar11;
  _MEMORYSTATUS local_20;
  
  pHVar1 = GetDlgItem(param_1,0x4f3);
  SendMessageA(pHVar1,0x14b,0,0);
  puVar7 = &DAT_0063f284;
  do {
    LVar2 = _SfGetString_8(DAT_00647204,*puVar7);
    SendMessageA(pHVar1,0x143,0,LVar2);
    puVar7 = puVar7 + 1;
  } while (puVar7 < &DAT_0063f294);
  pHVar1 = GetDlgItem(param_1,0x5ea);
  SendMessageA(pHVar1,0x14b,0,0);
  puVar7 = &DAT_0063f2a0;
  do {
    LVar2 = _SfGetString_8(DAT_00647204,*puVar7);
    SendMessageA(pHVar1,0x143,0,LVar2);
    puVar7 = puVar7 + 1;
  } while (puVar7 < &DAT_0063f2ac);
  pHVar1 = GetDlgItem(param_1,0x440);
  SendMessageA(pHVar1,0x60e,0,0);
  SendMessageA(pHVar1,0x60f,0,0x28);
  pHVar3 = GetDlgItem(param_1,0x43a);
  SendMessageA(pHVar1,0x624,(WPARAM)pHVar3,9);
  pHVar1 = GetDlgItem(param_1,0x441);
  SendMessageA(pHVar1,0x60e,0,0);
  SendMessageA(pHVar1,0x60f,0,0x28);
  pHVar3 = GetDlgItem(param_1,0x4c1);
  SendMessageA(pHVar1,0x624,(WPARAM)pHVar3,9);
  pHVar1 = GetDlgItem(param_1,0x443);
  SendMessageA(pHVar1,0x60e,0,0);
  SendMessageA(pHVar1,0x60f,0,0x14);
  pHVar3 = GetDlgItem(param_1,0x4c2);
  SendMessageA(pHVar1,0x624,(WPARAM)pHVar3,9);
  pHVar1 = GetDlgItem(param_1,0x442);
  SendMessageA(pHVar1,0x60e,0,0);
  SendMessageA(pHVar1,0x60f,0,0x14);
  pHVar3 = GetDlgItem(param_1,0x4c0);
  SendMessageA(pHVar1,0x624,(WPARAM)pHVar3,9);
  local_20.dwLength = 0x20;
  GlobalMemoryStatus(&local_20);
  iVar4 = ftol();
  iVar5 = ftol();
  *(int *)(param_2 + 0x84) = iVar5;
  iVar9 = iVar5 - DAT_0064aef8;
  if (iVar5 - DAT_0064aef8 <= iVar4) {
    iVar9 = iVar4;
  }
  *(int *)(param_2 + 0x80) = iVar9;
  pHVar1 = GetDlgItem(param_1,0x444);
  SendMessageA(pHVar1,0x60e,0,0);
  SendMessageA(pHVar1,0x60f,0,*(LPARAM *)(param_2 + 0x80));
  pHVar3 = GetDlgItem(param_1,0x4c3);
  SendMessageA(pHVar1,0x624,(WPARAM)pHVar3,9);
  uVar10 = *(undefined4 *)(param_2 + 0x80);
  pcVar8 = "Max available: %d MB";
  pHVar1 = GetDlgItem(param_1,0x633);
  SfSetWindowText(pHVar1,pcVar8,uVar10);
  pcVar11 = FUN_004f4830;
  iVar9 = -4;
  pHVar1 = GetDlgItem(param_1,0x4ec);
  LVar6 = SetWindowLongA(pHVar1,iVar9,(LONG)pcVar11);
  pcVar11 = FUN_004f4830;
  iVar9 = -4;
  *(LONG *)(param_2 + 0x7c) = LVar6;
  pHVar1 = GetDlgItem(param_1,0x4ed);
  SetWindowLongA(pHVar1,iVar9,(LONG)pcVar11);
  return;
}


