/* Module: vidcap30.exe
   Function: FUN_0043efc0
   Address: 0043efc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043efc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  LRESULT LVar5;
  uint uVar6;
  int iVar7;
  LPARAM lParam;
  bool bVar8;
  undefined4 uVar9;
  LPARAM local_c;
  
  iVar1 = param_1;
  uVar9 = DAT_005bb838;
  uVar6 = *(uint *)(param_1 + 0x1ae8);
  if ((uVar6 & 1) == 0) {
    if ((uVar6 & 8) != 0) {
      FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1df,5);
      FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1d1,0x10);
      iVar7 = 0x10;
      goto LAB_0043f06d;
    }
    if ((uVar6 & 4) != 0) {
      FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1df,8);
      FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1d1,8);
      FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1d2,8);
      FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1ce,8);
      FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1cf,8);
      FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1d0,8);
      FUN_00430e10(*(undefined4 *)(param_1 + 0x151c),0x215,
                   (-(uint)((*(uint *)(param_1 + 0x1aec) & 0x800) != 0) & 0xfffffff4) + 0x10);
      FUN_00430e10(*(undefined4 *)(param_1 + 0x151c),0x216,
                   (-(uint)((*(uint *)(param_1 + 0x1aec) & 0x800) != 0) & 0xfffffff4) + 0x10);
      iVar7 = (-(uint)((*(uint *)(param_1 + 0x1aec) & 0x800) != 0) & 0xfffffff4) + 0x10;
      goto LAB_0043f265;
    }
    if ((uVar6 & 2) != 0) {
      FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1df,8);
      FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1d1,8);
      FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1d2,8);
      FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1ce,
                   (-(uint)((*(uint *)(param_1 + 0x1aec) & 0x20) != 0) & 0xfffffff4) + 0x10);
      FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1cf,
                   (-(uint)((*(uint *)(param_1 + 0x1aec) & 0x40) != 0) & 0xfffffff4) + 0x10);
      iVar7 = (-(uint)((*(uint *)(param_1 + 0x1aec) & 0x80) != 0) & 0xfffffff4) + 0x10;
      goto LAB_0043f22c;
    }
  }
  else {
    if (((uVar6 & 0x800) != 0) || (uVar2 = 4, (uVar6 & 0x40) == 0)) {
      uVar2 = 0x10;
    }
    FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1df,uVar2);
    FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1d1,
                 (-(uint)((*(uint *)(param_1 + 0x1aec) & 0x200) != 0) & 0xfffffff4) + 0x10);
    iVar7 = (-(uint)((*(uint *)(param_1 + 0x1aec) & 0x100) != 0) & 0xfffffff4) + 0x10;
LAB_0043f06d:
    FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1d2,iVar7);
    FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1ce,8);
    FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1cf,8);
    iVar7 = 8;
LAB_0043f22c:
    FUN_00430e10(*(undefined4 *)(param_1 + 0x13c4),0x1d0,iVar7);
    FUN_00430e10(*(undefined4 *)(param_1 + 0x151c),0x215,8);
    FUN_00430e10(*(undefined4 *)(param_1 + 0x151c),0x216,8);
    iVar7 = 8;
LAB_0043f265:
    FUN_00430e10(*(undefined4 *)(param_1 + 0x151c),0x217,iVar7);
  }
  FUN_00430e10(*(undefined4 *)(param_1 + 0x13c0),0x1d6,
               (-(uint)((*(uint *)(param_1 + 0x1aec) & 4) != 0) & 0xfffffff4) + 0x10);
  FUN_00430e10(*(undefined4 *)(param_1 + 0x13c0),0x1d7,
               (-(uint)((*(uint *)(param_1 + 0x1aec) & 8) != 0) & 0xfffffff4) + 0x10);
  FUN_00430e10(*(undefined4 *)(param_1 + 0x13c0),0x1d8,
               (-(uint)((*(uint *)(param_1 + 0x1aec) & 0x10) != 0) & 0xfffffff4) + 0x10);
  FUN_00430e10(*(undefined4 *)(param_1 + 0x13c0),0x1d9,
               (-(uint)((*(uint *)(param_1 + 0x1aec) & 2) != 0) & 0xfffffff4) + 0x10);
  FUN_00430e10(*(undefined4 *)(param_1 + 0x13c0),0x1da,
               (-(uint)((*(uint *)(param_1 + 0x1aec) & 2) != 0) & 0xfffffff4) + 0x10);
  FUN_00430e10(*(undefined4 *)(param_1 + 0x13c0),0x1db,
               (-(uint)((*(uint *)(param_1 + 0x1aec) & 1) != 0) & 0xfffffff4) + 0x10);
  FUN_00430e10(*(undefined4 *)(param_1 + 0x13c0),0x1dd,
               (-(uint)((*(uint *)(param_1 + 0x1aec) & 1) != 0) & 0xfffffff4) + 0x10);
  FUN_00430e10(*(undefined4 *)(param_1 + 0x1514),0x205,
               (-(uint)((*(uint *)(param_1 + 0x1aec) & 0x800) != 0) & 0xfffffff4) + 0x10);
  FUN_00430e10(*(undefined4 *)(param_1 + 0x1518),0x206,
               (-(uint)((*(uint *)(param_1 + 0x1aec) & 0x800) != 0) & 0xfffffff4) + 0x10);
  FUN_00430e10(*(undefined4 *)(param_1 + 0x1514),0x207,
               (-(uint)((*(uint *)(param_1 + 0x1aec) & 1) != 0) & 0xfffffff4) + 0x10);
  FUN_00430e10(*(undefined4 *)(param_1 + 0x1518),0x208,
               (-(uint)((*(uint *)(param_1 + 0x1aec) & 1) != 0) & 0xfffffff4) + 0x10);
  EnableWindow(*(HWND *)(param_1 + 0x14dc),*(uint *)(param_1 + 0x1aec) >> 0xb & 1);
  EnableWindow(*(HWND *)(param_1 + 0x14e0),*(uint *)(param_1 + 0x1aec) >> 0xb & 1);
  EnableWindow(*(HWND *)(param_1 + 0x14e4),*(uint *)(param_1 + 0x1aec) >> 0xb & 1);
  EnableWindow(*(HWND *)(param_1 + 0x14e8),*(uint *)(param_1 + 0x1aec) >> 0xb & 1);
  EnableWindow(*(HWND *)(param_1 + 0x14ec),*(uint *)(param_1 + 0x1aec) >> 0xb & 1);
  EnableWindow(*(HWND *)(param_1 + 0x14f0),*(uint *)(param_1 + 0x1aec) >> 0xb & 1);
  EnableWindow(*(HWND *)(param_1 + 0x14f4),*(uint *)(param_1 + 0x1aec) >> 0xb & 1);
  LVar3 = SendMessageA(*(HWND *)(param_1 + 0x1668),0x1004,0,0);
  LVar4 = SendMessageA(*(HWND *)(param_1 + 0x1668),0x1032,0,0);
  bVar8 = DAT_005bba94 == 0;
  if ((DAT_005bba94 == 0) && (LVar4 != 0)) {
    param_1 = 1;
LAB_0043f50a:
    if ((LVar4 != 0) && (LVar5 = SendMessageA(*(HWND *)(iVar1 + 0x1668),0x102c,0,2), LVar5 == 0)) {
      local_c = 1;
      goto LAB_0043f540;
    }
  }
  else {
    param_1 = 0;
    if (DAT_005bba94 == 0) goto LAB_0043f50a;
  }
  local_c = 0;
LAB_0043f540:
  if (((DAT_005bba94 == 0) && (LVar4 != 0)) &&
     (LVar3 = SendMessageA(*(HWND *)(iVar1 + 0x1668),0x102c,LVar3 - 1,2), LVar3 == 0)) {
    lParam = 1;
  }
  else {
    lParam = 0;
  }
  SendMessageA(*(HWND *)(iVar1 + 0x1664),0x401,0x229,(uint)bVar8);
  SendMessageA(*(HWND *)(iVar1 + 0x1664),0x401,0x22a,param_1);
  SendMessageA(*(HWND *)(iVar1 + 0x1664),0x401,0x22b,local_c);
  SendMessageA(*(HWND *)(iVar1 + 0x1664),0x401,0x22c,lParam);
  uVar6 = *(uint *)(iVar1 + 0x1aec) & 1;
  if (DAT_005bc2bc != uVar6) {
    DAT_005bc2bc = uVar6;
    _TrackbarInst_Message_16(*(undefined4 *)(iVar1 + 0x13c8),10,*(uint *)(iVar1 + 0x1aec) & 1,0);
    _TrackbarInst_Move_8(*(undefined4 *)(iVar1 + 0x13c8),(RECT *)(iVar1 + 0x14ac));
    InvalidateRect(*(HWND *)(iVar1 + 8),(RECT *)(iVar1 + 0x14ac),0);
  }
  FUN_00453960(*(undefined4 *)(iVar1 + 0x13bc),10,DAT_005bba94 == 0,0);
  iVar7 = FUN_0042f300(uVar9);
  if (iVar7 == 0) {
    iVar7 = FUN_0042f330(uVar9);
    if (iVar7 == 0) {
      uVar9 = *(undefined4 *)(iVar1 + 0x13bc);
      uVar2 = 0x9cde;
    }
    else {
      uVar9 = *(undefined4 *)(iVar1 + 0x13bc);
      uVar2 = 0x9cdd;
    }
  }
  else {
    uVar9 = *(undefined4 *)(iVar1 + 0x13bc);
    uVar2 = 0x9cdc;
  }
  FUN_00453960(uVar9,0x605,uVar2,1);
  uVar6 = *(uint *)(iVar1 + 0x1ae8);
  if ((((((uVar6 & 1) != 0) && ((uVar6 & 0x10) != 0)) ||
       (((uVar6 & 2) != 0 && ((uVar6 & 0x40) != 0)))) ||
      (((uVar6 & 4) != 0 && ((uVar6 & 0x40) != 0)))) ||
     (((uVar6 & 8) != 0 && ((uVar6 & 0x40) != 0)))) {
    if (((uVar6 & 0x1000) != 0) && ((uVar6 & 0x800) == 0)) {
      FUN_00430e10(*(undefined4 *)(iVar1 + 0x13c4),0x1d1,5);
    }
    if ((*(byte *)(iVar1 + 0x1ae8) & 4) == 0) {
      uVar9 = *(undefined4 *)(iVar1 + 0x1bfc);
      uVar2 = *(undefined4 *)(iVar1 + 0x13c4);
    }
    else {
      uVar9 = *(undefined4 *)(iVar1 + 0x1bfc);
      uVar2 = *(undefined4 *)(iVar1 + 0x151c);
    }
    FUN_00430e10(uVar2,uVar9,5);
    if (*(int *)(iVar1 + 0x1c04) != 0) {
      FUN_00430e10(*(undefined4 *)(iVar1 + 0x13c0),*(int *)(iVar1 + 0x1c04),5);
      return;
    }
    if ((*(uint *)(iVar1 + 0x1c34) & 0x100) == 0) {
      FUN_00430e10(*(undefined4 *)(iVar1 + 0x13c0),*(undefined4 *)(iVar1 + 0x1c00),5);
    }
  }
  return;
}


