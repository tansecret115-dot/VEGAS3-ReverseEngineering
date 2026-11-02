/* Module: vegas30.exe
   Function: FUN_005459b0
   Address: 005459b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_005459b0(int param_1,HDC param_2,int *param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int param_7,undefined4 param_8)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  BOOL BVar9;
  HGLOBAL pvVar10;
  uchar *_Dest;
  char *pcVar11;
  int iVar12;
  COLORREF color;
  int *piVar13;
  WORD *pWVar14;
  int iVar15;
  uint uVar16;
  DWORD DVar17;
  LPARAM lParam;
  undefined4 *puVar18;
  tagBITMAPINFOHEADER *ptVar19;
  LONG LVar20;
  LONG LVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  tagBITMAPINFOHEADER *ptStack_428;
  WORD *local_424;
  tagBITMAPINFOHEADER *ptStack_420;
  WORD *pWStack_41c;
  int iStack_418;
  int local_414;
  RECT local_410;
  undefined1 auStack_400 [1024];
  
  if (param_6 != 0) {
    uVar4 = ftol();
    uVar5 = ftol();
    uVar16 = ftol();
    color = SetBkColor(param_2,(uint)CONCAT11(uVar4,uVar5) << 8 | uVar16 & 0xff);
    local_410.right = *(LONG *)(param_1 + 0x1d0);
    local_410.left = *(LONG *)(param_1 + 0x1c8);
    local_410.top = *(LONG *)(param_1 + 0x1cc);
    local_410.bottom = *(LONG *)(param_1 + 0x1d4);
    ExtTextOutA(param_2,0,0,2,&local_410,(LPCSTR)0x0,0,(INT *)0x0);
    SetBkColor(param_2,color);
    return (int)local_424;
  }
  if (param_7 != 0) {
    iVar6 = FUN_00562830(param_7);
    iVar7 = FUN_00562a10(param_7);
    uVar16 = param_3[0x10d] & 4;
    if ((uVar16 != 0) && (iVar7 == 0)) {
      lParam = 0;
LAB_00545a1f:
      FUN_00562840(param_7,*param_3,param_4,param_5,(uint)param_3[0x10d] >> 2 & 1,param_3[0x10b],
                   param_3[0x10c],param_8);
      if (*(HWND *)(param_1 + 8) == (HWND)0x0) {
        return (int)local_424;
      }
      PostMessageA(*(HWND *)(param_1 + 8),0x664,0,lParam);
      return (int)local_424;
    }
    if (((uVar16 != 0) || (iVar6 != 0)) && ((DAT_0064a554 != 0 && (iVar7 == 0)))) {
      lParam = 1;
      goto LAB_00545a1f;
    }
  }
  if (*(HWND *)(param_1 + 8) == (HWND)0x0) {
    return (int)local_424;
  }
  if ((*(byte *)(param_3 + 0x10d) & 4) != 0) {
    return (int)local_424;
  }
  local_414 = 0;
  PostMessageA(*(HWND *)(param_1 + 8),0x664,0,2);
  iVar6 = _SfIsHighColor_0();
  if (iVar6 == 0) {
    uVar8 = FUN_004019f0();
    DrawDibSetPalette(*(undefined4 *)(param_1 + 0xb4),uVar8);
  }
  if (*(int *)(param_1 + 0xbc) == 0x20) {
    piVar13 = (int *)param_3[0x10b];
    piVar3 = (int *)*param_3;
    if (piVar13 == (int *)0x0) {
      if (piVar3[4] == 0) {
        if (((piVar3[8] != 0) || (uVar2 = *(ushort *)((int)piVar3 + 0xe), uVar2 == 0)) ||
           (8 < uVar2)) goto LAB_00545b17;
        iVar6 = 1 << ((byte)uVar2 & 0x1f);
      }
      else {
        if (piVar3[4] == 3) {
          piVar13 = piVar3 + 0xd;
          goto LAB_00545b21;
        }
LAB_00545b17:
        iVar6 = piVar3[8];
      }
      piVar13 = (int *)(*piVar3 + iVar6 * 4 + (int)piVar3);
    }
LAB_00545b21:
    _SfDibCopy_36(*(undefined4 *)(param_1 + 0xc0),0,0,0,piVar3,piVar13,0,param_3[0x10c],3);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
    iVar6 = *(int *)(param_1 + 0x268);
    uVar8 = *(undefined4 *)(param_1 + 0x26c);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
    if (iVar6 != -1) {
      _SfDibIsolateChannel_28(*(undefined4 *)(param_1 + 0xc0),0,0,0,iVar6,uVar8,3);
    }
    ptVar19 = *(tagBITMAPINFOHEADER **)(param_1 + 0xc0);
    pWStack_41c = (WORD *)0x0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
    ptStack_420 = *(tagBITMAPINFOHEADER **)(param_1 + 0x268);
    local_424 = *(WORD **)(param_1 + 0x26c);
    iVar6 = *(int *)(param_1 + 0x284);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
    if (iVar6 == 0) {
      if (ptStack_420 == (tagBITMAPINFOHEADER *)0xffffffff) {
        ptVar19 = (tagBITMAPINFOHEADER *)*param_3;
        pWStack_41c = (WORD *)param_3[0x10b];
      }
      else {
        piVar13 = (int *)param_3[0x10b];
        piVar3 = (int *)*param_3;
        if (piVar13 == (int *)0x0) {
          if (piVar3[4] == 0) {
            if (((piVar3[8] != 0) || (uVar2 = *(ushort *)((int)piVar3 + 0xe), uVar2 == 0)) ||
               (8 < uVar2)) goto LAB_00545d01;
            iVar6 = 1 << ((byte)uVar2 & 0x1f);
          }
          else {
            if (piVar3[4] == 3) {
              piVar13 = piVar3 + 0xd;
              goto LAB_00545d0b;
            }
LAB_00545d01:
            iVar6 = piVar3[8];
          }
          piVar13 = (int *)(*piVar3 + iVar6 * 4 + (int)piVar3);
        }
LAB_00545d0b:
        _SfDibCopy_36(*(undefined4 *)(param_1 + 0xc0),0,0,0,piVar3,piVar13,0,param_3[0x10c],3);
        _SfDibIsolateChannel_28(*(undefined4 *)(param_1 + 0xc0),0,0,0,ptStack_420,local_424,3);
        ptVar19 = *(tagBITMAPINFOHEADER **)(param_1 + 0xc0);
        pWStack_41c = (WORD *)0x0;
      }
    }
    else {
      piVar13 = (int *)param_3[0x10b];
      piVar3 = (int *)*param_3;
      if (piVar13 == (int *)0x0) {
        if (piVar3[4] == 0) {
          if (((piVar3[8] != 0) || (uVar2 = *(ushort *)((int)piVar3 + 0xe), uVar2 == 0)) ||
             (8 < uVar2)) goto LAB_00545bfc;
          iVar7 = 1 << ((byte)uVar2 & 0x1f);
        }
        else {
          if (piVar3[4] == 3) {
            piVar13 = piVar3 + 0xd;
            goto LAB_00545c06;
          }
LAB_00545bfc:
          iVar7 = piVar3[8];
        }
        piVar13 = (int *)(*piVar3 + iVar7 * 4 + (int)piVar3);
      }
LAB_00545c06:
      _SfDibCopy_36(*(undefined4 *)(param_1 + 0xc0),0,0,0,piVar3,piVar13,0,param_3[0x10c],3);
      _SfDibHistogram_40(*(undefined4 *)(param_1 + 0xc0),0,0,0,(iVar6 != 3) - 1 & (uint)auStack_400,
                         (iVar6 != 2) - 1 & (uint)auStack_400,
                         ~-(uint)(iVar6 != 1) & (uint)auStack_400,
                         (iVar6 != 4) - 1 & (uint)auStack_400,0,(iVar6 != 5) - 1 & (uint)auStack_400
                        );
      FUN_005452d0(*(undefined4 *)(param_1 + 0xc0),0,0,auStack_400,iVar6);
      ptVar19 = *(tagBITMAPINFOHEADER **)(param_1 + 0xc0);
      pWStack_41c = (WORD *)0x0;
      local_414 = 1;
    }
  }
  pWVar14 = pWStack_41c;
  if (DAT_0064bc0c != 0) {
    DAT_0064bc0c = 0;
    LVar21 = ptVar19->biHeight;
    LVar20 = ptVar19->biWidth;
    uVar24 = 0x80000000;
    uVar23 = 0;
    uVar22 = 0;
    ptStack_428 = (tagBITMAPINFOHEADER *)0x0;
    uVar8 = _SfGetPixelType_4(ptVar19);
    local_424 = (WORD *)_SfDibAlloc_28(&ptStack_428,uVar8,LVar20,LVar21,uVar22,uVar23,uVar24);
    if ((-1 < (int)local_424) && (ptStack_428 != (tagBITMAPINFOHEADER *)0x0)) {
      local_424 = (WORD *)_SfDibCopy_36(ptStack_428,0,0,0,ptVar19,pWVar14,0,0,3);
      if ((-1 < (int)local_424) && (BVar9 = OpenClipboard(*(HWND *)(param_1 + 8)), BVar9 != 0)) {
        EmptyClipboard();
        GlobalHandle(ptStack_428);
        pvVar10 = GlobalHandle(ptStack_428);
        SetClipboardData(8,pvVar10);
        ptStack_428 = (tagBITMAPINFOHEADER *)0x0;
        CloseClipboard();
      }
      if (ptStack_428 != (tagBITMAPINFOHEADER *)0x0) {
        _SfDibFree_8(ptStack_428,0x80000000);
      }
    }
  }
  if (DAT_0064bc10 != 0) {
    DAT_0064bc10 = 0;
    pvVar10 = GlobalAlloc(0x40,0x104);
    _Dest = GlobalLock(pvVar10);
    if (_Dest == (uchar *)0x0) {
      return -0x7ff8fff2;
    }
    _mbscpy(_Dest,&DAT_0064bb08);
    ptStack_428 = (tagBITMAPINFOHEADER *)0x0;
    local_424 = pWStack_41c;
    ptStack_420 = ptVar19;
    if (DAT_0064adcc != 0) {
      local_410.top = 0;
      local_410.right = 0;
      local_410.bottom = 0;
      uVar8 = ftol();
      iVar6 = _SfDibAlloc_28(&ptStack_428,0x1c,uVar8,ptVar19->biHeight,0,0,0);
      if ((-1 < iVar6) &&
         (iVar6 = _SfDibCopy_36(ptStack_428,0,0,0,ptVar19,pWStack_41c,0,0,0x7000004), -1 < iVar6)) {
        ptStack_420 = ptStack_428;
        if (ptStack_428->biCompression == 0) {
          if (((ptStack_428->biClrUsed != 0) || (uVar2 = ptStack_428->biBitCount, uVar2 == 0)) ||
             (8 < uVar2)) goto LAB_00545f17;
          DVar17 = 1 << ((byte)uVar2 & 0x1f);
        }
        else {
          if (ptStack_428->biCompression == 3) {
            local_424 = &ptStack_428[1].biPlanes;
            goto LAB_00545f25;
          }
LAB_00545f17:
          DVar17 = ptStack_428->biClrUsed;
        }
        local_424 = (WORD *)((int)&ptStack_428->biSize + ptStack_428->biSize + DVar17 * 4);
      }
    }
LAB_00545f25:
    pcVar11 = (char *)FUN_005ec620();
    iStack_418 = 0;
    if ((pcVar11 != (char *)0x0) && (iStack_418 = 0, *pcVar11 != '\0')) {
      puVar18 = *(undefined4 **)(pcVar11 + 8);
      bVar1 = *(byte *)(puVar18 + 6);
      while ((bVar1 & 2) != 2) {
        iVar6 = lstrcmpiA((LPCSTR)_Dest,(LPCSTR)*puVar18);
        if (iVar6 == 0) break;
        if (iVar6 < 0) {
          puVar18 = (undefined4 *)puVar18[4];
        }
        else {
          puVar18 = (undefined4 *)puVar18[5];
        }
        bVar1 = *(byte *)(puVar18 + 6);
      }
      if ((*(byte *)(puVar18 + 6) & 2) != 2) {
        iStack_418 = puVar18[1];
        Transport_Suspend();
        FUN_00543290();
        FUN_005f0120(0);
      }
    }
    if (DAT_0064acac == 0) {
      local_424 = (WORD *)SfSaveDiskJpegDib((char *)_Dest,ptStack_420,local_424,
                                            (SFJPEGFILEOPTIONS *)0x0);
      if (-1 < (int)local_424) {
        iVar6 = PostMessageA(*(HWND *)(param_1 + 8),0x665,0,(LPARAM)_Dest);
        goto joined_r0x00546015;
      }
LAB_00546018:
      pvVar10 = GlobalHandle(_Dest);
      GlobalUnlock(pvVar10);
      pvVar10 = GlobalHandle(_Dest);
      GlobalFree(pvVar10);
    }
    else {
      local_410.left = 0x1c;
      local_410.top = 0;
      local_424 = (WORD *)SfSaveDiskPngDib((char *)_Dest,ptStack_420,local_424,
                                           (SFPNGFILEOPTIONS *)&local_410);
      if ((int)local_424 < 0) goto LAB_00546018;
      iVar6 = PostMessageA(*(HWND *)(param_1 + 8),0x665,0,(LPARAM)_Dest);
joined_r0x00546015:
      if (iVar6 == 0) goto LAB_00546018;
    }
    if (ptStack_428 != (tagBITMAPINFOHEADER *)0x0) {
      _SfDibFree_8(ptStack_428,0);
      ptStack_428 = (tagBITMAPINFOHEADER *)0x0;
    }
    if (iStack_418 != 0) {
      FUN_005effc0(0);
      FUN_005432d0();
      Transport_Resume(0);
    }
  }
  if (DAT_0064bc14 == (tagBITMAPINFOHEADER *)0x0) {
    pWVar14 = pWStack_41c;
    if (pWStack_41c == (WORD *)0x0) {
      if (ptVar19->biCompression == 0) {
        if (((ptVar19->biClrUsed != 0) || (uVar2 = ptVar19->biBitCount, uVar2 == 0)) || (8 < uVar2))
        goto LAB_00546128;
        iVar6 = ptVar19->biSize + (1 << ((byte)uVar2 & 0x1f)) * 4;
      }
      else {
        if (ptVar19->biCompression == 3) {
          pWVar14 = &ptVar19[1].biPlanes;
          goto LAB_00546134;
        }
LAB_00546128:
        iVar6 = ptVar19->biSize + ptVar19->biClrUsed * 4;
      }
      pWVar14 = (WORD *)((int)&ptVar19->biSize + iVar6);
    }
LAB_00546134:
    iVar6 = *(int *)(param_1 + 0x1cc);
    iVar7 = *(int *)(param_1 + 0x1c8);
    iVar12 = *(int *)(param_1 + 0x1d4) - iVar6;
    iVar15 = *(int *)(param_1 + 0x1d0) - iVar7;
    uVar8 = *(undefined4 *)(param_1 + 0xb4);
    goto LAB_0054616f;
  }
  if (DAT_0064bc14->biCompression == 0) {
    if (((DAT_0064bc14->biClrUsed != 0) || (uVar2 = DAT_0064bc14->biBitCount, uVar2 == 0)) ||
       (8 < uVar2)) goto LAB_005460a0;
    DVar17 = 1 << ((byte)uVar2 & 0x1f);
LAB_005460a3:
    pWVar14 = (WORD *)((int)&DAT_0064bc14->biSize + DAT_0064bc14->biSize + DVar17 * 4);
  }
  else {
    if (DAT_0064bc14->biCompression != 3) {
LAB_005460a0:
      DVar17 = DAT_0064bc14->biClrUsed;
      goto LAB_005460a3;
    }
    pWVar14 = &DAT_0064bc14[1].biPlanes;
  }
  iVar6 = *(int *)(param_1 + 0x1cc);
  iVar7 = *(int *)(param_1 + 0x1c8);
  iVar12 = *(int *)(param_1 + 0x1d4) - iVar6;
  iVar15 = *(int *)(param_1 + 0x1d0) - iVar7;
  uVar8 = *(undefined4 *)(param_1 + 0xb4);
  ptVar19 = DAT_0064bc14;
LAB_0054616f:
  FUN_00544e90(uVar8,param_2,iVar7,iVar6,iVar15,iVar12,ptVar19,pWVar14,0,0,0xffffffff,0xffffffff,0);
  if (local_414 != 0) {
    return (int)local_424;
  }
  FUN_00544ee0(param_2,*(undefined4 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x22c));
  return (int)local_424;
}


