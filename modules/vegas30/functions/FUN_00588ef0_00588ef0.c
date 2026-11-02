/* Module: vegas30.exe
   Function: FUN_00588ef0
   Address: 00588ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00588ef0(int param_1,uchar *param_2)

{
  char *pcVar1;
  bool bVar2;
  HWND hWnd;
  HGLOBAL hMem;
  LPVOID pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_ESI;
  undefined4 *puVar7;
  code *pcVar8;
  WPARAM WVar9;
  WPARAM wParam;
  undefined4 *puVar10;
  LPARAM local_ac;
  int local_a8;
  uint local_a0 [3];
  uint uStack_94;
  undefined1 local_90 [12];
  uint local_84;
  int *piStack_7c;
  int local_6c;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    return;
  }
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x3e9);
  pcVar8 = SendMessageA_exref;
  if (hWnd == (HWND)0x0) {
    return;
  }
  SendMessageA(hWnd,0x418,0,(LPARAM)local_90);
  SendMessageA(hWnd,0x40e,0,(LPARAM)local_a0);
  local_ac = 0;
  if (local_a0[0] < local_84) {
    local_ac = *(LPARAM *)(local_6c + local_a0[0] * 0x18);
  }
  if ((param_2 == (uchar *)0x0) || (*param_2 == '\0')) {
    local_84 = *(uint *)(param_1 + 0x24);
    local_6c = *(int *)(param_1 + 0x20);
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      hMem = GlobalAlloc(2,*(int *)(param_1 + 0x24) * 0x18);
      pvVar3 = GlobalLock(hMem);
      *(LPVOID *)(param_1 + 0x28) = pvVar3;
      if (pvVar3 == (LPVOID)0x0) goto LAB_00589077;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    _mbslwr(param_2);
    bVar2 = true;
    local_a8 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar6 = 0;
      do {
        pcVar1 = *(char **)(*(int *)(param_1 + 0x20) + iVar6);
        if ((*pcVar1 == '\0') || (iVar4 = FUN_00588e90(pcVar1,param_2), iVar4 != 0)) {
          if (**(char **)(*(int *)(param_1 + 0x20) + iVar6) == '\0') {
            if (bVar2) goto LAB_0058903c;
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          puVar7 = (undefined4 *)(*(int *)(param_1 + 0x20) + iVar6);
          puVar10 = (undefined4 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c) * 0x18);
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar10 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar10 = puVar10 + 1;
          }
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        }
LAB_0058903c:
        local_a8 = local_a8 + 1;
        iVar6 = iVar6 + 0x18;
        pcVar8 = SendMessageA_exref;
      } while (local_a8 < *(int *)(param_1 + 0x24));
    }
    local_84 = *(uint *)(param_1 + 0x2c);
    local_6c = *(int *)(param_1 + 0x28);
  }
LAB_00589077:
  (*pcVar8)(hWnd,0x419,0,local_90);
  WVar9 = 0;
  wParam = WVar9;
  if ((unaff_ESI != 0) && (uVar5 = 0, uStack_94 != 0)) {
    do {
      wParam = uVar5;
      if (*piStack_7c == unaff_ESI) break;
      uVar5 = uVar5 + 1;
      piStack_7c = piStack_7c + 6;
      wParam = WVar9;
    } while (uVar5 < uStack_94);
  }
  SendMessageA(hWnd,0x40f,wParam,local_ac);
  return;
}


