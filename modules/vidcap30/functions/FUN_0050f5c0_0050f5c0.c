/* Module: vidcap30.exe
   Function: FUN_0050f5c0
   Address: 0050f5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_0050f5c0(HDC param_1,undefined4 param_2,float *param_3,float *param_4)

{
  float10 fVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  HDC hdc;
  HGDIOBJ h;
  int iVar5;
  int iVar6;
  LPCSTR lpString;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  undefined4 uVar12;
  tagSIZE *ptVar13;
  tagSIZE local_30;
  tagSIZE local_28;
  CHAR local_20 [32];
  
  pfVar8 = param_3;
  puVar2 = (uint *)param_1;
  pfVar10 = (float *)0x0;
  local_30.cx = 0;
  local_28.cx = 0;
  switch(param_2) {
  case 0x60a:
    param_3 = (float *)((uint)param_3 >> 0x10);
    if (param_3 != (float *)0x0) {
      if (*(float **)(param_1 + 0x2a) <= param_3) {
        param_3 = *(float **)(param_1 + 0x2a);
      }
      if (param_3 != (float *)0x0) {
        pfVar10 = (float *)(param_1 + 0x33);
        pfVar8 = param_3;
        do {
          fVar7 = *pfVar10;
          pfVar10 = pfVar10 + 9;
          *param_4 = fVar7;
          param_4 = param_4 + 1;
          pfVar8 = (float *)((int)pfVar8 - 1);
        } while (pfVar8 != (float *)0x0);
      }
      return param_3;
    }
    return *(float **)(param_1 + 0x33);
  case 0x60b:
    if (param_4 == (float *)0x0) {
      return *(float **)(param_1 + 0x1f);
    }
    if ((*(uint *)(param_1 + 1) & 4) == 0) {
      *param_4 = *(float *)(param_1 + 0x1f);
    }
    else {
      *param_4 = (float)*(double *)(param_1 + 0x22);
    }
    if (param_3 == (float *)0x0) {
      return (float *)0x0;
    }
    *param_3 = (float)((int)(*(uint *)(param_1 + 1) << 0x1d) >> 0x1f);
    return (float *)0x0;
  case 0x60c:
    local_28.cx = (uint)param_3 & 0xffff;
    pfVar10 = (float *)((uint)param_3 >> 0x10);
    local_30.cx = 1;
    if (pfVar10 == (float *)0x0) {
      param_1[0x33] = (HDC__)param_4;
      if ((int)param_4 < 0) {
        param_1[0x33] = 0;
        param_1[0x34] = 0;
        param_1[0x35] = 0;
        if ((*(uint *)param_1 & 2) == 0) {
          pfVar10 = *(float **)(param_1 + 0x33);
          param_1[0x36] = 0;
        }
        else {
          pfVar10 = (float *)0x0;
          param_1[0x36] = (HDC__)*(uint *)(param_1 + 0x21);
        }
      }
      else if (param_4 == (float *)0x0) {
        pfVar10 = *(float **)(param_1 + 0x33);
        param_1[0x34] = 0;
        param_1[0x35] = 0;
      }
      else {
        pfVar10 = *(float **)(param_1 + 0x21);
        if ((int)pfVar10 < (int)param_4) {
          pfVar8 = param_4;
          if ((int)param_4 < (int)*(float **)(param_1 + 0x36)) {
            pfVar8 = *(float **)(param_1 + 0x36);
          }
          param_1[0x36] = (HDC__)pfVar8;
          param_1[0x33] = (HDC__)pfVar10;
        }
        else {
          if ((*(uint *)param_1 & 2) == 0) {
            if ((int)*(uint *)(param_1 + 0x36) < (int)param_4) {
              param_1[0x36] = (HDC__)param_4;
            }
          }
          else if ((int)param_4 < (int)*(uint *)(param_1 + 0x36)) {
            pfVar10 = *(float **)(param_1 + 0x33);
            param_1[0x36] = (HDC__)param_4;
            break;
          }
          pfVar10 = *(float **)(param_1 + 0x33);
        }
      }
    }
    else {
      pfVar8 = *(float **)(param_1 + 0x2a);
      if (pfVar8 <= pfVar10) {
        pfVar10 = pfVar8;
      }
      uVar11 = 0;
      if (pfVar8 != (float *)0x0) {
        pfVar8 = (float *)(param_1 + 0x36);
        pfVar9 = param_4;
        do {
          fVar7 = *pfVar9;
          pfVar8[-3] = fVar7;
          if ((int)fVar7 < 0) {
            pfVar8[-3] = 0.0;
            pfVar8[-2] = 0.0;
            pfVar8[-1] = 0.0;
            if ((*(uint *)param_1 & 2) == 0) {
              fVar7 = 0.0;
            }
            else {
              fVar7 = *(float *)(param_1 + 0x21);
            }
            goto LAB_0050f7ab;
          }
          if (fVar7 == 0.0) {
            pfVar8[-2] = 0.0;
            pfVar8[-1] = 0.0;
          }
          else if ((int)*(uint *)(param_1 + 0x21) < (int)fVar7) {
            if ((int)fVar7 < (int)*pfVar8) {
              fVar7 = *pfVar8;
            }
            *pfVar8 = fVar7;
            pfVar8[-3] = *(float *)(param_1 + 0x21);
          }
          else if ((*(uint *)param_1 & 2) == 0) {
            if ((int)*pfVar8 < (int)fVar7) goto LAB_0050f7ab;
          }
          else if ((int)fVar7 < (int)*pfVar8) {
LAB_0050f7ab:
            *pfVar8 = fVar7;
          }
          uVar11 = uVar11 + 1;
          pfVar9 = pfVar9 + 1;
          pfVar8 = pfVar8 + 9;
        } while (uVar11 < *(uint *)(param_1 + 0x2a));
      }
    }
    break;
  case 0x60d:
    local_30.cx = 3;
    local_28.cx = (uint)param_3 & 0xffff;
    if ((int)param_4 < 2) {
      param_4 = (float *)0x1;
    }
    param_1[0x1f] = (HDC__)param_4;
    fVar1 = (float10)_DAT_00587ad0;
    *(double *)(param_1 + 0x22) = (double)(fVar1 / (float10)(int)param_4);
    fVar1 = (float10)log2(fVar1 / (float10)(int)param_4);
    *(double *)(param_1 + 0x24) = (double)((float10)0.3010299956639812 * fVar1);
    if ((int)(*(uint *)(param_1 + 1) << 0x1d) >> 0x1f != (uint)param_3 >> 0x10) {
      param_1[1] = (HDC__)(((uint)param_3 >> 0x10 & 1) << 2 | *(uint *)(param_1 + 1) & 0xfffffffb);
      for (uVar11 = *(uint *)(param_1 + 0x2a); uVar11 != 0; uVar11 = uVar11 - 1) {
        param_1[0x33] = 0;
      }
    }
    param_1[0x21] = (HDC__)((int)param_4 - 1);
    if ((*(uint *)(param_1 + 1) & 4) != 0) {
      param_1[0x21] = 0x3f800000;
    }
    uVar11 = 0;
    if (*(uint *)(param_1 + 0x2a) != 0) {
      puVar3 = (uint *)(param_1 + 0x35);
      do {
        puVar3[-1] = 0;
        *puVar3 = 0;
        if ((*(uint *)param_1 & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(param_1 + 0x21);
        }
        puVar3[1] = uVar4;
        uVar11 = uVar11 + 1;
        puVar3 = puVar3 + 9;
      } while (uVar11 < *(uint *)(param_1 + 0x2a));
    }
    pfVar10 = *(float **)(param_1 + 0x1f);
    break;
  case 0x60e:
    return *(float **)(param_1 + 0x20);
  case 0x60f:
    local_28.cx = (uint)param_3 & 0xffff;
    if (*(float **)(param_1 + 0x20) != param_4) {
      local_30.cx = 3;
      param_1[0x20] = (HDC__)param_4;
    }
    pfVar10 = *(float **)(param_1 + 0x20);
    goto LAB_0050f939;
  case 0x610:
    return (float *)(*(uint *)param_1 & 0xffff);
  case 0x611:
    uVar11 = *(uint *)param_1;
    if (param_4 == (float *)0x0) {
      uVar4 = uVar11 & ~((uint)param_3 & 0xffff);
    }
    else {
      uVar4 = uVar11 | (uint)param_3 & 0xffff;
    }
    if (uVar11 != uVar4) {
      *param_1 = (HDC__)uVar4;
      local_30.cx = 3;
    }
    pfVar10 = (float *)(*(uint *)param_1 & 0xffff);
    goto LAB_0050f939;
  case 0x612:
    return *(float **)(param_1 + 0x2a);
  case 0x613:
    local_28.cx = (uint)param_3 & 0xffff;
    pfVar10 = *(float **)(param_1 + 0x2b);
    if (param_4 <= *(float **)(param_1 + 0x2b)) {
      pfVar10 = param_4;
    }
    if (pfVar10 != *(float **)(param_1 + 0x2a)) {
      local_30.cx = 3;
    }
    param_1[0x2a] = (HDC__)pfVar10;
LAB_0050f939:
    if (local_30.cx != 0) break;
    goto LAB_0050f961;
  case 0x614:
    lstrcpynA((LPSTR)param_4,(LPCSTR)(param_1 + 0x26),(int)param_3);
    return pfVar8;
  case 0x615:
    local_28.cx = (uint)param_3 & 0xffff;
    param_1[1] = (HDC__)(((uint)param_3 >> 0x10 & 1) << 1 | *(uint *)(param_1 + 1) & 0xfffffffd);
    local_30.cx = 1;
    lstrcpynA((LPSTR)(param_1 + 0x26),(LPCSTR)param_4,0x10);
    break;
  case 0x616:
    param_3 = (float *)((uint)param_3 >> 0x10);
    if (param_3 != (float *)0x0) {
      if (*(float **)(param_1 + 0x2a) <= param_3) {
        param_3 = *(float **)(param_1 + 0x2a);
      }
      if (param_3 != (float *)0x0) {
        pfVar10 = (float *)(param_1 + 0x36);
        pfVar8 = param_3;
        do {
          fVar7 = *pfVar10;
          pfVar10 = pfVar10 + 9;
          *param_4 = fVar7;
          param_4 = param_4 + 1;
          pfVar8 = (float *)((int)pfVar8 - 1);
        } while (pfVar8 != (float *)0x0);
      }
      return param_3;
    }
    return *(float **)(param_1 + 0x36);
  case 0x617:
    local_28.cx = (uint)param_3 & 0xffff;
    pfVar10 = (float *)((uint)param_3 >> 0x10);
    local_30.cx = 1;
    if (pfVar10 == (float *)0x0) {
      param_1[0x36] = (HDC__)param_4;
      if ((int)param_4 < 0) {
        param_1[0x36] = 0;
      }
      pfVar10 = *(float **)(param_1 + 0x36);
    }
    else {
      pfVar8 = *(float **)(param_1 + 0x2a);
      if (pfVar8 <= pfVar10) {
        pfVar10 = pfVar8;
      }
      uVar11 = 0;
      if (pfVar8 != (float *)0x0) {
        pfVar8 = (float *)(param_1 + 0x36);
        pfVar9 = param_4;
        do {
          fVar7 = *pfVar9;
          *pfVar8 = fVar7;
          if ((int)fVar7 < 0) {
            *pfVar8 = 0.0;
          }
          uVar11 = uVar11 + 1;
          pfVar8 = pfVar8 + 9;
          pfVar9 = pfVar9 + 1;
        } while (uVar11 < *(uint *)(param_1 + 0x2a));
      }
    }
    break;
  case 0x618:
    FUN_0050f390(param_1,0x9c4b);
    return (float *)0x0;
  case 0x619:
    local_28.cx = (uint)param_3 & 0xffff;
    uVar11 = 0;
    local_30.cx = 3;
    if (*(uint *)(param_1 + 0x2a) != 0) {
      puVar3 = (uint *)(param_1 + 0x35);
      do {
        puVar3[-1] = 0;
        *puVar3 = 0;
        if ((*(uint *)param_1 & 2) != 0) {
          puVar3[-1] = 0x3f800000;
          *puVar3 = 0x3f800000;
        }
        uVar11 = uVar11 + 1;
        puVar3 = puVar3 + 9;
      } while (uVar11 < *(uint *)(param_1 + 0x2a));
    }
    break;
  case 0x61a:
    hdc = GetDC(*(HWND *)(param_1 + 2));
    h = (HGDIOBJ)_SfGetUIFont_4(0x6e);
    param_4 = SelectObject(hdc,h);
    if ((*puVar2 & 0x80) == 0) {
      if ((int)puVar2[0x20] < 0x8001) {
        uVar12 = 0xc0568000;
      }
      else {
        uVar12 = 0xc0614000;
      }
      SfPrintF(local_20,puVar2 + 0x26,0,uVar12);
      ptVar13 = &local_28;
      iVar5 = lstrlenA(local_20);
      GetTextExtentPoint32A(hdc,local_20,iVar5,ptVar13);
      if (((puVar2[1] & 0x800) != 0) || (uVar11 = local_28.cx, (puVar2[1] & 4) == 0)) {
        lpString = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x1058);
        ptVar13 = &local_30;
        iVar5 = lstrlenA(lpString);
        GetTextExtentPoint32A(hdc,lpString,iVar5,ptVar13);
        uVar11 = local_30.cx;
        if (local_30.cx < local_28.cx) {
          uVar11 = local_28.cx;
        }
      }
      pfVar10 = (float *)((uVar11 + 2) * puVar2[0x2a]);
    }
    else {
      ptVar13 = &local_28;
      param_1 = (HDC)CONCAT22(param_1._2_2_,0x30);
      iVar5 = lstrlenA((LPCSTR)&param_1);
      GetTextExtentPoint32A(hdc,(LPCSTR)&param_1,iVar5,ptVar13);
      if ((puVar2[1] & 1) == 0) {
        iVar6 = FUN_0050aa00(puVar2,hdc);
        FUN_0050a8d0(puVar2,hdc,&local_30);
        iVar5 = (local_28.cy * 9) / 0xb + 2;
        if (local_30.cy < iVar5) {
          pfVar10 = (float *)((iVar6 + iVar5) * (puVar2[0x2a] - 1) + iVar5);
        }
        else {
          pfVar10 = (float *)((iVar6 + iVar5) * (puVar2[0x2a] - 1) + local_30.cy);
        }
      }
      else {
        iVar6 = FUN_0050aa00(puVar2,hdc);
        FUN_0050a8d0(puVar2,hdc,&local_30);
        iVar5 = (local_28.cx * 9) / 5 + 2;
        if (local_30.cx < iVar5) {
          pfVar10 = (float *)((iVar6 + iVar5) * (puVar2[0x2a] - 1) + iVar5);
        }
        else {
          pfVar10 = (float *)((iVar6 + iVar5) * (puVar2[0x2a] - 1) + local_30.cx);
        }
      }
    }
    SelectObject(hdc,param_4);
    ReleaseDC((HWND)puVar2[2],hdc);
    return pfVar10;
  case 0x61b:
    if ((short)param_3 == 0) {
      param_1[0x2d] = (HDC__)((uint)param_3 >> 0x10);
      param_1[0x2c] = (HDC__)param_4;
      return (float *)0x0;
    }
    param_1[0x2f] = (HDC__)((uint)param_3 >> 0x10);
    param_1[0x2e] = (HDC__)param_4;
    return (float *)0x0;
  case 0x61c:
    uVar11 = (uint)param_3 >> 0x10;
    if (*(uint *)(param_1 + 0x16) == 0) {
      param_1 = GetDC(*(HWND *)(param_1 + 2));
      FUN_0050d410(puVar2,param_1);
      ReleaseDC((HWND)puVar2[2],param_1);
    }
    if (((uint)pfVar8 & 0xffff) != 2) {
      return (float *)0x0;
    }
    if ((puVar2[1] & 1) == 0) {
      *param_4 = 0.0;
      param_4[2] = (float)(puVar2[0x10] + puVar2[0xc]);
      fVar7 = (float)((puVar2[0x30] & ((int)puVar2[0x30] < 0) - 1) +
                     puVar2[0x32] * uVar11 + puVar2[0x31]);
      param_4[1] = fVar7;
      param_4[3] = (float)(puVar2[0xd] + (int)fVar7);
      return (float *)0x0;
    }
    fVar7 = (float)(puVar2[0x32] * uVar11 + puVar2[0x31] +
                   (puVar2[0x30] & ((int)puVar2[0x30] < 0) - 1));
    *param_4 = fVar7;
    param_4[2] = (float)(puVar2[0xc] + (int)fVar7);
    fVar7 = (float)puVar2[0x11];
    param_4[1] = fVar7;
    param_4[3] = (float)((puVar2[0xd] - puVar2[0x11]) + (int)fVar7);
    return (float *)0x0;
  case 0x61d:
    uVar11 = *(uint *)(param_1 + 1);
    param_1[1] = (HDC__)(((uint)param_4 & 1) << 10 | uVar11 & 0xfffffbff);
    return (float *)((int)(uVar11 << 0x15) >> 0x1f);
  case 0x61e:
    param_1[1] = (HDC__)((uint)(param_3 == (float *)0x0) << 0xb |
                        *(uint *)(param_1 + 1) & 0xfffff7ff);
    return (float *)0x0;
  default:
    goto switchD_0050f5e5_default;
  }
  if ((local_30.cx & 2U) != 0) {
    FUN_0050f1d0(puVar2);
  }
  if ((puVar2[1] & 8) == 0) {
    InvalidateRect((HWND)puVar2[2],(RECT *)(puVar2 + 6),0);
  }
LAB_0050f961:
  if ((local_28.cx != 0) && ((puVar2[1] & 8) == 0)) {
    UpdateWindow((HWND)puVar2[2]);
  }
switchD_0050f5e5_default:
  return pfVar10;
}


