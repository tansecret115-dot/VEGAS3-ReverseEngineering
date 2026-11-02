/* Module: vegas30.exe
   Function: FUN_005079a0
   Address: 005079a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005079a0(HWND param_1)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  LRESULT LVar4;
  WPARAM wParam;
  uint uVar5;
  HWND hWnd;
  uint uVar6;
  undefined4 *puVar7;
  code *pcVar8;
  undefined4 *puVar9;
  
  pcVar8 = GetDlgItem_exref;
  pHVar3 = GetDlgItem(param_1,0x434);
  LVar4 = SendMessageA(pHVar3,0x147,0,0);
  iVar2 = *(int *)(DAT_0064e51c + LVar4 * 4);
  pHVar3 = GetDlgItem(param_1,0x435);
  LVar4 = SendMessageA(pHVar3,0x188,0,0);
  if (LVar4 != -1) {
    pHVar3 = GetDlgItem(param_1,0x437);
    wParam = SendMessageA(pHVar3,0x188,0,0);
    SendMessageA(pHVar3,0x182,wParam,0);
    uVar5 = 3 - wParam;
    if (uVar5 != 0) {
      iVar1 = wParam + LVar4 * 10;
      puVar7 = (undefined4 *)(iVar2 + 0xc + iVar1 * 2);
      puVar9 = (undefined4 *)(iVar2 + 10 + iVar1 * 2);
      for (uVar6 = (uVar5 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar5 * 2 & 3; pcVar8 = GetDlgItem_exref, uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    *(undefined2 *)(iVar2 + 0x10 + LVar4 * 0x14) = 0;
    pHVar3 = param_1;
    hWnd = (HWND)(*pcVar8)(param_1,0x439,1);
    EnableWindow(hWnd,(BOOL)pHVar3);
    pHVar3 = (HWND)(*pcVar8)(param_1,0x43a,0);
    EnableWindow(pHVar3,(BOOL)param_1);
  }
  return;
}


