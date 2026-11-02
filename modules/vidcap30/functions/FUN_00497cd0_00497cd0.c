/* Module: vidcap30.exe
   Function: FUN_00497cd0
   Address: 00497cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00497cd0(int param_1,uint *param_2)

{
  HWND hWnd;
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  LONG *pLVar9;
  LONG aLStack_3c [9];
  int *local_18;
  int *piStack_c;
  
  puVar1 = param_2;
  if (param_2[1] != 0) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      hWnd = *(HWND *)(param_1 + 0x18);
      FUN_004f6f40(*(int *)(param_1 + 0x3c),hWnd,0xffff0000,FUN_004f6f00);
      SendMessageA(hWnd,0xb,0,0);
      SendMessageA(hWnd,0x110b,9,0);
      SendMessageA(hWnd,0x1101,0,-0x10000);
      SendMessageA(hWnd,0xb,1,0);
      pLVar9 = aLStack_3c + 7;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pLVar9 = 0;
        pLVar9 = pLVar9 + 1;
      }
      local_18 = (int *)GetWindowLongA(hWnd,-0x15);
      FUN_00497a20(*(undefined4 *)(param_1 + 0x3c),local_18,1);
      _SfList_DeleteList_16(local_18,0,0xffffffff,0);
      (**(code **)(**(int **)(param_1 + 0x3c) + 8))(*(int **)(param_1 + 0x3c));
      aLStack_3c[1] = 0;
      aLStack_3c[0] = 0x10000000;
      aLStack_3c[2] = 0;
      _SfList_AllocAndInsertItem_20(local_18,aLStack_3c,0xc,0,0);
      SendMessageA(*(HWND *)(param_1 + 0x1c),0xb,0,0);
      SendMessageA(*(HWND *)(param_1 + 0x1c),0x1009,0,0);
      SendMessageA(*(HWND *)(param_1 + 0x1c),0xb,1,0);
    }
    uVar6 = *(uint *)(param_1 + 0x4e0);
    *(uint *)(param_1 + 0x3c) = param_2[1];
    puVar7 = param_2 + 0x12;
    uVar2 = (uVar6 ^ *param_2) & 1 ^ uVar6;
    *(uint *)(param_1 + 0x4e0) = uVar2;
    uVar2 = (uVar2 ^ *param_2) & 2 ^ uVar2;
    *(uint *)(param_1 + 0x4e0) = uVar2;
    uVar2 = (uVar2 ^ *param_2) & 0x10 ^ uVar2;
    *(uint *)(param_1 + 0x4e0) = uVar2;
    uVar2 = CONCAT31((int3)(uVar6 >> 8),(char)uVar2);
    uVar5 = (*param_2 & 0x20) << 1;
    *(uint *)(param_1 + 0x4e0) = uVar5 | uVar2 & 0xffffffbf;
    uVar3 = (*param_2 & 0x40) << 10;
    *(uint *)(param_1 + 0x4e0) = uVar3 | uVar5 | uVar2 & 0xfffeffbf;
    uVar6 = *param_2;
    *(undefined4 *)(param_1 + 0x704) = 0xffffffff;
    *(uint *)(param_1 + 0x4e0) = (uVar6 & 0x80) << 10 | uVar3 | uVar5 | uVar2 & 0xfffcffbf;
    uVar6 = 900;
    param_2 = (uint *)(param_1 + 0x738);
    do {
      uVar2 = 0;
      puVar8 = puVar7 + -0xc;
      do {
        if ((short)*puVar8 == 0) {
          *(undefined2 *)(param_1 + (uVar6 + uVar2) * 2) = 100;
        }
        else {
          *(short *)(param_1 + (uVar6 + uVar2) * 2) = (short)*puVar8;
        }
        uVar2 = uVar2 + 1;
        puVar8 = (uint *)((int)puVar8 + 2);
      } while (uVar2 < 0x18);
      if (*puVar7 == 0) {
        *param_2 = 1;
      }
      else {
        *param_2 = *puVar7;
      }
      uVar6 = uVar6 + 0x1a;
      puVar7 = puVar7 + 0xd;
      param_2 = param_2 + 0xd;
    } while (uVar6 < 0x454);
    pLVar9 = aLStack_3c + 7;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pLVar9 = 0;
      pLVar9 = pLVar9 + 1;
    }
    aLStack_3c[7] = 0;
    (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),aLStack_3c + 7);
    uVar6 = ((uint)local_18 & 1) << 2 | *(uint *)(param_1 + 0x4e0) & 0xfffffffb;
    *(uint *)(param_1 + 0x4e0) = uVar6;
    if (((uint)local_18 & 1) == 0) {
      *puVar1 = *puVar1 & 0xfffffff7 | 4;
    }
    else {
      *(uint *)(param_1 + 0x4e0) = uVar6 | 0x20;
    }
    pLVar9 = aLStack_3c + 5;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pLVar9 = 0;
      pLVar9 = pLVar9 + 1;
    }
    aLStack_3c[5] = 3;
    local_18 = (int *)(param_1 + 0x30);
    piStack_c = (int *)(param_1 + 0x38);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),aLStack_3c + 5);
    if ((*(int *)(param_1 + 0x30) != 0) &&
       (((*(uint *)(param_1 + 0x4e0) & 0x4000) == 0 || (*(int *)(param_1 + 0x38) != 0)))) {
      iVar4 = GetSystemMetrics(0x20);
      GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&stack0xffffffc0);
      uVar6 = puVar1[3];
      *(uint *)(param_1 + 0x458) = uVar6;
      *(LONG *)(param_1 + 0x464) = aLStack_3c[2];
      *(uint *)(param_1 + 0x460) = uVar6 + iVar4;
      *(undefined4 *)(param_1 + 0x468) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x46c) = 1;
      if ((*puVar1 & 4) == 0) {
        *(undefined4 *)(param_1 + 0x470) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x46c) = 5;
        *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x460);
      }
      uVar6 = puVar1[4];
      *(uint *)(param_1 + 0x474) = uVar6;
      *(uint *)(param_1 + 0x47c) = uVar6 + iVar4;
      *(LONG *)(param_1 + 0x478) = aLStack_3c[1];
      *(undefined4 *)(param_1 + 0x480) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x484) = 2;
      if (((*(byte *)(param_1 + 0x4e0) & 8) != 0) && ((*puVar1 & 8) != 0)) {
        *(undefined4 *)(param_1 + 0x484) = 6;
      }
      if (puVar1[5] == 0) {
        *(undefined4 *)(param_1 + 0x4c0) = 1000;
      }
      else {
        *(uint *)(param_1 + 0x4c0) = puVar1[5];
      }
      *(uint *)(param_1 + 0xbac) = puVar1[0x103];
      *(uint *)(param_1 + 0xbb0) = puVar1[0x101];
      *(uint *)(param_1 + 0xbb4) = puVar1[0x102];
      (**(code **)(**(int **)(param_1 + 0x3c) + 4))(*(int **)(param_1 + 0x3c));
      *(undefined1 *)(param_1 + 0x4f0) = 0;
      pLVar9 = aLStack_3c + 2;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pLVar9 = 0;
        pLVar9 = pLVar9 + 1;
      }
      *(undefined4 *)(param_1 + 0x6f8) = 0;
      *(undefined4 *)(param_1 + 0x700) = 0;
      aLStack_3c[2] = 0xd;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))
                        (*(int **)(param_1 + 0x3c),aLStack_3c + 2);
      if (-1 < iVar4) {
        *(uint *)(param_1 + 0x4e0) =
             (aLStack_3c[4] & 1U) << 9 | *(uint *)(param_1 + 0x4e0) & 0xfffffdff;
      }
      uVar6 = *(uint *)(param_1 + 0x4e0);
      pLVar9 = aLStack_3c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pLVar9 = 0;
        pLVar9 = pLVar9 + 1;
      }
      *(uint *)(param_1 + 0x4e0) = uVar6 & 0xfffffbff;
      aLStack_3c[0] = 0xe;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),aLStack_3c);
      if (-1 < iVar4) {
        *(uint *)(param_1 + 0x4e0) =
             (aLStack_3c[2] & 1U) << 10 | *(uint *)(param_1 + 0x4e0) & 0xfffffbff;
      }
      return 1;
    }
  }
  return 0;
}


