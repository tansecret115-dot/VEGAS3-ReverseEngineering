/* Module: vegas30.exe
   Function: SfDibAlphaToCheckers
   Address: 00583150
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDibAlphaToCheckers(struct tagBITMAPINFOHEADER const *,void *,struct tagRECT
   const *,long,struct tagBITMAPINFOHEADER const *,void const *,long,int,int,struct tSFDIBPIXEL
   const *,struct tSFDIBPIXEL const *) */

long SfDibAlphaToCheckers
               (tagBITMAPINFOHEADER *param_1,void *param_2,tagRECT *param_3,long param_4,
               tagBITMAPINFOHEADER *param_5,void *param_6,long param_7,int param_8,int param_9,
               tSFDIBPIXEL *param_10,tSFDIBPIXEL *param_11)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  WORD *pWVar4;
  uint uVar5;
  DWORD DVar6;
  WORD *pWVar7;
  LONG LVar8;
  byte *pbVar9;
  DWORD *pDVar10;
  byte local_18 [6];
  undefined1 local_12;
  RECT local_10;
  
                    /* 0x183150  19
                       ?SfDibAlphaToCheckers@@YGJPBUtagBITMAPINFOHEADER@@PAXPBUtagRECT@@J0PBXJHHPBUtSFDIBPIXEL@@4@Z
                        */
  if (param_5 == (tagBITMAPINFOHEADER *)0x0) {
    param_6 = param_2;
    param_7 = param_4;
    param_5 = param_1;
  }
  iVar2 = _SfGetPixelType_4(param_1);
  iVar3 = _SfGetPixelType_4(param_5);
  if ((((iVar2 != 0x1d) && (iVar2 != 0x1c)) || ((iVar3 != 0x1d && (iVar3 != 0x1c)))) ||
     ((param_1->biWidth != param_5->biWidth ||
      (uVar5 = param_1->biHeight >> 0x1f, iVar2 = (param_1->biHeight ^ uVar5) - uVar5,
      uVar5 = param_5->biHeight >> 0x1f, iVar2 != (param_5->biHeight ^ uVar5) - uVar5)))) {
    return -0x7fffbfff;
  }
  local_18[0] = ftol();
  local_18[1] = ftol();
  local_18[2] = ftol();
  local_18[4] = ftol();
  local_18[5] = ftol();
  local_12 = ftol();
  local_10.left = 0;
  local_10.top = 0;
  local_10.right = param_1->biWidth;
  local_10.bottom = iVar2;
  iVar2 = 0;
  if (param_3 != (tagRECT *)0x0) {
    IntersectRect(&local_10,&local_10,param_3);
    iVar2 = local_10.top;
  }
  if (local_10.right == local_10.left) {
    return 0;
  }
  if (local_10.bottom == iVar2) {
    return 0;
  }
  if (param_7 == 0) {
    uVar5 = (uint)param_5->biBitCount * param_5->biWidth + 0x1f;
    param_7 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
  }
  if (param_4 == 0) {
    uVar5 = (uint)param_1->biBitCount * param_1->biWidth + 0x1f;
    param_4 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
  }
  if (param_2 == (void *)0x0) {
    if (param_1->biCompression == 0) {
      if (((param_1->biClrUsed != 0) || (uVar1 = param_1->biBitCount, uVar1 == 0)) || (8 < uVar1))
      goto LAB_00583304;
      DVar6 = 1 << ((byte)uVar1 & 0x1f);
    }
    else {
      if (param_1->biCompression == 3) {
        param_2 = &param_1[1].biPlanes;
        goto LAB_0058330e;
      }
LAB_00583304:
      DVar6 = param_1->biClrUsed;
    }
    param_2 = (void *)((int)&param_1->biSize + param_1->biSize + DVar6 * 4);
  }
LAB_0058330e:
  if (param_6 != (void *)0x0) goto LAB_00583356;
  if (param_5->biCompression == 0) {
    if (((param_5->biClrUsed != 0) || (uVar1 = param_5->biBitCount, uVar1 == 0)) || (8 < uVar1))
    goto LAB_00583349;
    DVar6 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (param_5->biCompression == 3) {
      param_6 = &param_5[1].biPlanes;
      goto LAB_00583356;
    }
LAB_00583349:
    DVar6 = param_5->biClrUsed;
  }
  param_6 = (void *)((int)&param_5->biSize + param_5->biSize + DVar6 * 4);
LAB_00583356:
  pWVar7 = (WORD *)(param_4 * iVar2 + (int)param_2);
  pWVar4 = (WORD *)(param_7 * iVar2 + (int)param_6);
  for (; iVar2 < local_10.bottom; iVar2 = iVar2 + 1) {
    if (local_10.left < local_10.right) {
      LVar8 = local_10.left;
      pbVar9 = (byte *)((int)pWVar4 + local_10.left * 4 + 3);
      pDVar10 = (DWORD *)(pWVar7 + local_10.left * 2 + 1);
      do {
        uVar5 = ((int)(LVar8 + (LVar8 >> 0x1f & 7U)) >> 3) +
                ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) & 1;
        iVar3 = (uint)local_18[uVar5 * 4 + 2] * (0xff - (uint)*pbVar9) + 0x7f;
        *(char *)pDVar10 =
             (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) +
             *(char *)((int)pWVar4 + (-4 - (int)pWVar7) + (int)(pDVar10 + 1));
        iVar3 = (uint)local_18[uVar5 * 4 + 1] * (0xff - (uint)*pbVar9) + 0x7f;
        *(byte *)((int)pDVar10 + -1) = (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + pbVar9[-2];
        iVar3 = (uint)local_18[uVar5 * 4] * (0xff - (uint)*pbVar9) + 0x7f;
        LVar8 = LVar8 + 1;
        *(byte *)((int)pDVar10 + -2) = (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + pbVar9[-3];
        *(char *)((int)pDVar10 + 1) = -1;
        pbVar9 = pbVar9 + 4;
        pDVar10 = pDVar10 + 1;
      } while (LVar8 < local_10.right);
    }
    pWVar7 = (WORD *)((int)pWVar7 + param_4);
    pWVar4 = (WORD *)((int)pWVar4 + param_7);
  }
  return 0;
}


