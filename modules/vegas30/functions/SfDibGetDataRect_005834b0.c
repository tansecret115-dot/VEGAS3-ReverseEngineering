/* Module: vegas30.exe
   Function: SfDibGetDataRect
   Address: 005834b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDibGetDataRect(struct tagRECT *,struct tagBITMAPINFOHEADER const *,void const
   *,struct tagRECT const *,long,long,long) */

long SfDibGetDataRect(tagRECT *param_1,tagBITMAPINFOHEADER *param_2,void *param_3,tagRECT *param_4,
                     long param_5,long param_6,long param_7)

{
  ushort uVar1;
  LONG LVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  WORD *pWVar11;
  
                    /* 0x1834b0  20
                       ?SfDibGetDataRect@@YGJPAUtagRECT@@PBUtagBITMAPINFOHEADER@@PBXPBU1@JJJ@Z */
  if (((param_2 == (tagBITMAPINFOHEADER *)0x0) || (3 < param_6)) || (param_6 < 0)) {
    return -0x7fffbffb;
  }
  iVar3 = _SfGetPixelType_4(param_2);
  if ((iVar3 != 0x1d) && (iVar3 != 0x1c)) {
    return -0x7fffbfff;
  }
  uVar4 = param_2->biHeight;
  LVar2 = param_2->biWidth;
  uVar8 = (int)uVar4 >> 0x1f;
  param_1->left = 0;
  param_1->top = 0;
  param_1->bottom = (uVar4 ^ uVar8) - uVar8;
  param_1->right = LVar2;
  if (param_4 != (tagRECT *)0x0) {
    IntersectRect(param_1,param_1,param_4);
  }
  if (param_1->right == param_1->left) {
    return 0;
  }
  iVar3 = param_1->top;
  if (param_1->bottom == iVar3) {
    return 0;
  }
  if (param_5 == 0) {
    uVar4 = (uint)param_2->biBitCount * param_2->biWidth + 0x1f;
    param_5 = (int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  }
  pWVar11 = param_3;
  if (param_3 == (void *)0x0) {
    if (param_2->biCompression == 0) {
      if (((param_2->biClrUsed != 0) || (uVar1 = param_2->biBitCount, uVar1 == 0)) || (8 < uVar1))
      goto LAB_0058359f;
      iVar6 = param_2->biSize + (1 << ((byte)uVar1 & 0x1f)) * 4;
    }
    else {
      if (param_2->biCompression == 3) {
        pWVar11 = &param_2[1].biPlanes;
        goto LAB_005835a9;
      }
LAB_0058359f:
      iVar6 = param_2->biSize + param_2->biClrUsed * 4;
    }
    pWVar11 = (WORD *)((int)&param_2->biSize + iVar6);
  }
LAB_005835a9:
  pWVar11 = (WORD *)(iVar3 * param_5 + (int)pWVar11);
  if (iVar3 < param_1->bottom) {
    do {
      iVar6 = param_1->left;
      if (iVar6 < param_1->right) {
        pbVar9 = (byte *)((int)pWVar11 + param_6 + iVar6 * 4);
        do {
          if (param_7 <= (int)(uint)*pbVar9) {
            if (iVar6 < param_1->right) goto LAB_005835f5;
            break;
          }
          iVar6 = iVar6 + 1;
          pbVar9 = pbVar9 + 4;
        } while (iVar6 < param_1->right);
      }
      pWVar11 = (WORD *)((int)pWVar11 + param_5);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1->bottom);
  }
LAB_005835f5:
  param_1->top = iVar3;
  if (iVar3 == param_1->bottom) {
    param_1->right = param_1->left;
    return 0;
  }
  pWVar11 = param_3;
  if (param_3 == (void *)0x0) {
    if (param_2->biCompression == 0) {
      if (((param_2->biClrUsed != 0) || (uVar1 = param_2->biBitCount, uVar1 == 0)) || (8 < uVar1))
      goto LAB_00583646;
      DVar5 = 1 << ((byte)uVar1 & 0x1f);
    }
    else {
      if (param_2->biCompression == 3) {
        pWVar11 = &param_2[1].biPlanes;
        goto LAB_00583650;
      }
LAB_00583646:
      DVar5 = param_2->biClrUsed;
    }
    pWVar11 = (WORD *)((int)&param_2->biSize + param_2->biSize + DVar5 * 4);
  }
LAB_00583650:
  iVar3 = param_1->bottom + -1;
  pWVar11 = (WORD *)(iVar3 * param_5 + (int)pWVar11);
  if (param_1->top <= iVar3) {
    do {
      iVar6 = param_1->left;
      if (iVar6 < param_1->right) {
        pbVar9 = (byte *)((int)pWVar11 + param_6 + iVar6 * 4);
        do {
          if (param_7 <= (int)(uint)*pbVar9) {
            if (iVar6 < param_1->right) goto LAB_0058369f;
            break;
          }
          iVar6 = iVar6 + 1;
          pbVar9 = pbVar9 + 4;
        } while (iVar6 < param_1->right);
      }
      pWVar11 = (WORD *)((int)pWVar11 - param_5);
      iVar3 = iVar3 + -1;
    } while (param_1->top <= iVar3);
  }
LAB_0058369f:
  iVar3 = iVar3 + 1;
  param_1->bottom = iVar3;
  pWVar11 = param_3;
  if (param_3 == (void *)0x0) {
    if (param_2->biCompression == 0) {
      if (((param_2->biClrUsed != 0) || (uVar1 = param_2->biBitCount, uVar1 == 0)) || (8 < uVar1))
      goto LAB_005836de;
      DVar5 = 1 << ((byte)uVar1 & 0x1f);
    }
    else {
      if (param_2->biCompression == 3) {
        pWVar11 = &param_2[1].biPlanes;
        goto LAB_005836e8;
      }
LAB_005836de:
      DVar5 = param_2->biClrUsed;
    }
    pWVar11 = (WORD *)((int)&param_2->biSize + param_2->biSize + DVar5 * 4);
  }
LAB_005836e8:
  iVar6 = param_1->left;
  if (iVar6 < param_1->right) {
    pbVar9 = (byte *)((int)pWVar11 + param_6 + iVar6 * 4 + param_1->top * param_5);
    do {
      iVar7 = param_1->top;
      pbVar10 = pbVar9;
      if (iVar7 < iVar3) {
        do {
          if (param_7 <= (int)(uint)*pbVar10) {
            if (iVar7 < iVar3) goto LAB_00583740;
            break;
          }
          iVar3 = param_1->bottom;
          iVar7 = iVar7 + 1;
          pbVar10 = pbVar10 + param_5;
        } while (iVar7 < iVar3);
      }
      pbVar9 = pbVar9 + 4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1->right);
  }
LAB_00583740:
  param_1->left = iVar6;
  if (param_3 != (void *)0x0) goto LAB_0058378a;
  if (param_2->biCompression == 0) {
    if (((param_2->biClrUsed != 0) || (uVar1 = param_2->biBitCount, uVar1 == 0)) || (8 < uVar1))
    goto LAB_00583780;
    iVar3 = param_2->biSize + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (param_2->biCompression == 3) {
      param_3 = &param_2[1].biPlanes;
      goto LAB_0058378a;
    }
LAB_00583780:
    iVar3 = param_2->biSize + param_2->biClrUsed * 4;
  }
  param_3 = (void *)((int)&param_2->biSize + iVar3);
LAB_0058378a:
  iVar3 = param_1->right + -1;
  if (param_1->left <= iVar3) {
    pbVar9 = (byte *)((int)param_3 + param_6 + param_1->right * 4 + param_1->top * param_5 + -4);
    do {
      iVar6 = param_1->top;
      pbVar10 = pbVar9;
      if (iVar6 < param_1->bottom) {
        do {
          if (param_7 <= (int)(uint)*pbVar10) break;
          iVar6 = iVar6 + 1;
          pbVar10 = pbVar10 + param_5;
        } while (iVar6 < param_1->bottom);
        if (iVar6 < param_1->bottom) break;
      }
      pbVar9 = pbVar9 + -4;
      iVar3 = iVar3 + -1;
    } while (param_1->left <= iVar3);
  }
  param_1->right = iVar3 + 1;
  return 0;
}


