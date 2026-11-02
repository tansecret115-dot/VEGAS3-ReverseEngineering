/* Module: sfppack2.dll
   Function: FUN_5cd13730
   Address: 5cd13730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_5cd13730(HDC param_1,undefined4 param_2,float *param_3,float *param_4)

{
  float10 fVar1;
  int *piVar2;
  uint uVar3;
  HDC pHVar4;
  HDC pHVar5;
  HFONT h;
  int iVar6;
  int iVar7;
  LPCSTR lpString;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  tagSIZE *ptVar12;
  tagSIZE local_30;
  tagSIZE local_28;
  uchar local_20 [32];
  
  pfVar9 = param_3;
  pHVar4 = param_1;
  pfVar10 = (float *)0x0;
  local_30.cx = 0;
  local_28.cx = 0;
  switch(param_2) {
  case 0x60a:
    pfVar10 = (float *)((uint)param_3 >> 0x10);
    if (pfVar10 == (float *)0x0) {
      return (float *)param_1[0x33].unused;
    }
    if ((float *)param_1[0x2a].unused <= pfVar10) {
      pfVar10 = (float *)param_1[0x2a].unused;
    }
    if (pfVar10 != (float *)0x0) {
      pHVar4 = param_1 + 0x33;
      pfVar9 = pfVar10;
      do {
        piVar2 = &pHVar4->unused;
        pHVar4 = pHVar4 + 9;
        *param_4 = (float)*piVar2;
        param_4 = param_4 + 1;
        pfVar9 = (float *)((int)pfVar9 - 1);
      } while (pfVar9 != (float *)0x0);
    }
    return pfVar10;
  case 0x60b:
    if (param_4 == (float *)0x0) {
      return (float *)param_1[0x1f].unused;
    }
    if ((param_1[1].unused & 4) == 0) {
      *param_4 = (float)param_1[0x1f].unused;
    }
    else {
      *param_4 = (float)*(double *)(param_1 + 0x22);
    }
    if (param_3 == (float *)0x0) {
      return (float *)0x0;
    }
    *param_3 = (float)((param_1[1].unused << 0x1d) >> 0x1f);
    return (float *)0x0;
  case 0x60c:
    local_28.cx = (uint)param_3 & 0xffff;
    pfVar10 = (float *)((uint)param_3 >> 0x10);
    local_30.cx = 1;
    if (pfVar10 == (float *)0x0) {
      param_1[0x33].unused = (int)param_4;
      if ((int)param_4 < 0) {
        param_1[0x33].unused = 0;
        param_1[0x34].unused = 0;
        param_1[0x35].unused = 0;
        if ((param_1->unused & 2) == 0) {
          pfVar10 = (float *)param_1[0x33].unused;
          param_1[0x36].unused = 0;
        }
        else {
          pfVar10 = (float *)0x0;
          param_1[0x36].unused = param_1[0x21].unused;
        }
      }
      else if (param_4 == (float *)0x0) {
        pfVar10 = (float *)param_1[0x33].unused;
        param_1[0x34].unused = 0;
        param_1[0x35].unused = 0;
      }
      else {
        pfVar10 = (float *)param_1[0x21].unused;
        if ((int)pfVar10 < (int)param_4) {
          pfVar9 = param_4;
          if ((int)param_4 < param_1[0x36].unused) {
            pfVar9 = (float *)param_1[0x36].unused;
          }
          param_1[0x36].unused = (int)pfVar9;
          param_1[0x33].unused = (int)pfVar10;
        }
        else {
          if ((param_1->unused & 2) == 0) {
            if (param_1[0x36].unused < (int)param_4) {
              param_1[0x36].unused = (int)param_4;
            }
          }
          else if ((int)param_4 < param_1[0x36].unused) {
            pfVar10 = (float *)param_1[0x33].unused;
            param_1[0x36].unused = (int)param_4;
            break;
          }
          pfVar10 = (float *)param_1[0x33].unused;
        }
      }
    }
    else {
      pfVar9 = (float *)param_1[0x2a].unused;
      if (pfVar9 <= pfVar10) {
        pfVar10 = pfVar9;
      }
      uVar11 = 0;
      if (pfVar9 != (float *)0x0) {
        pHVar5 = param_1 + 0x36;
        pfVar9 = param_4;
        do {
          fVar8 = *pfVar9;
          pHVar5[-3].unused = (int)fVar8;
          if ((int)fVar8 < 0) {
            pHVar5[-3].unused = 0;
            pHVar5[-2].unused = 0;
            pHVar5[-1].unused = 0;
            if ((param_1->unused & 2) == 0) {
              fVar8 = 0.0;
            }
            else {
              fVar8 = (float)param_1[0x21].unused;
            }
            goto LAB_5cd1391b;
          }
          if (fVar8 == 0.0) {
            pHVar5[-2].unused = 0;
            pHVar5[-1].unused = 0;
          }
          else if (param_1[0x21].unused < (int)fVar8) {
            if ((int)fVar8 < pHVar5->unused) {
              fVar8 = (float)pHVar5->unused;
            }
            pHVar5->unused = (int)fVar8;
            pHVar5[-3].unused = param_1[0x21].unused;
          }
          else if ((param_1->unused & 2) == 0) {
            if (pHVar5->unused < (int)fVar8) goto LAB_5cd1391b;
          }
          else if ((int)fVar8 < pHVar5->unused) {
LAB_5cd1391b:
            pHVar5->unused = (int)fVar8;
          }
          uVar11 = uVar11 + 1;
          pfVar9 = pfVar9 + 1;
          pHVar5 = pHVar5 + 9;
        } while (uVar11 < (uint)param_1[0x2a].unused);
      }
    }
    break;
  case 0x60d:
    local_30.cx = 3;
    local_28.cx = (uint)param_3 & 0xffff;
    if ((int)param_4 < 2) {
      param_4 = (float *)0x1;
    }
    uVar11 = param_1[1].unused;
    param_1[0x1f].unused = (int)param_4;
    fVar1 = (float10)_DAT_5cd51510;
    *(double *)(param_1 + 0x22) = (double)(fVar1 / (float10)(int)param_4);
    fVar1 = (float10)log2(fVar1 / (float10)(int)param_4);
    *(double *)(param_1 + 0x24) = (double)((float10)0.3010299956639812 * fVar1);
    if ((int)(uVar11 << 0x1d) >> 0x1f != (uint)param_3 >> 0x10) {
      param_1[1].unused = ((uint)param_3 >> 0x10 & 1) << 2 | uVar11 & 0xfffffffb;
      for (iVar6 = param_1[0x2a].unused; iVar6 != 0; iVar6 = iVar6 + -1) {
        param_1[0x33].unused = 0;
      }
    }
    param_1[0x21].unused = (int)param_4 + -1;
    if ((param_1[1].unused & 4) != 0) {
      param_1[0x21].unused = 0x3f800000;
    }
    uVar11 = 0;
    if (param_1[0x2a].unused != 0) {
      pHVar5 = param_1 + 0x35;
      do {
        pHVar5[-1].unused = 0;
        pHVar5->unused = 0;
        if ((param_1->unused & 2) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = param_1[0x21].unused;
        }
        pHVar5[1].unused = iVar6;
        uVar11 = uVar11 + 1;
        pHVar5 = pHVar5 + 9;
      } while (uVar11 < (uint)param_1[0x2a].unused);
    }
    pfVar10 = (float *)param_1[0x1f].unused;
    break;
  case 0x60e:
    return (float *)param_1[0x20].unused;
  case 0x60f:
    local_28.cx = (uint)param_3 & 0xffff;
    if ((float *)param_1[0x20].unused != param_4) {
      local_30.cx = 3;
      param_1[0x20].unused = (int)param_4;
    }
    pfVar10 = (float *)param_1[0x20].unused;
    goto LAB_5cd13aa9;
  case 0x610:
    return (float *)(param_1->unused & 0xffff);
  case 0x611:
    uVar11 = param_1->unused;
    if (param_4 == (float *)0x0) {
      uVar3 = uVar11 & ~((uint)param_3 & 0xffff);
    }
    else {
      uVar3 = uVar11 | (uint)param_3 & 0xffff;
    }
    if (uVar11 != uVar3) {
      param_1->unused = uVar3;
      local_30.cx = 3;
    }
    pfVar10 = (float *)(param_1->unused & 0xffff);
    goto LAB_5cd13aa9;
  case 0x612:
    return (float *)param_1[0x2a].unused;
  case 0x613:
    local_28.cx = (uint)param_3 & 0xffff;
    pfVar10 = (float *)param_1[0x2b].unused;
    if (param_4 <= (float *)param_1[0x2b].unused) {
      pfVar10 = param_4;
    }
    if (pfVar10 != (float *)param_1[0x2a].unused) {
      local_30.cx = 3;
    }
    param_1[0x2a].unused = (int)pfVar10;
LAB_5cd13aa9:
    if (local_30.cx != 0) break;
    goto LAB_5cd13ad1;
  case 0x614:
    lstrcpynA((LPSTR)param_4,(LPCSTR)(param_1 + 0x26),(int)param_3);
    return pfVar9;
  case 0x615:
    local_28.cx = (uint)param_3 & 0xffff;
    param_1[1].unused = ((uint)param_3 >> 0x10 & 1) << 1 | param_1[1].unused & 0xfffffffdU;
    local_30.cx = 1;
    lstrcpynA((LPSTR)(param_1 + 0x26),(LPCSTR)param_4,0x10);
    break;
  case 0x616:
    pfVar10 = (float *)((uint)param_3 >> 0x10);
    if (pfVar10 == (float *)0x0) {
      return (float *)param_1[0x36].unused;
    }
    if ((float *)param_1[0x2a].unused <= pfVar10) {
      pfVar10 = (float *)param_1[0x2a].unused;
    }
    if (pfVar10 != (float *)0x0) {
      pHVar4 = param_1 + 0x36;
      pfVar9 = pfVar10;
      do {
        piVar2 = &pHVar4->unused;
        pHVar4 = pHVar4 + 9;
        *param_4 = (float)*piVar2;
        param_4 = param_4 + 1;
        pfVar9 = (float *)((int)pfVar9 - 1);
      } while (pfVar9 != (float *)0x0);
    }
    return pfVar10;
  case 0x617:
    local_28.cx = (uint)param_3 & 0xffff;
    pfVar10 = (float *)((uint)param_3 >> 0x10);
    local_30.cx = 1;
    if (pfVar10 == (float *)0x0) {
      param_1[0x36].unused = (int)param_4;
      if ((int)param_4 < 0) {
        param_1[0x36].unused = 0;
      }
      pfVar10 = (float *)param_1[0x36].unused;
    }
    else {
      pfVar9 = (float *)param_1[0x2a].unused;
      if (pfVar9 <= pfVar10) {
        pfVar10 = pfVar9;
      }
      uVar11 = 0;
      if (pfVar9 != (float *)0x0) {
        pHVar5 = param_1 + 0x36;
        pfVar9 = param_4;
        do {
          fVar8 = *pfVar9;
          pHVar5->unused = (int)fVar8;
          if ((int)fVar8 < 0) {
            pHVar5->unused = 0;
          }
          uVar11 = uVar11 + 1;
          pHVar5 = pHVar5 + 9;
          pfVar9 = pfVar9 + 1;
        } while (uVar11 < (uint)param_1[0x2a].unused);
      }
    }
    break;
  case 0x618:
    FUN_5cd13500((uint *)param_1,0x9c4b);
    return (float *)0x0;
  case 0x619:
    local_28.cx = (uint)param_3 & 0xffff;
    uVar11 = 0;
    local_30.cx = 3;
    if (param_1[0x2a].unused != 0) {
      pHVar5 = param_1 + 0x35;
      do {
        pHVar5[-1].unused = 0;
        pHVar5->unused = 0;
        if ((param_1->unused & 2) != 0) {
          pHVar5[-1].unused = 0x3f800000;
          pHVar5->unused = 0x3f800000;
        }
        uVar11 = uVar11 + 1;
        pHVar5 = pHVar5 + 9;
      } while (uVar11 < (uint)param_1[0x2a].unused);
    }
    break;
  case 0x61a:
    pHVar5 = GetDC((HWND)param_1[2].unused);
    h = FUN_5cd2ba40(0x6e);
    param_4 = SelectObject(pHVar5,h);
    if ((pHVar4->unused & 0x80) == 0) {
      FUN_5cd20ca0(local_20,(BYTE *)(pHVar4 + 0x26));
      ptVar12 = &local_28;
      iVar6 = lstrlenA((LPCSTR)local_20);
      GetTextExtentPoint32A(pHVar5,(LPCSTR)local_20,iVar6,ptVar12);
      if (((pHVar4[1].unused & 0x800U) != 0) || (uVar11 = local_28.cx, (pHVar4[1].unused & 4U) == 0)
         ) {
        lpString = FUN_5cd08210(DAT_5cd67a38,0x1057);
        ptVar12 = &local_30;
        iVar6 = lstrlenA(lpString);
        GetTextExtentPoint32A(pHVar5,lpString,iVar6,ptVar12);
        uVar11 = local_30.cx;
        if (local_30.cx < local_28.cx) {
          uVar11 = local_28.cx;
        }
      }
      pfVar10 = (float *)((uVar11 + 2) * pHVar4[0x2a].unused);
    }
    else {
      ptVar12 = &local_28;
      param_1 = (HDC)CONCAT22(param_1._2_2_,0x30);
      iVar6 = lstrlenA((LPCSTR)&param_1);
      GetTextExtentPoint32A(pHVar5,(LPCSTR)&param_1,iVar6,ptVar12);
      if ((pHVar4[1].unused & 1) == 0) {
        iVar7 = FUN_5cd0eb70((byte *)pHVar4,pHVar5);
        FUN_5cd0ea40((int)pHVar4,pHVar5,&local_30.cx);
        iVar6 = (local_28.cy * 9) / 0xb + 2;
        if (local_30.cy < iVar6) {
          pfVar10 = (float *)((iVar7 + iVar6) * (pHVar4[0x2a].unused + -1) + iVar6);
        }
        else {
          pfVar10 = (float *)((iVar7 + iVar6) * (pHVar4[0x2a].unused + -1) + local_30.cy);
        }
      }
      else {
        iVar7 = FUN_5cd0eb70((byte *)pHVar4,pHVar5);
        FUN_5cd0ea40((int)pHVar4,pHVar5,&local_30.cx);
        iVar6 = (local_28.cx * 9) / 5 + 2;
        if (local_30.cx < iVar6) {
          pfVar10 = (float *)((iVar7 + iVar6) * (pHVar4[0x2a].unused + -1) + iVar6);
        }
        else {
          pfVar10 = (float *)((iVar7 + iVar6) * (pHVar4[0x2a].unused + -1) + local_30.cx);
        }
      }
    }
    SelectObject(pHVar5,param_4);
    ReleaseDC((HWND)pHVar4[2].unused,pHVar5);
    return pfVar10;
  case 0x61b:
    if ((short)param_3 != 0) {
      param_1[0x2f].unused = (uint)param_3 >> 0x10;
      param_1[0x2e].unused = (int)param_4;
      return (float *)0x0;
    }
    param_1[0x2d].unused = (uint)param_3 >> 0x10;
    param_1[0x2c].unused = (int)param_4;
    return (float *)0x0;
  case 0x61c:
    uVar11 = (uint)param_3 >> 0x10;
    if (param_1[0x16].unused == 0) {
      param_1 = GetDC((HWND)param_1[2].unused);
      FUN_5cd11580((byte *)pHVar4,param_1);
      ReleaseDC((HWND)pHVar4[2].unused,param_1);
    }
    if (((uint)pfVar9 & 0xffff) != 2) {
      return (float *)0x0;
    }
    if ((pHVar4[1].unused & 1) != 0) {
      fVar8 = (float)(pHVar4[0x32].unused * uVar11 + pHVar4[0x31].unused +
                     (pHVar4[0x30].unused & (pHVar4[0x30].unused < 0) - 1));
      *param_4 = fVar8;
      param_4[2] = (float)(pHVar4[0xc].unused + (int)fVar8);
      fVar8 = (float)pHVar4[0x11].unused;
      param_4[1] = fVar8;
      param_4[3] = (float)((pHVar4[0xd].unused - pHVar4[0x11].unused) + (int)fVar8);
      return (float *)0x0;
    }
    *param_4 = 0.0;
    param_4[2] = (float)(pHVar4[0x10].unused + pHVar4[0xc].unused);
    fVar8 = (float)((pHVar4[0x30].unused & (pHVar4[0x30].unused < 0) - 1) +
                   pHVar4[0x32].unused * uVar11 + pHVar4[0x31].unused);
    param_4[1] = fVar8;
    param_4[3] = (float)(pHVar4[0xd].unused + (int)fVar8);
    return (float *)0x0;
  case 0x61d:
    uVar11 = param_1[1].unused;
    param_1[1].unused = ((uint)param_4 & 1) << 10 | uVar11 & 0xfffffbff;
    return (float *)((int)(uVar11 << 0x15) >> 0x1f);
  case 0x61e:
    param_1[1].unused = (uint)(param_3 == (float *)0x0) << 0xb | param_1[1].unused & 0xfffff7ffU;
    return (float *)0x0;
  default:
    goto switchD_5cd13755_default;
  }
  if ((local_30.cx & 2U) != 0) {
    FUN_5cd13340((int)pHVar4);
  }
  if ((pHVar4[1].unused & 8) == 0) {
    InvalidateRect((HWND)pHVar4[2].unused,(RECT *)(pHVar4 + 6),0);
  }
LAB_5cd13ad1:
  if ((local_28.cx != 0) && ((pHVar4[1].unused & 8) == 0)) {
    UpdateWindow((HWND)pHVar4[2].unused);
  }
switchD_5cd13755_default:
  return pfVar10;
}


