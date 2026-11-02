/* Module: vegas30k.dll
   Function: SfCdiCreateProgramChain
   Address: 01085ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiCreateProgramChain(struct tagSFIFO_PGCI *,struct tagPGCI_GI * *,unsigned int
   *) */

long SfCdiCreateProgramChain(tagSFIFO_PGCI *param_1,tagPGCI_GI **param_2,uint *param_3)

{
  tagPGC_CMDTI *ptVar1;
  int *piVar2;
  tagSFIFO_PGCI *ptVar3;
  tagPGCI_GI **pptVar4;
  uint *puVar5;
  HGLOBAL hMem;
  tagPGCI_GI *ptVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  tagPGCI_GI *ptVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ushort uVar14;
  uint uVar15;
  tagC_PBI *_Dst;
  tagC_POSI *_Dst_00;
  ushort uVar16;
  tagPGC_CMDTI *_Dst_01;
  
  pptVar4 = param_2;
                    /* 0x85ce0  296
                       ?SfCdiCreateProgramChain@@YGJPAUtagSFIFO_PGCI@@PAPAUtagPGCI_GI@@PAI@Z */
  ptVar3 = param_1;
  ptVar6 = *param_2;
  SfCdiGetProgramChainSize(param_1,(uint *)&param_1);
  puVar5 = param_3;
  if (ptVar6 == (tagPGCI_GI *)0x0) {
    hMem = GlobalAlloc(0x40,(SIZE_T)param_1);
    ptVar6 = GlobalLock(hMem);
    if (ptVar6 == (tagPGCI_GI *)0x0) {
      return -0x7ff8fff2;
    }
  }
  else if ((tagSFIFO_PGCI *)*param_3 < param_1) {
    *param_3 = (uint)param_1;
    return -0x7ffd7fea;
  }
  *pptVar4 = ptVar6;
  *puVar5 = (uint)param_1;
  ptVar6[2] = *(tagPGCI_GI *)(ptVar3 + 0xc);
  ptVar6[3] = *(tagPGCI_GI *)(ptVar3 + 0xb);
  *(undefined4 *)(ptVar6 + 4) = *(undefined4 *)(ptVar3 + 0xd);
  *(undefined4 *)(ptVar6 + 8) = *(undefined4 *)(ptVar3 + 0x14);
  memmove(ptVar6 + 0xc,ptVar3 + 0x18,0x10);
  memmove(ptVar6 + 0x1c,ptVar3 + 0x28,0x80);
  memmove(ptVar6 + 0xa4,ptVar3 + 0xaf,0x40);
  *(undefined2 *)(ptVar6 + 0x9c) = *(undefined2 *)(ptVar3 + 0xa8);
  *(undefined2 *)(ptVar6 + 0x9e) = *(undefined2 *)(ptVar3 + 0xaa);
  *(undefined2 *)(ptVar6 + 0xa0) = *(undefined2 *)(ptVar3 + 0xac);
  ptVar6[0xa2] = *(tagPGCI_GI *)(ptVar3 + 9);
  ptVar6[0xa3] = *(tagPGCI_GI *)(ptVar3 + 0xae);
  param_1 = (tagSFIFO_PGCI *)0xec;
  if ((((*(int **)(ptVar3 + 0xf0) != (int *)0x0) && (**(int **)(ptVar3 + 0xf0) != 0)) ||
      ((*(int **)(ptVar3 + 0xf4) != (int *)0x0 && (**(int **)(ptVar3 + 0xf4) != 0)))) ||
     ((*(int **)(ptVar3 + 0xf8) != (int *)0x0 && (**(int **)(ptVar3 + 0xf8) != 0)))) {
    *(undefined2 *)(ptVar6 + 0xe4) = 0xec;
    ptVar1 = (tagPGC_CMDTI *)(ptVar6 + 0xec);
    if (*(int **)(ptVar3 + 0xf0) == (int *)0x0) {
      iVar13 = 0;
    }
    else {
      iVar13 = **(int **)(ptVar3 + 0xf0);
    }
    *(short *)ptVar1 = (short)iVar13;
    if (*(int **)(ptVar3 + 0xf4) == (int *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = **(int **)(ptVar3 + 0xf4);
    }
    *(short *)(ptVar6 + 0xee) = (short)iVar11;
    iVar7 = 0;
    if (*(int **)(ptVar3 + 0xf8) != (int *)0x0) {
      iVar7 = **(int **)(ptVar3 + 0xf8);
    }
    *(short *)(ptVar6 + 0xf0) = (short)iVar7;
    uVar8 = (iVar7 + iVar11 + iVar13) * 8;
    *(short *)(ptVar6 + 0xf2) = (short)uVar8 + 7;
    uVar15 = 0;
    _Dst_01 = ptVar1;
    while( true ) {
      _Dst_01 = _Dst_01 + 8;
      piVar2 = *(int **)(ptVar3 + 0xf0);
      if (piVar2 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *piVar2;
      }
      uVar12 = uVar15 & 0xffff;
      if (iVar13 <= (int)uVar12) break;
      if (piVar2 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *piVar2;
      }
      if (iVar13 + -1 < (int)uVar12) {
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = (void *)(piVar2[1] * uVar12 + piVar2[2]);
      }
      memmove(_Dst_01,pvVar9,8);
      uVar15 = uVar15 + 1;
    }
    uVar15 = 0;
    while( true ) {
      piVar2 = *(int **)(ptVar3 + 0xf4);
      if (piVar2 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *piVar2;
      }
      uVar12 = uVar15 & 0xffff;
      if (iVar13 <= (int)uVar12) break;
      if (piVar2 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *piVar2;
      }
      if (iVar13 + -1 < (int)uVar12) {
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = (void *)(piVar2[1] * uVar12 + piVar2[2]);
      }
      memmove(_Dst_01,pvVar9,8);
      uVar15 = uVar15 + 1;
      _Dst_01 = _Dst_01 + 8;
    }
    uVar15 = 0;
    while( true ) {
      piVar2 = *(int **)(ptVar3 + 0xf8);
      if (piVar2 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *piVar2;
      }
      uVar12 = uVar15 & 0xffff;
      if (iVar13 <= (int)uVar12) break;
      if (piVar2 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *piVar2;
      }
      if (iVar13 + -1 < (int)uVar12) {
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = (void *)(piVar2[1] * uVar12 + piVar2[2]);
      }
      memmove(_Dst_01,pvVar9,8);
      uVar15 = uVar15 + 1;
      _Dst_01 = _Dst_01 + 8;
    }
    param_1 = param_1 + (uVar8 & 0xffff) + 8;
    SfCdiSwap_PGC_CMDTI(ptVar1);
  }
  if ((*(int **)(ptVar3 + 0x110) != (int *)0x0) && (**(int **)(ptVar3 + 0x110) != 0)) {
    *(undefined2 *)(ptVar6 + 0xe6) = param_1._0_2_;
    param_1 = param_1 + (byte)ptVar3[0xc];
    if (((byte)ptVar3[0xc] & 1) != 0) {
      param_1 = param_1 + 1;
    }
    uVar16 = *(ushort *)(ptVar6 + 0xe6);
    uVar14 = 0;
    if (ptVar6[2] != (tagPGCI_GI)0x0) {
      do {
        piVar2 = *(int **)(ptVar3 + 0x110);
        uVar8 = (uint)uVar14;
        if (piVar2 == (int *)0x0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *piVar2;
        }
        if (iVar13 + -1 < (int)uVar8) {
          ptVar10 = (tagPGCI_GI *)0x0;
        }
        else {
          ptVar10 = (tagPGCI_GI *)(piVar2[1] * uVar8 + piVar2[2]);
        }
        uVar14 = uVar14 + 1;
        ptVar6[uVar8 + uVar16] = *ptVar10;
      } while (uVar14 < (byte)ptVar6[2]);
    }
  }
  if ((*(int **)(ptVar3 + 0x114) != (int *)0x0) && (**(int **)(ptVar3 + 0x114) != 0)) {
    *(undefined2 *)(ptVar6 + 0xe8) = param_1._0_2_;
    uVar16 = 0;
    param_1 = param_1 + (uint)(byte)ptVar3[0xb] * 0x18;
    _Dst = (tagC_PBI *)(ptVar6 + *(ushort *)(ptVar6 + 0xe8));
    if (ptVar6[3] != (tagPGCI_GI)0x0) {
      do {
        piVar2 = *(int **)(ptVar3 + 0x114);
        if (piVar2 == (int *)0x0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *piVar2;
        }
        if (((int)(uint)uVar16 <= iVar13 + -1) &&
           (pvVar9 = (void *)(piVar2[1] * (uint)uVar16 + piVar2[2]), pvVar9 != (void *)0x0)) {
          memmove(_Dst,pvVar9,0x18);
          SfCdiSwap_C_PBI(_Dst);
        }
        uVar16 = uVar16 + 1;
        _Dst = _Dst + 0x18;
      } while (uVar16 < (byte)ptVar6[3]);
    }
  }
  if ((*(int **)(ptVar3 + 0x118) != (int *)0x0) && (**(int **)(ptVar3 + 0x118) != 0)) {
    *(undefined2 *)(ptVar6 + 0xea) = param_1._0_2_;
    uVar16 = 0;
    param_1 = param_1 + (uint)(byte)ptVar6[3] * 4;
    _Dst_00 = (tagC_POSI *)(ptVar6 + *(ushort *)(ptVar6 + 0xea));
    if (ptVar6[3] != (tagPGCI_GI)0x0) {
      do {
        piVar2 = *(int **)(ptVar3 + 0x118);
        if (piVar2 == (int *)0x0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *piVar2;
        }
        if (iVar13 + -1 < (int)(uint)uVar16) {
          pvVar9 = (void *)0x0;
        }
        else {
          pvVar9 = (void *)(piVar2[1] * (uint)uVar16 + piVar2[2]);
        }
        memmove(_Dst_00,pvVar9,4);
        SfCdiSwap_C_POSI(_Dst_00);
        uVar16 = uVar16 + 1;
        _Dst_00 = _Dst_00 + 4;
      } while (uVar16 < (byte)ptVar6[3]);
    }
  }
  SfCdiSwap_PGCI_GI(ptVar6);
  *param_2 = ptVar6;
  *param_3 = (uint)param_1;
  return 0;
}


