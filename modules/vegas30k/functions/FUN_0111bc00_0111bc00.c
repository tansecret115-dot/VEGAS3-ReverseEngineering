/* Module: vegas30k.dll
   Function: FUN_0111bc00
   Address: 0111bc00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0111bc00(HWND param_1,int param_2,int param_3)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  WPARAM wParam;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar3 = *(int *)(param_2 + 0x10);
  if ((iVar3 < 1) ||
     (*(int *)(param_2 + 0x120 + iVar3 * 0x38) + *(int *)(param_2 + 0x2c) <= param_3)) {
    if (*(int *)(param_2 + 0xb0) + -1 <= iVar3) {
      return;
    }
    if (param_3 <= *(int *)(param_2 + 0x198 + iVar3 * 0x38) + *(int *)(param_2 + 0x34)) {
      return;
    }
    pvVar1 = GlobalAlloc(0x40,0x38);
    puVar2 = GlobalLock(pvVar1);
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    puVar5 = (undefined4 *)(param_2 + 0x134 + *(int *)(param_2 + 0x10) * 0x38);
    puVar6 = puVar2;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar3 = param_2 + *(int *)(param_2 + 0x10) * 0x38;
    puVar5 = (undefined4 *)(iVar3 + 0x16c);
    puVar6 = (undefined4 *)(iVar3 + 0x134);
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = puVar2;
    puVar6 = (undefined4 *)(param_2 + 0x16c + *(int *)(param_2 + 0x10) * 0x38);
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    pvVar1 = GlobalHandle(puVar2);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(puVar2);
    GlobalFree(pvVar1);
    wParam = *(int *)(param_2 + 0x10) + 1;
  }
  else {
    pvVar1 = GlobalAlloc(0x40,0x38);
    puVar2 = GlobalLock(pvVar1);
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    puVar5 = (undefined4 *)(param_2 + 0x134 + *(int *)(param_2 + 0x10) * 0x38);
    puVar6 = puVar2;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar3 = param_2 + *(int *)(param_2 + 0x10) * 0x38;
    puVar5 = (undefined4 *)(iVar3 + 0xfc);
    puVar6 = (undefined4 *)(iVar3 + 0x134);
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = puVar2;
    puVar6 = (undefined4 *)(param_2 + 0xfc + *(int *)(param_2 + 0x10) * 0x38);
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    pvVar1 = GlobalHandle(puVar2);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(puVar2);
    GlobalFree(pvVar1);
    wParam = *(int *)(param_2 + 0x10) - 1;
  }
  if (-1 < (int)wParam) {
    FUN_0111a680(param_1,param_2);
    SendMessageA(param_1,0x602,wParam,0);
    InvalidateRect(param_1,(RECT *)0x0,1);
  }
  return;
}


