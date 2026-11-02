/* Module: aviplug.dll
   Function: FUN_5f9410c0
   Address: 5f9410c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9410c0(DWORD param_1,uchar *param_2)

{
  LPDWORD pDVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  MultiByteToWideChar(0,1,(LPCSTR)param_2,-1,local_208,0x104);
  local_2 = 0;
  iVar4 = wcscmp(local_208,(wchar_t *)(*(int *)(param_1 + 0x24) + 8));
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x98) == 0) goto LAB_5f941132;
    iVar4 = FUN_5f93f330(param_1);
  }
  else {
    iVar4 = FUN_5f941030(param_1,(LPCSTR)param_2);
  }
  if (iVar4 < 0) {
    return;
  }
LAB_5f941132:
  CloseHandle(*(HANDLE *)(param_1 + 0x94));
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  pDVar1 = (LPDWORD)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x1a0) = 0x20000000;
  iVar4 = FUN_5f942f90(param_2,pDVar1);
  if ((0x200 < (int)*pDVar1) || (iVar4 != 0)) {
    *pDVar1 = 0x200;
    *(undefined4 *)(param_1 + 0x1a0) = 0x8000000;
  }
  _mbscpy((uchar *)(param_1 + 0x9c),param_2);
  *(uint *)(*(int *)(param_1 + 0x1c) + 0x14) =
       *(uint *)(*(int *)(param_1 + 0x1c) + 0x14) & 0xffffffef;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x24) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 8) = 0;
  iVar4 = **(int **)(param_1 + 0x40);
  while (0 < iVar4) {
    iVar4 = iVar4 + -1;
    iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    iVar8 = *(int *)(*(int *)(param_1 + 0x40) + 4) * iVar4;
    iVar3 = *(int *)(iVar8 + iVar6);
    iVar8 = iVar8 + iVar6;
    *(undefined4 *)(iVar8 + 0x28) = 0;
    *(undefined4 *)(iVar8 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x28) = 0;
    iVar6 = *(int *)(iVar8 + 0xc);
    puVar11 = (undefined4 *)(iVar6 + 0x20);
    for (uVar5 = (uint)*(ushort *)(iVar6 + 8) * *(int *)(iVar6 + 0xc) & 0x3fffffff; uVar5 != 0;
        uVar5 = uVar5 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar11 = 0;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    *(undefined4 *)(*(int *)(iVar8 + 0xc) + 0xc) = 0;
    iVar6 = *(int *)(iVar8 + 0x14);
    puVar11 = (undefined4 *)(iVar6 + 0x20);
    for (uVar5 = (uint)*(ushort *)(iVar6 + 8) * *(int *)(iVar6 + 0xc) & 0x3fffffff; uVar5 != 0;
        uVar5 = uVar5 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar11 = 0;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    *(undefined4 *)(*(int *)(iVar8 + 0x14) + 0xc) = 0;
  }
  uVar5 = *(uint *)(*(int *)(param_1 + 0x24) + 4);
  piVar2 = (int *)((uVar5 & 1) + uVar5 + 8 + *(int *)(param_1 + 0x24));
  piVar9 = piVar2;
  if ((*piVar2 != 0x5453494c) && (piVar2[2] != 0x69766f6d)) {
    if (*piVar2 != 0x4b4e554a) {
      uVar7 = (piVar2[1] & 1U) + piVar2[1];
      piVar9 = piVar2 + 2;
      for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *piVar9 = 0;
        piVar9 = piVar9 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)piVar9 = 0;
        piVar9 = (int *)((int)piVar9 + 1);
      }
      *piVar2 = 0x4b4e554a;
    }
    iVar6 = (piVar2[1] & 1U) + piVar2[1];
    iVar4 = *(int *)(iVar6 + 8 + (int)piVar2);
    while ((piVar9 = (int *)(iVar6 + 8 + (int)piVar2), iVar4 != 0x5453494c &&
           (piVar9[2] != 0x69766f6d))) {
      uVar7 = (piVar9[1] & 1U) + piVar9[1];
      piVar9[1] = uVar7;
      piVar10 = piVar9 + 2;
      for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *piVar10 = 0;
        piVar10 = piVar10 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)piVar10 = 0;
        piVar10 = (int *)((int)piVar10 + 1);
      }
      piVar2[1] = piVar2[1] + piVar9[1] + 8;
      *piVar9 = 0;
      piVar9[1] = 0;
      iVar6 = (piVar2[1] & 1U) + piVar2[1];
      iVar4 = *(int *)(iVar6 + 8 + (int)piVar2);
    }
  }
  *(int **)(param_1 + 0x28) = piVar9;
  piVar9[1] = 4;
  if (*piVar2 == 0x4b4e554a) {
    uVar5 = (int)piVar2 + (0xc - *(int *)(param_1 + 0x10));
    uVar5 = uVar5 + (uVar5 & 1);
    uVar7 = uVar5 + 0x7ff & 0xfffff800;
    if ((uVar7 != uVar5) && (uVar7 - uVar5 < 8)) {
      uVar7 = uVar7 + 0x800;
    }
    if ((int)uVar7 < *(int *)(param_1 + 0x14)) {
      puVar11 = (undefined4 *)(*(int *)(param_1 + 0x10) + -0xc + uVar7);
      *(undefined4 **)(param_1 + 0x28) = puVar11;
      *puVar11 = 0x5453494c;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 4) = 4;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 8) = 0x69766f6d;
      if (*piVar2 == 0x4b4e554a) {
        piVar2[1] = (*(int *)(param_1 + 0x28) - (int)piVar2) + -8;
      }
      *(uint *)(param_1 + 0x14) = uVar7;
    }
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(iVar4 + 0x10) = 4;
  if (*(int *)(iVar4 + 0x18) == 0x4b4e554a) {
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x1c) + 0xc;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x2c) + 4) = 0xc;
  *(int *)(*(int *)(param_1 + 0x2c) + 4) =
       *(int *)(*(int *)(param_1 + 0x2c) + 4) + *(int *)(iVar4 + 0x10);
  iVar4 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x30) = iVar4;
  *(int *)(iVar4 + 4) = *(int *)(param_1 + 0x28) - iVar4;
  *(int *)(*(int *)(param_1 + 0x10) + 4) = *(int *)(*(int *)(param_1 + 0x10) + 4) + 4;
  uVar5 = *(uint *)(*(int *)(param_1 + 0x34) + 4);
  puVar11 = (undefined4 *)(*(int *)(param_1 + 0x34) + 8);
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar11 = 0;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 4) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  puVar11 = (undefined4 *)(*(int *)(param_1 + 0x24) + 8);
  for (iVar4 = 0x82; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  FUN_5f93f6e0(param_1);
  return;
}


