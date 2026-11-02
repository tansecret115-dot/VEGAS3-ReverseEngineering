/* Module: sftrkfx1.dll
   Function: FUN_5cbb04c0
   Address: 5cbb04c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb04c0(HWND param_1,uint *param_2,int param_3)

{
  uint uVar1;
  HGLOBAL pvVar2;
  uint *puVar3;
  int iVar4;
  WPARAM wParam;
  uint *puVar5;
  uint *puVar6;
  
  uVar1 = param_2[4];
  if (((int)uVar1 < 1) || ((int)(param_2[uVar1 * 0xe + 0x26] + param_2[0xb]) <= param_3)) {
    if ((int)(param_2[0x29] - 1) <= (int)uVar1) {
      return;
    }
    if (param_3 <= (int)(param_2[uVar1 * 0xe + 0x44] + param_2[0xd])) {
      return;
    }
    pvVar2 = GlobalAlloc(0x40,0x38);
    puVar3 = GlobalLock(pvVar2);
    puVar5 = param_2 + param_2[4] * 0xe + 0x2b;
    puVar6 = puVar3;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = param_2 + param_2[4] * 0xe + 0x39;
    puVar6 = param_2 + param_2[4] * 0xe + 0x2b;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = puVar3;
    puVar6 = param_2 + param_2[4] * 0xe + 0x39;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    pvVar2 = GlobalHandle(puVar3);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(puVar3);
    GlobalFree(pvVar2);
    wParam = param_2[4] + 1;
  }
  else {
    pvVar2 = GlobalAlloc(0x40,0x38);
    puVar3 = GlobalLock(pvVar2);
    puVar5 = param_2 + param_2[4] * 0xe + 0x2b;
    puVar6 = puVar3;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = param_2 + param_2[4] * 0xe + 0x1d;
    puVar6 = param_2 + param_2[4] * 0xe + 0x2b;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = puVar3;
    puVar6 = param_2 + param_2[4] * 0xe + 0x1d;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    pvVar2 = GlobalHandle(puVar3);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(puVar3);
    GlobalFree(pvVar2);
    wParam = param_2[4] - 1;
  }
  if (-1 < (int)wParam) {
    FUN_5cbaf190(param_1,param_2);
    SendMessageA(param_1,0x602,wParam,0);
    InvalidateRect(param_1,(RECT *)0x0,1);
  }
  return;
}


