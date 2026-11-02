/* Module: vegas30.exe
   Function: FUN_004765b0
   Address: 004765b0
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU FUN_004765b0(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5,int *param_6
                  )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HMENU hMenu;
  uint uVar5;
  int local_8;
  int local_4;
  
  *param_6 = 0;
  iVar2 = FUN_0049d9a0(param_1,param_2);
  uVar1 = *(uint *)(*(int *)(param_2 + 8) + 0x10);
  if (((uVar1 & 0x40000) != 0) && ((uVar1 & 0x10000) == 0)) {
    iVar4 = *(int *)(*(int *)(param_2 + 8) + 0x28);
    local_8 = *(uint *)(param_2 + 0x18) + param_3;
    local_4 = *(int *)(param_2 + 0x1c) + param_4 + (uint)CARRY4(*(uint *)(param_2 + 0x18),param_3);
    iVar3 = _SfList_FindSortedInsertIndexRange_20(iVar4,&local_8,0,0xffffffff,&LAB_005c5a20);
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -1;
    }
    if (*(int *)(*(int *)(iVar4 + 4) * iVar3 + 4 + *(int *)(iVar4 + 8)) == param_2) {
      return (HMENU)0x0;
    }
  }
  if (((param_4 < 0) || (*(int *)(param_2 + 0x7c) < param_4)) ||
     ((*(int *)(param_2 + 0x7c) <= param_4 && (*(uint *)(param_2 + 0x78) < param_3)))) {
    uVar1 = *(uint *)(param_2 + 0x20);
    iVar4 = *(int *)(param_2 + 0x24);
    uVar5 = uVar1 - *(uint *)(param_2 + 0x80);
    iVar3 = (iVar4 - *(int *)(param_2 + 0x84)) - (uint)(uVar1 < *(uint *)(param_2 + 0x80));
    if ((param_4 < iVar3) ||
       ((((param_4 <= iVar3 && (param_3 < uVar5)) || (iVar4 < param_4)) ||
        ((iVar4 <= param_4 && (uVar1 < param_3)))))) {
      if (((*(int *)(param_2 + 0x7c) <= param_4) &&
          ((*(int *)(param_2 + 0x7c) < param_4 || (*(uint *)(param_2 + 0x78) <= param_3)))) &&
         ((param_4 <= iVar3 && ((param_4 < iVar3 || (param_3 <= uVar5)))))) {
        return (HMENU)0x0;
      }
    }
    else {
      param_5 = 3;
      if (iVar2 != 0) {
        iVar4 = *(int *)(iVar2 + 0x24) + *(int *)(iVar2 + 0x1c) +
                (uint)CARRY4(*(uint *)(iVar2 + 0x20),*(uint *)(iVar2 + 0x18));
        iVar3 = *(int *)(param_2 + 0x1c) + iVar3 + (uint)CARRY4(*(uint *)(param_2 + 0x18),uVar5);
        if ((iVar3 <= iVar4) &&
           ((iVar3 < iVar4 ||
            (*(uint *)(param_2 + 0x18) + uVar5 < *(uint *)(iVar2 + 0x20) + *(uint *)(iVar2 + 0x18)))
           )) {
          *param_6 = 1;
        }
      }
    }
  }
  else {
    param_5 = 1;
    if (iVar2 != 0) {
      *param_6 = 1;
    }
  }
  hMenu = CreatePopupMenu();
  if (hMenu == (HMENU)0x0) {
    return (HMENU)0x0;
  }
  if (*param_6 == 0) {
    switch(param_5) {
    case 1:
    case 2:
    case 4:
      DAT_0064bee0 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1cb);
      DAT_0064bee4 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1cc);
      DAT_0064bee8 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1cd);
      DAT_0064beec = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1d1);
      DAT_0064bef0 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1d2);
      AppendMenuA(hMenu,4,0xa13c,DAT_0064bee4);
      AppendMenuA(hMenu,4,0xa13b,DAT_0064bee0);
      AppendMenuA(hMenu,4,0xa13d,DAT_0064bee8);
      AppendMenuA(hMenu,4,0xa141,DAT_0064beec);
      AppendMenuA(hMenu,4,0xa142,DAT_0064bef0);
      return hMenu;
    case 3:
    case 5:
    case 9:
      DAT_0064bee0 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1ce);
      DAT_0064bee4 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1cf);
      DAT_0064bee8 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1d0);
      DAT_0064beec = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1d3);
      DAT_0064bef0 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1d4);
      AppendMenuA(hMenu,4,0xa140,DAT_0064bee8);
      AppendMenuA(hMenu,4,0xa13e,DAT_0064bee0);
      AppendMenuA(hMenu,4,0xa13f,DAT_0064bee4);
      AppendMenuA(hMenu,4,0xa143,DAT_0064beec);
      AppendMenuA(hMenu,4,0xa144,DAT_0064bef0);
      return hMenu;
    }
  }
  else if ((param_5 != 0) && ((param_5 < 6 || (param_5 == 9)))) {
    DAT_0064bee0 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1c2);
    DAT_0064bee4 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1c3);
    DAT_0064bee8 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1c4);
    DAT_0064beec = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1d5);
    DAT_0064bef0 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1d6);
    DAT_0064bef4 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1c5);
    DAT_0064bef8 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1c6);
    DAT_0064befc = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1c7);
    DAT_0064bf00 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1d9);
    DAT_0064bf04 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1da);
    DAT_0064bf08 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1c8);
    DAT_0064bf0c = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1c9);
    DAT_0064bf10 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1ca);
    DAT_0064bf14 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1d7);
    DAT_0064bf18 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1d8);
    DAT_0064bf1c = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1db);
    DAT_0064bf20 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1dd);
    DAT_0064bf24 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1dc);
    DAT_0064bf28 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1de);
    DAT_0064bf2c = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1df);
    DAT_0064bf30 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1e0);
    DAT_0064bf34 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1e2);
    DAT_0064bf38 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1e1);
    DAT_0064bf3c = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1e3);
    DAT_0064bf40 = (LPCSTR)_SfLoadBitmap_8(DAT_00647204,0x1e4);
    AppendMenuA(hMenu,4,0xa122,DAT_0064bee0);
    AppendMenuA(hMenu,4,0xa123,DAT_0064bee4);
    AppendMenuA(hMenu,4,0xa124,DAT_0064bee8);
    AppendMenuA(hMenu,4,0xa125,DAT_0064beec);
    AppendMenuA(hMenu,4,0xa126,DAT_0064bef0);
    AppendMenuA(hMenu,0x24,0xa127,DAT_0064bef4);
    AppendMenuA(hMenu,4,0xa128,DAT_0064bef8);
    AppendMenuA(hMenu,4,0xa129,DAT_0064befc);
    AppendMenuA(hMenu,4,0xa12a,DAT_0064bf00);
    AppendMenuA(hMenu,4,0xa12b,DAT_0064bf04);
    AppendMenuA(hMenu,0x24,0xa12c,DAT_0064bf08);
    AppendMenuA(hMenu,4,0xa12d,DAT_0064bf0c);
    AppendMenuA(hMenu,4,0xa12e,DAT_0064bf10);
    AppendMenuA(hMenu,4,0xa12f,DAT_0064bf14);
    AppendMenuA(hMenu,4,0xa130,DAT_0064bf18);
    AppendMenuA(hMenu,0x24,0xa131,DAT_0064bf1c);
    AppendMenuA(hMenu,4,0xa132,DAT_0064bf20);
    AppendMenuA(hMenu,4,0xa133,DAT_0064bf24);
    AppendMenuA(hMenu,4,0xa134,DAT_0064bf28);
    AppendMenuA(hMenu,4,0xa135,DAT_0064bf2c);
    AppendMenuA(hMenu,0x24,0xa136,DAT_0064bf30);
    AppendMenuA(hMenu,4,0xa137,DAT_0064bf34);
    AppendMenuA(hMenu,4,0xa138,DAT_0064bf38);
    AppendMenuA(hMenu,4,0xa139,DAT_0064bf3c);
    AppendMenuA(hMenu,4,0xa13a,DAT_0064bf40);
    return hMenu;
  }
  DestroyMenu(hMenu);
  return (HMENU)0x0;
}


