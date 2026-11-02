/* Module: vegas30k.dll
   Function: FUN_011487f0
   Address: 011487f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011487f0(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  HWND hWnd;
  bool bVar1;
  bool bVar2;
  int iVar3;
  HWND hWnd_00;
  WPARAM wParam;
  uint uVar4;
  LRESULT LVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint **ppuVar9;
  undefined4 local_3c;
  undefined4 local_38;
  WPARAM local_30;
  uint *local_28 [4];
  int local_18;
  
  iVar3 = (int)param_1;
  hWnd = *(HWND *)((int)param_1 + 0x1c);
  bVar2 = true;
  local_3c = param_3;
  local_38 = param_4;
  param_1 = *(HWND *)((int)param_1 + 0x18);
  SendMessageA(hWnd,0x1012,0,(LPARAM)&local_3c);
  wParam = SendMessageA(hWnd,0x100c,0xffffffff,8);
  if ((param_5 == 0) && (local_30 != 0xffffffff)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((local_30 == wParam) && (!bVar1)) {
    if (local_30 != 0xffffffff) {
      *(undefined4 *)(iVar3 + 0x4a0) = *(undefined4 *)(iVar3 + 0x4a0);
      return;
    }
    goto LAB_01148a8d;
  }
  if (-1 < (int)wParam) {
    local_18 = 0xf;
    uVar4 = SendMessageA(hWnd,0x102c,wParam,0xf);
    local_28[3] = (uint *)(uVar4 & 0xfffffff7);
    SendMessageA(hWnd,0x102b,wParam,(LPARAM)local_28);
    FUN_01147860(hWnd,wParam);
    *(uint *)(iVar3 + 0x4a4) = *(uint *)(iVar3 + 0x4a4) & 0xfffffff7;
  }
  hWnd_00 = param_1;
  if ((int)local_30 < 0) {
LAB_01148924:
    LVar5 = SendMessageA(hWnd_00,0x110a,9,0);
    iVar6 = FUN_0112f650(hWnd_00,LVar5,&param_1);
    if (param_1 == (HWND)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = param_1->unused;
    }
    if ((iVar6 < 0) || (iVar8 + -1 < iVar6)) {
      puVar7 = (uint *)0x0;
    }
    else {
      puVar7 = *(uint **)(param_1[2].unused + iVar6 * 4);
    }
    bVar2 = false;
    if (puVar7 != (uint *)0x0) goto LAB_01148979;
    uVar4 = *(uint *)(iVar3 + 0x4a4) & 0xfffffeff;
LAB_01148a07:
    *(uint *)(iVar3 + 0x4a4) = uVar4;
  }
  else {
    LVar5 = SendMessageA(param_1,0x110a,9,0);
    param_1 = (HWND)FUN_0112eb70(hWnd_00,LVar5);
    iVar6 = FUN_011317a0(hWnd,local_30);
    if (param_1 == (HWND)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = param_1->unused;
    }
    if ((iVar6 < 0) || (iVar8 + -1 < iVar6)) {
      puVar7 = (uint *)0x0;
    }
    else {
      puVar7 = *(uint **)(param_1[2].unused + iVar6 * 4);
    }
    if (((*puVar7 & 0x10000) == 0) || (puVar7 == (uint *)0x0)) goto LAB_01148924;
LAB_01148979:
    if ((*(uint *)(iVar3 + 0x4e0) & 0x400) == 0) {
      if (((*(uint *)(iVar3 + 0x4a4) & 0x80) == 0) || ((*(uint *)(iVar3 + 0x4e0) & 0x200) != 0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = 1;
      }
      *(uint *)(iVar3 + 0x4a4) = iVar6 << 2 | *(uint *)(iVar3 + 0x4a4) & 0xfffffffb;
      uVar4 = FUN_01147320(iVar3,puVar7,param_2);
      uVar4 = (uVar4 & 1) << 8 | *(uint *)(iVar3 + 0x4a4) & 0xfffffeff;
      goto LAB_01148a07;
    }
    ppuVar9 = local_28;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppuVar9 = (uint *)0x0;
      ppuVar9 = ppuVar9 + 1;
    }
    local_28[1] = *(uint **)(iVar3 + 4);
    local_28[2] = (uint *)param_2;
    local_28[0] = (uint *)0xf;
    local_18 = iVar3;
    local_28[3] = puVar7;
    (**(code **)(**(int **)(iVar3 + 0x3c) + 0xc))(*(int **)(iVar3 + 0x3c),local_28);
  }
  if ((*(uint *)(iVar3 + 0x4a4) & 0x100) != 0) {
    if ((-1 < (int)local_30) && (bVar2)) {
      local_18 = 0xf;
      uVar4 = SendMessageA(hWnd,0x102c,local_30,0xf);
      local_28[3] = (uint *)(uVar4 | 8);
      SendMessageA(hWnd,0x102b,local_30,(LPARAM)local_28);
      FUN_01147860(hWnd,local_30);
      *(uint *)(iVar3 + 0x4a4) = *(uint *)(iVar3 + 0x4a4) | 8;
    }
    *(uint *)(iVar3 + 0x4a0) = ((*(uint *)(iVar3 + 0x4a4) & 4) != 0) + 0xf;
    return;
  }
LAB_01148a8d:
  *(undefined4 *)(iVar3 + 0x4a0) = 0x7f88;
  return;
}


