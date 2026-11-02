/* Module: vfplugs.dll
   Function: FUN_004739b0
   Address: 004739b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004739b0(HWND param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  WPARAM wParam;
  LONG lParam;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_160;
  int local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  
  lParam = GetWindowLongA(param_1,0);
  if ((*(int *)(lParam + 0x2ec) != 0) && (*(int *)(lParam + 0x2f8) == 1)) {
    iVar2 = *(int *)(*(int *)(lParam + 0x308) + 8);
    iVar5 = *(int *)(*(int *)(lParam + 0x308) + 4) * *(int *)(lParam + 0x2fc);
    puVar6 = (undefined4 *)(iVar5 + iVar2);
    if (*(int *)(iVar5 + 0x150 + iVar2) == 0) {
      local_160 = param_2 - *(int *)(lParam + 0x2f0);
      local_15c = param_3 - *(int *)(lParam + 0x2f4);
    }
    else {
      iVar2 = param_2 - *(int *)(lParam + 0x2f0);
      if (iVar2 < 0) {
        local_160 = 0;
      }
      else {
        local_160 = *(int *)(lParam + 0x2d4) - *(int *)(lParam + 0x2cc);
        if (iVar2 <= local_160) {
          local_160 = iVar2;
        }
      }
      local_15c = param_3 - *(int *)(lParam + 0x2f4);
      if (local_15c < 0) {
        local_15c = 0;
      }
      else {
        iVar2 = *(int *)(lParam + 0x2d8) - *(int *)(lParam + 0x2d0);
        if (iVar2 < local_15c) {
          local_15c = iVar2;
        }
      }
    }
    FUN_00471320(&local_160,(int *)(lParam + 0x2cc),(double *)&local_158);
    *puVar6 = local_158;
    puVar6[1] = local_154;
    puVar6[2] = local_150;
    puVar6[3] = local_14c;
    uVar4 = *(uint *)(*(int *)(lParam + 0x308) + 4);
    puVar7 = puVar6;
    puVar8 = (undefined4 *)
             (*(int *)(lParam + 0x2fc) * uVar4 + *(int *)(*(int *)(lParam + 0x308) + 8));
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    if ((local_160 != *(int *)(lParam + 0x470)) || (local_15c != *(int *)(lParam + 0x474))) {
      InvalidateRect(*(HWND *)(lParam + 0x2c0),(RECT *)0x0,0);
      *(int *)(lParam + 0x470) = local_160 - *(int *)(lParam + 0x2f0);
      *(int *)(lParam + 0x474) = local_15c - *(int *)(lParam + 0x2f4);
    }
    uVar1 = *(undefined4 *)(lParam + 0x2fc);
    wParam = *(WPARAM *)(lParam + 4);
    *(undefined4 *)(lParam + 8) = 0x838;
    puVar7 = (undefined4 *)(lParam + 0x310);
    puVar8 = (undefined4 *)(lParam + 0x10);
    for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)(lParam + 0xc) = uVar1;
    puVar7 = (undefined4 *)(lParam + 0x168);
    for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    SendMessageA(*(HWND *)(lParam + 0x2c8),0x4e,wParam,lParam);
    FUN_00472870(param_1);
  }
  return 1;
}


