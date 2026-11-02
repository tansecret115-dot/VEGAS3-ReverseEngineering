/* Module: vidcap30.exe
   Function: FUN_00436c50
   Address: 00436c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00436c50(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  LRESULT lParam;
  HDWP pvVar8;
  uint uFlags;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uFlags = (-(uint)((*(uint *)(param_1 + 0x1ae8) & 4) != 0) & 0xffffffc0) + 0x80 | 0x14;
  uVar5 = 0x80;
  if ((*(uint *)(param_1 + 0x1ae8) & 9) != 0) {
    uVar5 = 0x40;
  }
  FUN_0043ac00(param_1);
  if (((*(int *)(param_1 + 0x1660) == 0) && (0 < (short)param_2)) &&
     (0 < (short)((uint)param_2 >> 0x10))) {
    iVar1 = *(int *)(param_1 + 0x9c);
    local_10 = *(undefined4 *)(param_1 + 0xb0);
    iVar2 = *(int *)(param_1 + 0x94);
    iVar7 = *(int *)(param_1 + 0xb4);
    local_8 = *(undefined4 *)(param_1 + 0xb8);
    iVar3 = *(int *)(param_1 + 0xac);
    local_4 = *(undefined4 *)(param_1 + 0xbc);
    iVar4 = *(int *)(param_1 + 0xa4);
    iVar6 = GetSystemMetrics(0x2e);
    iVar6 = ((iVar1 - iVar2) - iVar4) + iVar3 + iVar6;
    iVar7 = (((*(int *)(param_1 + 0x1640) + *(int *)(param_1 + 0x158c)) - *(int *)(param_1 + 0xa4))
            + *(int *)(param_1 + 0xac)) - iVar7;
    if (iVar7 < iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0x1660) = iVar7;
  }
  lParam = SendMessageA(*(HWND *)(param_1 + 0x14e0),0x140,0,0);
  pvVar8 = BeginDeferWindowPos(10);
  if (((((pvVar8 != (HDWP)0x0) &&
        (pvVar8 = DeferWindowPos(pvVar8,*(HWND *)(param_1 + 0xcc),(HWND)0x0,
                                 *(int *)(param_1 + 0x14bc),*(int *)(param_1 + 0x14c0),
                                 *(int *)(param_1 + 0x14c4) - *(int *)(param_1 + 0x14bc),
                                 *(int *)(param_1 + 0x14c8) - *(int *)(param_1 + 0x14c0),0x14),
        pvVar8 != (HDWP)0x0)) &&
       ((pvVar8 = DeferWindowPos(pvVar8,*(HWND *)(param_1 + 0x14dc),(HWND)0x0,
                                 *(int *)(param_1 + 0x1520),*(int *)(param_1 + 0x1524),
                                 *(int *)(param_1 + 0x1528) - *(int *)(param_1 + 0x1520),
                                 *(int *)(param_1 + 0x152c) - *(int *)(param_1 + 0x1524),uFlags),
        pvVar8 != (HDWP)0x0 &&
        ((pvVar8 = DeferWindowPos(pvVar8,*(HWND *)(param_1 + 0x14e0),(HWND)0x0,
                                  *(int *)(param_1 + 0x1530),*(int *)(param_1 + 0x1534),
                                  *(int *)(param_1 + 0x1538) - *(int *)(param_1 + 0x1530),
                                  *(int *)(param_1 + 0x153c) - *(int *)(param_1 + 0x1534),uFlags),
         pvVar8 != (HDWP)0x0 &&
         (pvVar8 = DeferWindowPos(pvVar8,*(HWND *)(param_1 + 0x14e4),(HWND)0x0,
                                  *(int *)(param_1 + 0x1540),*(int *)(param_1 + 0x1544),
                                  *(int *)(param_1 + 0x1548) - *(int *)(param_1 + 0x1540),
                                  *(int *)(param_1 + 0x154c) - *(int *)(param_1 + 0x1544),uFlags),
         pvVar8 != (HDWP)0x0)))))) &&
      (pvVar8 = DeferWindowPos(pvVar8,*(HWND *)(param_1 + 0x14e8),(HWND)0x0,
                               *(int *)(param_1 + 0x1550),*(int *)(param_1 + 0x1554),
                               *(int *)(param_1 + 0x1558) - *(int *)(param_1 + 0x1550),
                               *(int *)(param_1 + 0x155c) - *(int *)(param_1 + 0x1554),uFlags),
      pvVar8 != (HDWP)0x0)) &&
     ((((pvVar8 = DeferWindowPos(pvVar8,*(HWND *)(param_1 + 0x14ec),(HWND)0x0,
                                 *(int *)(param_1 + 0x1560),*(int *)(param_1 + 0x1564),
                                 *(int *)(param_1 + 0x1568) - *(int *)(param_1 + 0x1560),
                                 *(int *)(param_1 + 0x156c) - *(int *)(param_1 + 0x1564),uFlags),
        pvVar8 != (HDWP)0x0 &&
        (pvVar8 = DeferWindowPos(pvVar8,*(HWND *)(param_1 + 0x14f0),(HWND)0x0,
                                 *(int *)(param_1 + 0x1570),*(int *)(param_1 + 0x1574),
                                 *(int *)(param_1 + 0x1578) - *(int *)(param_1 + 0x1570),
                                 *(int *)(param_1 + 0x157c) - *(int *)(param_1 + 0x1574),uFlags),
        pvVar8 != (HDWP)0x0)) &&
       (pvVar8 = DeferWindowPos(pvVar8,*(HWND *)(param_1 + 0x14f4),(HWND)0x0,
                                *(int *)(param_1 + 0x1580),*(int *)(param_1 + 0x1584),
                                *(int *)(param_1 + 0x1588) - *(int *)(param_1 + 0x1580),
                                *(int *)(param_1 + 0x158c) - *(int *)(param_1 + 0x1584),uFlags),
       pvVar8 != (HDWP)0x0)) &&
      ((pvVar8 = DeferWindowPos(pvVar8,*(HWND *)(param_1 + 0x1664),(HWND)0x0,
                                *(int *)(param_1 + 0x1768),*(int *)(param_1 + 0x176c),
                                *(int *)(param_1 + 6000) - *(int *)(param_1 + 0x1768),
                                *(int *)(param_1 + 0x1774) - *(int *)(param_1 + 0x176c),uVar5 | 0x14
                               ), pvVar8 != (HDWP)0x0 &&
       (pvVar8 = DeferWindowPos(pvVar8,*(HWND *)(param_1 + 0x1668),(HWND)0x0,
                                *(int *)(param_1 + 0x1778),*(int *)(param_1 + 0x177c),
                                *(int *)(param_1 + 0x1780) - *(int *)(param_1 + 0x1778),
                                *(int *)(param_1 + 0x1784) - *(int *)(param_1 + 0x177c),uVar5 | 0x14
                               ), pvVar8 != (HDWP)0x0)))))) {
    EndDeferWindowPos(pvVar8);
  }
  SendMessageA(*(HWND *)(param_1 + 0x14e0),0x142,0,lParam);
  FUN_00460850(*(undefined4 *)(param_1 + 0x14f8),0x18,*(uint *)(param_1 + 0x1ae8) >> 2 & 1,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x14fc),0x18,*(uint *)(param_1 + 0x1ae8) >> 2 & 1,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x1500),0x18,*(uint *)(param_1 + 0x1ae8) >> 2 & 1,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x1504),0x18,*(uint *)(param_1 + 0x1ae8) >> 2 & 1,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x1508),0x18,*(uint *)(param_1 + 0x1ae8) >> 2 & 1,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x150c),0x18,*(uint *)(param_1 + 0x1ae8) >> 2 & 1,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x1510),0x18,*(uint *)(param_1 + 0x1ae8) >> 2 & 1,0);
  if ((*(byte *)(param_1 + 0x1ae8) & 4) == 0) {
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_0042fcc0(*(undefined4 *)(param_1 + 0x1514),&local_10);
    FUN_0042fcc0(*(undefined4 *)(param_1 + 0x1518),&local_10);
    FUN_0042fcc0(*(undefined4 *)(param_1 + 0x151c),&local_10);
  }
  InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,0);
  InvalidateRect(*(HWND *)(param_1 + 0xcc),(RECT *)0x0,0);
  return;
}


