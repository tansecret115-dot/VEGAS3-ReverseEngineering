/* Module: vegas30.exe
   Function: FUN_004fe2c0
   Address: 004fe2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004fe2c0(int param_1)

{
  ushort uVar1;
  HDC hdc;
  int iVar2;
  HGDIOBJ pvVar3;
  HDC pHVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int x;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  RECT local_468;
  HGDIOBJ local_458;
  int local_454;
  int local_450;
  HGDIOBJ local_44c;
  int local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined1 local_434 [1064];
  HGDIOBJ local_c;
  HDC local_8;
  undefined4 local_4;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    iVar2 = _SfDibAlloc_28((int *)(param_1 + 0x188),0x1c,*(undefined4 *)(param_1 + 0x160),
                           *(undefined4 *)(param_1 + 0x164),0,0,0);
    if (iVar2 < 0) {
      return iVar2;
    }
    piVar7 = *(int **)(param_1 + 0x188);
    if (piVar7[4] == 0) {
      if (((piVar7[8] != 0) || (uVar1 = *(ushort *)((int)piVar7 + 0xe), uVar1 == 0)) || (8 < uVar1))
      goto LAB_004fe335;
      iVar2 = 1 << ((byte)uVar1 & 0x1f);
LAB_004fe338:
      piVar6 = (int *)(*piVar7 + iVar2 * 4 + (int)piVar7);
    }
    else {
      if (piVar7[4] != 3) {
LAB_004fe335:
        iVar2 = piVar7[8];
        goto LAB_004fe338;
      }
      piVar6 = piVar7 + 0xd;
    }
    _SfDibSet_36(piVar7,piVar6,0,0,0x3f000000,0x3f000000,0x3e800000,0x3f800000,3);
    iVar2 = _SfDibAlloc_28((int *)(param_1 + 0x18c),0x1c,*(undefined4 *)(param_1 + 0x160),
                           *(undefined4 *)(param_1 + 0x164),0,0,0);
    if (iVar2 < 0) {
      return iVar2;
    }
    piVar7 = *(int **)(param_1 + 0x18c);
    if (piVar7[4] == 0) {
      if (((piVar7[8] != 0) || (uVar1 = *(ushort *)((int)piVar7 + 0xe), uVar1 == 0)) || (8 < uVar1))
      goto LAB_004fe3b6;
      iVar2 = 1 << ((byte)uVar1 & 0x1f);
LAB_004fe3b9:
      piVar6 = (int *)(*piVar7 + iVar2 * 4 + (int)piVar7);
    }
    else {
      if (piVar7[4] != 3) {
LAB_004fe3b6:
        iVar2 = piVar7[8];
        goto LAB_004fe3b9;
      }
      piVar6 = piVar7 + 0xd;
    }
    uVar10 = 0x3f000000;
    uVar9 = 0x3e800000;
    uVar8 = 0x3e800000;
LAB_004fe461:
    _SfDibSet_36(piVar7,piVar6,0,0,uVar8,uVar9,uVar10,0x3f800000,3);
  }
  else if ((iVar2 == 1) || (iVar2 == 2)) {
    iVar2 = _SfDibAlloc_28((undefined4 *)(param_1 + 400),0x1c,*(undefined4 *)(param_1 + 0x160),
                           *(undefined4 *)(param_1 + 0x164),0,0,0);
    if (iVar2 < 0) {
      return iVar2;
    }
    piVar7 = *(int **)(param_1 + 400);
    if (piVar7[4] == 0) {
      if (((piVar7[8] != 0) || (uVar1 = *(ushort *)((int)piVar7 + 0xe), uVar1 == 0)) || (8 < uVar1))
      goto LAB_004fe441;
      iVar2 = 1 << ((byte)uVar1 & 0x1f);
LAB_004fe444:
      piVar6 = (int *)(*piVar7 + iVar2 * 4 + (int)piVar7);
    }
    else {
      if (piVar7[4] != 3) {
LAB_004fe441:
        iVar2 = piVar7[8];
        goto LAB_004fe444;
      }
      piVar6 = piVar7 + 0xd;
    }
    uVar10 = 0x3e800000;
    uVar9 = 0x3f000000;
    uVar8 = 0x3f000000;
    goto LAB_004fe461;
  }
  local_438 = *(undefined4 *)(param_1 + 0x164);
  local_43c = *(undefined4 *)(param_1 + 0x160);
  local_444 = 0;
  local_440 = 0;
  local_448 = FUN_00548ec0(local_434,local_43c,local_438,0x1c);
  hdc = local_8;
  if (local_448 < 0) {
    return local_448;
  }
  local_44c = SelectObject(local_8,local_c);
  iVar2 = _SfGetUIFontSize_4(0x86);
  pvVar3 = (HGDIOBJ)_SfGetUIFont_4(0x86);
  SelectObject(hdc,pvVar3);
  x = *(int *)(param_1 + 0x160) / 2;
  iVar2 = (*(int *)(param_1 + 0x164) - *(int *)(iVar2 + 4)) / 2;
  local_454 = x;
  local_450 = iVar2;
  SetTextAlign(hdc,6);
  local_468.right = *(int *)(param_1 + 0x160);
  local_468.bottom = *(int *)(param_1 + 0x164);
  local_468.left = 0;
  local_468.top = 0;
  if (*(int *)(param_1 + 8) == 0) {
    SetTextColor(hdc,0);
    SetBkColor(hdc,0xcae6e4);
    ExtTextOutA(hdc,x,iVar2,6,&local_468,"A",1,(INT *)0x0);
    pvVar3 = (HGDIOBJ)_SfLoadBitmap_8(DAT_00647204,0x626);
    if (pvVar3 != (HGDIOBJ)0x0) {
      pHVar4 = CreateCompatibleDC(hdc);
      local_458 = SelectObject(pHVar4,pvVar3);
      BitBlt(hdc,local_468.left,local_468.top,local_468.right - local_468.left,
             local_468.bottom - local_468.top,pHVar4,0,0,0xcc0020);
      SelectObject(pHVar4,local_458);
      DeleteObject(pvVar3);
      DeleteDC(pHVar4);
    }
    GdiFlush();
    piVar7 = *(int **)(param_1 + 0x188);
    if (piVar7[4] == 0) {
      if (((piVar7[8] != 0) || (uVar1 = *(ushort *)((int)piVar7 + 0xe), uVar1 == 0)) || (8 < uVar1))
      goto LAB_004fe609;
      iVar2 = 1 << ((byte)uVar1 & 0x1f);
LAB_004fe60c:
      piVar6 = (int *)(*piVar7 + iVar2 * 4 + (int)piVar7);
    }
    else {
      if (piVar7[4] != 3) {
LAB_004fe609:
        iVar2 = piVar7[8];
        goto LAB_004fe60c;
      }
      piVar6 = piVar7 + 0xd;
    }
    _SfDibCopy_36(piVar7,piVar6,&local_468,0,local_434,local_4,&local_468,0,3);
    piVar7 = *(int **)(param_1 + 0x188);
    uVar5 = (uint)*(ushort *)((int)piVar7 + 0xe) * piVar7[1] + 0x1f;
    if (piVar7[4] == 0) {
      if (((piVar7[8] != 0) || (uVar1 = *(ushort *)((int)piVar7 + 0xe), uVar1 == 0)) || (8 < uVar1))
      goto LAB_004fe689;
      iVar2 = 1 << ((byte)uVar1 & 0x1f);
LAB_004fe68f:
      piVar7 = (int *)((int)piVar7 + *piVar7 + iVar2 * 4);
    }
    else {
      if (piVar7[4] != 3) {
LAB_004fe689:
        iVar2 = piVar7[8];
        goto LAB_004fe68f;
      }
      piVar7 = piVar7 + 0xd;
    }
    _SfDibChannelSet_32(piVar7,&local_444,
                        (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3,0,4,3,0,
                        0x3ff00000);
    SetTextColor(hdc,0xffffff);
    SetBkColor(hdc,0x62504d);
    ExtTextOutA(hdc,local_454,local_450,6,&local_468,"B",1,(INT *)0x0);
    pvVar3 = (HGDIOBJ)_SfLoadBitmap_8(DAT_00647204,0x627);
    if (pvVar3 != (HGDIOBJ)0x0) {
      pHVar4 = CreateCompatibleDC(hdc);
      local_458 = SelectObject(pHVar4,pvVar3);
      BitBlt(hdc,local_468.left,local_468.top,local_468.right - local_468.left,
             local_468.bottom - local_468.top,pHVar4,0,0,0xcc0020);
      SelectObject(pHVar4,local_458);
      DeleteObject(pvVar3);
      DeleteDC(pHVar4);
    }
    GdiFlush();
    piVar7 = *(int **)(param_1 + 0x18c);
    if (piVar7[4] == 0) {
      if (((piVar7[8] != 0) || (uVar1 = *(ushort *)((int)piVar7 + 0xe), uVar1 == 0)) || (8 < uVar1))
      goto LAB_004fe78e;
      iVar2 = 1 << ((byte)uVar1 & 0x1f);
LAB_004fe791:
      piVar6 = (int *)(*piVar7 + iVar2 * 4 + (int)piVar7);
    }
    else {
      if (piVar7[4] != 3) {
LAB_004fe78e:
        iVar2 = piVar7[8];
        goto LAB_004fe791;
      }
      piVar6 = piVar7 + 0xd;
    }
    _SfDibCopy_36(piVar7,piVar6,&local_468,0,local_434,local_4,&local_468,0,3);
    piVar7 = *(int **)(param_1 + 0x18c);
    uVar5 = (uint)*(ushort *)((int)piVar7 + 0xe) * piVar7[1] + 0x1f;
    if (piVar7[4] == 0) {
      if (((piVar7[8] != 0) || (uVar1 = *(ushort *)((int)piVar7 + 0xe), uVar1 == 0)) || (8 < uVar1))
      goto LAB_004fe80b;
      iVar2 = 1 << ((byte)uVar1 & 0x1f);
LAB_004fe80e:
      piVar7 = (int *)(*piVar7 + iVar2 * 4 + (int)piVar7);
    }
    else {
      if (piVar7[4] != 3) {
LAB_004fe80b:
        iVar2 = piVar7[8];
        goto LAB_004fe80e;
      }
      piVar7 = piVar7 + 0xd;
    }
    _SfDibChannelSet_32(piVar7,&local_444,
                        (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3,0,4,3,0,
                        0x3ff00000);
    iVar2 = local_450;
    x = local_454;
  }
  if (*(int *)(param_1 + 8) != 1) goto LAB_004fe9bd;
  SetTextColor(hdc,0xffffff);
  SetBkColor(hdc,0x62504d);
  ExtTextOutA(hdc,x,iVar2,6,&local_468,"X",1,(INT *)0x0);
  pvVar3 = (HGDIOBJ)_SfLoadBitmap_8(DAT_00647204,0x3c4);
  if (pvVar3 != (HGDIOBJ)0x0) {
    pHVar4 = CreateCompatibleDC(hdc);
    local_458 = SelectObject(pHVar4,pvVar3);
    BitBlt(hdc,local_468.left,local_468.top,local_468.right - local_468.left,
           local_468.bottom - local_468.top,pHVar4,0,0,0xcc0020);
    SelectObject(pHVar4,local_458);
    DeleteObject(pvVar3);
    DeleteDC(pHVar4);
  }
  GdiFlush();
  piVar7 = *(int **)(param_1 + 400);
  if (piVar7[4] == 0) {
    if (((piVar7[8] != 0) || (uVar1 = *(ushort *)((int)piVar7 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_004fe91d;
    iVar2 = 1 << ((byte)uVar1 & 0x1f);
LAB_004fe920:
    piVar6 = (int *)(*piVar7 + iVar2 * 4 + (int)piVar7);
  }
  else {
    if (piVar7[4] != 3) {
LAB_004fe91d:
      iVar2 = piVar7[8];
      goto LAB_004fe920;
    }
    piVar6 = piVar7 + 0xd;
  }
  _SfDibCopy_36(piVar7,piVar6,&local_468,0,local_434,local_4,&local_468,0,3);
  piVar7 = *(int **)(param_1 + 400);
  uVar5 = (uint)*(ushort *)((int)piVar7 + 0xe) * piVar7[1] + 0x1f;
  if (piVar7[4] == 0) {
    if (((piVar7[8] != 0) || (uVar1 = *(ushort *)((int)piVar7 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_004fe99a;
    iVar2 = 1 << ((byte)uVar1 & 0x1f);
LAB_004fe99d:
    piVar7 = (int *)(*piVar7 + iVar2 * 4 + (int)piVar7);
  }
  else {
    if (piVar7[4] != 3) {
LAB_004fe99a:
      iVar2 = piVar7[8];
      goto LAB_004fe99d;
    }
    piVar7 = piVar7 + 0xd;
  }
  _SfDibChannelSet_32(piVar7,&local_444,(int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3
                      ,0,4,3,0,0x3ff00000);
LAB_004fe9bd:
  SelectObject(local_8,local_44c);
  FUN_00548f50(local_434);
  return local_448;
}


