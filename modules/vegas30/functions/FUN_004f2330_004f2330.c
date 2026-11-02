/* Module: vegas30.exe
   Function: FUN_004f2330
   Address: 004f2330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f2330(HWND param_1,int param_2,uchar *param_3)

{
  char *pcVar1;
  HWND hWnd;
  HGLOBAL hMem;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  WPARAM WVar8;
  WPARAM wParam;
  bool bVar9;
  undefined4 *puVar10;
  int local_b0;
  uint local_ac;
  uint local_a0 [3];
  uint uStack_94;
  undefined1 local_90 [12];
  uint local_84;
  int *piStack_7c;
  int local_6c;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    return;
  }
  hWnd = GetDlgItem(param_1,0x3ed);
  pcVar7 = SendMessageA_exref;
  if (hWnd == (HWND)0x0) {
    return;
  }
  SendMessageA(hWnd,0x418,0,(LPARAM)local_90);
  SendMessageA(hWnd,0x40e,0,(LPARAM)local_a0);
  local_b0 = 0;
  if (local_a0[0] < local_84) {
    local_b0 = *(int *)(local_6c + local_a0[0] * 0x18);
  }
  if ((param_3 == (uchar *)0x0) || (*param_3 == '\0')) {
    local_84 = *(uint *)(param_2 + 0x50);
    local_6c = *(int *)(param_2 + 0x4c);
  }
  else {
    if (*(int *)(param_2 + 0x54) == 0) {
      hMem = GlobalAlloc(2,*(int *)(param_2 + 0x50) * 0x18);
      pvVar2 = GlobalLock(hMem);
      *(LPVOID *)(param_2 + 0x54) = pvVar2;
      if (*(int *)(param_2 + 0x54) == 0) goto LAB_004f24c5;
    }
    *(undefined4 *)(param_2 + 0x58) = 0;
    _mbslwr(param_3);
    bVar9 = true;
    local_ac = 0;
    if (*(int *)(param_2 + 0x50) != 0) {
      iVar5 = 0;
      do {
        pcVar1 = *(char **)(*(int *)(param_2 + 0x4c) + iVar5);
        if ((*pcVar1 == '\0') || (iVar3 = FUN_004f22d0(pcVar1,param_3), iVar3 != 0)) {
          if (**(char **)(*(int *)(param_2 + 0x4c) + iVar5) == '\0') {
            if (bVar9) goto LAB_004f2486;
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          puVar6 = (undefined4 *)(*(int *)(param_2 + 0x4c) + iVar5);
          puVar10 = (undefined4 *)(*(int *)(param_2 + 0x54) + *(int *)(param_2 + 0x58) * 0x18);
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + 1;
        }
LAB_004f2486:
        local_ac = local_ac + 1;
        iVar5 = iVar5 + 0x18;
      } while (local_ac < *(uint *)(param_2 + 0x50));
    }
    local_84 = *(uint *)(param_2 + 0x58);
    local_6c = *(int *)(param_2 + 0x54);
    pcVar7 = SendMessageA_exref;
  }
LAB_004f24c5:
  (*pcVar7)(hWnd,0x419,0,local_90);
  WVar8 = 0;
  wParam = WVar8;
  if ((local_b0 != 0) && (uVar4 = 0, uStack_94 != 0)) {
    do {
      wParam = uVar4;
      if (*piStack_7c == local_b0) break;
      uVar4 = uVar4 + 1;
      piStack_7c = piStack_7c + 6;
      wParam = WVar8;
    } while (uVar4 < uStack_94);
  }
  SendMessageA(hWnd,0x40f,wParam,local_ac);
  return;
}


