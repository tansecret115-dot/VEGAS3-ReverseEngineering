/* Module: sfcdi.dll
   Function: FUN_5bf528d0
   Address: 5bf528d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf528d0(uint param_1,int *param_2,uint *param_3)

{
  undefined2 *puVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  HGLOBAL hMem;
  LPVOID pvVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  undefined1 *puVar9;
  void *_Src;
  int iVar10;
  uint uVar11;
  int iVar12;
  ushort uVar13;
  uint uVar14;
  ushort uVar15;
  undefined2 *_Dst;
  
  piVar2 = param_2;
  uVar3 = param_1;
  pvVar5 = (LPVOID)*param_2;
  FUN_5bf52810(param_1,(int *)&param_1);
  puVar4 = param_3;
  if (pvVar5 == (LPVOID)0x0) {
    hMem = GlobalAlloc(0x40,param_1);
    pvVar5 = GlobalLock(hMem);
    if (pvVar5 == (LPVOID)0x0) {
      return 0x8007000e;
    }
  }
  else if (*param_3 < param_1) {
    *param_3 = param_1;
    return 0x80028016;
  }
  *piVar2 = (int)pvVar5;
  *puVar4 = param_1;
  *(undefined1 *)((int)pvVar5 + 2) = *(undefined1 *)(uVar3 + 0xc);
  *(undefined1 *)((int)pvVar5 + 3) = *(undefined1 *)(uVar3 + 0xb);
  *(undefined4 *)((int)pvVar5 + 4) = *(undefined4 *)(uVar3 + 0xd);
  *(undefined4 *)((int)pvVar5 + 8) = *(undefined4 *)(uVar3 + 0x14);
  memmove((void *)((int)pvVar5 + 0xc),(void *)(uVar3 + 0x18),0x10);
  memmove((void *)((int)pvVar5 + 0x1c),(void *)(uVar3 + 0x28),0x80);
  memmove((void *)((int)pvVar5 + 0xa4),(void *)(uVar3 + 0xaf),0x40);
  *(undefined2 *)((int)pvVar5 + 0x9c) = *(undefined2 *)(uVar3 + 0xa8);
  *(undefined2 *)((int)pvVar5 + 0x9e) = *(undefined2 *)(uVar3 + 0xaa);
  *(undefined2 *)((int)pvVar5 + 0xa0) = *(undefined2 *)(uVar3 + 0xac);
  *(undefined1 *)((int)pvVar5 + 0xa2) = *(undefined1 *)(uVar3 + 9);
  *(undefined1 *)((int)pvVar5 + 0xa3) = *(undefined1 *)(uVar3 + 0xae);
  param_1 = 0xec;
  if ((((*(int **)(uVar3 + 0xf0) != (int *)0x0) && (**(int **)(uVar3 + 0xf0) != 0)) ||
      ((*(int **)(uVar3 + 0xf4) != (int *)0x0 && (**(int **)(uVar3 + 0xf4) != 0)))) ||
     ((*(int **)(uVar3 + 0xf8) != (int *)0x0 && (**(int **)(uVar3 + 0xf8) != 0)))) {
    *(undefined2 *)((int)pvVar5 + 0xe4) = 0xec;
    puVar1 = (undefined2 *)((int)pvVar5 + 0xec);
    if (*(int **)(uVar3 + 0xf0) == (int *)0x0) {
      iVar12 = 0;
    }
    else {
      iVar12 = **(int **)(uVar3 + 0xf0);
    }
    *puVar1 = (short)iVar12;
    if (*(int **)(uVar3 + 0xf4) == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = **(int **)(uVar3 + 0xf4);
    }
    *(short *)((int)pvVar5 + 0xee) = (short)iVar10;
    iVar6 = 0;
    if (*(int **)(uVar3 + 0xf8) != (int *)0x0) {
      iVar6 = **(int **)(uVar3 + 0xf8);
    }
    *(short *)((int)pvVar5 + 0xf0) = (short)iVar6;
    uVar7 = (iVar6 + iVar10 + iVar12) * 8;
    *(short *)((int)pvVar5 + 0xf2) = (short)uVar7 + 7;
    uVar14 = 0;
    _Dst = puVar1;
    while( true ) {
      _Dst = _Dst + 4;
      piVar2 = *(int **)(uVar3 + 0xf0);
      if (piVar2 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *piVar2;
      }
      uVar11 = uVar14 & 0xffff;
      if (iVar12 <= (int)uVar11) break;
      if (piVar2 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *piVar2;
      }
      if (iVar12 + -1 < (int)uVar11) {
        pvVar8 = (void *)0x0;
      }
      else {
        pvVar8 = (void *)(piVar2[1] * uVar11 + piVar2[2]);
      }
      memmove(_Dst,pvVar8,8);
      uVar14 = uVar14 + 1;
    }
    uVar14 = 0;
    while( true ) {
      piVar2 = *(int **)(uVar3 + 0xf4);
      if (piVar2 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *piVar2;
      }
      uVar11 = uVar14 & 0xffff;
      if (iVar12 <= (int)uVar11) break;
      if (piVar2 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *piVar2;
      }
      if (iVar12 + -1 < (int)uVar11) {
        pvVar8 = (void *)0x0;
      }
      else {
        pvVar8 = (void *)(piVar2[1] * uVar11 + piVar2[2]);
      }
      memmove(_Dst,pvVar8,8);
      uVar14 = uVar14 + 1;
      _Dst = _Dst + 4;
    }
    uVar14 = 0;
    while( true ) {
      piVar2 = *(int **)(uVar3 + 0xf8);
      if (piVar2 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *piVar2;
      }
      uVar11 = uVar14 & 0xffff;
      if (iVar12 <= (int)uVar11) break;
      if (piVar2 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *piVar2;
      }
      if (iVar12 + -1 < (int)uVar11) {
        pvVar8 = (void *)0x0;
      }
      else {
        pvVar8 = (void *)(piVar2[1] * uVar11 + piVar2[2]);
      }
      memmove(_Dst,pvVar8,8);
      uVar14 = uVar14 + 1;
      _Dst = _Dst + 4;
    }
    param_1 = param_1 + 8 + (uVar7 & 0xffff);
    FUN_5bf51f40((undefined1 *)puVar1);
  }
  if ((*(int **)(uVar3 + 0x110) != (int *)0x0) && (**(int **)(uVar3 + 0x110) != 0)) {
    *(undefined2 *)((int)pvVar5 + 0xe6) = (undefined2)param_1;
    param_1 = param_1 + *(byte *)(uVar3 + 0xc);
    if ((*(byte *)(uVar3 + 0xc) & 1) != 0) {
      param_1 = param_1 + 1;
    }
    uVar15 = *(ushort *)((int)pvVar5 + 0xe6);
    uVar13 = 0;
    if (*(char *)((int)pvVar5 + 2) != '\0') {
      do {
        piVar2 = *(int **)(uVar3 + 0x110);
        uVar7 = (uint)uVar13;
        if (piVar2 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *piVar2;
        }
        if (iVar12 + -1 < (int)uVar7) {
          puVar9 = (undefined1 *)0x0;
        }
        else {
          puVar9 = (undefined1 *)(piVar2[1] * uVar7 + piVar2[2]);
        }
        uVar13 = uVar13 + 1;
        *(undefined1 *)((int)pvVar5 + uVar7 + uVar15) = *puVar9;
      } while (uVar13 < *(byte *)((int)pvVar5 + 2));
    }
  }
  if ((*(int **)(uVar3 + 0x114) != (int *)0x0) && (**(int **)(uVar3 + 0x114) != 0)) {
    *(undefined2 *)((int)pvVar5 + 0xe8) = (undefined2)param_1;
    uVar15 = 0;
    param_1 = param_1 + (uint)*(byte *)(uVar3 + 0xb) * 0x18;
    pvVar8 = (void *)((uint)*(ushort *)((int)pvVar5 + 0xe8) + (int)pvVar5);
    if (*(char *)((int)pvVar5 + 3) != '\0') {
      do {
        piVar2 = *(int **)(uVar3 + 0x114);
        if (piVar2 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *piVar2;
        }
        if (((int)(uint)uVar15 <= iVar12 + -1) &&
           (_Src = (void *)(piVar2[1] * (uint)uVar15 + piVar2[2]), _Src != (void *)0x0)) {
          memmove(pvVar8,_Src,0x18);
          FUN_5bf51f50((int)pvVar8);
        }
        uVar15 = uVar15 + 1;
        pvVar8 = (void *)((int)pvVar8 + 0x18);
      } while (uVar15 < *(byte *)((int)pvVar5 + 3));
    }
  }
  if ((*(int **)(uVar3 + 0x118) != (int *)0x0) && (**(int **)(uVar3 + 0x118) != 0)) {
    *(undefined2 *)((int)pvVar5 + 0xea) = (undefined2)param_1;
    uVar15 = 0;
    param_1 = param_1 + (uint)*(byte *)((int)pvVar5 + 3) * 4;
    puVar9 = (undefined1 *)((uint)*(ushort *)((int)pvVar5 + 0xea) + (int)pvVar5);
    if (*(char *)((int)pvVar5 + 3) != '\0') {
      do {
        piVar2 = *(int **)(uVar3 + 0x118);
        if (piVar2 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *piVar2;
        }
        if (iVar12 + -1 < (int)(uint)uVar15) {
          pvVar8 = (void *)0x0;
        }
        else {
          pvVar8 = (void *)(piVar2[1] * (uint)uVar15 + piVar2[2]);
        }
        memmove(puVar9,pvVar8,4);
        FUN_5bf51f70(puVar9);
        uVar15 = uVar15 + 1;
        puVar9 = puVar9 + 4;
      } while (uVar15 < *(byte *)((int)pvVar5 + 3));
    }
  }
  FUN_5bf51f10((int)pvVar5);
  *param_2 = (int)pvVar5;
  *param_3 = param_1;
  return 0;
}


