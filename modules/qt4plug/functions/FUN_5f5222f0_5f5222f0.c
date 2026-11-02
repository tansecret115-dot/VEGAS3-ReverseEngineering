/* Module: qt4plug.dll
   Function: FUN_5f5222f0
   Address: 5f5222f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5f5222f0(int param_1)

{
  int iVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  float10 fVar7;
  UINT UVar8;
  WPARAM WVar9;
  LPARAM LVar10;
  uint uStack_164;
  undefined8 uStack_160;
  int iStack_14c;
  UINT UStack_148;
  BOOL BStack_144;
  undefined8 uStack_140;
  LRESULT LStack_134;
  undefined4 uStack_130;
  int iStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined2 uStack_114;
  uint uStack_112;
  int iStack_10c;
  CHAR aCStack_108 [260];
  
  pcVar6 = GetDlgItem_exref;
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0;
  }
  if (*(HWND *)(param_1 + 0x10) == (HWND)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    return 0;
  }
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0xf0;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d9);
  SendMessageA(pHVar2,UVar8,WVar9,LVar10);
  iStack_10c = FUN_5f5782f0();
  if (iStack_10c == 0) {
    FUN_5f578250();
  }
  else {
    FUN_5f578170();
  }
  FUN_5f520b00();
  UStack_148 = FUN_5f5782f0();
  uStack_164 = 0x72707a61;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x3e9);
  WVar9 = SendMessageA(pHVar2,0x147,0,0);
  if (((WVar9 != 0xffffffff) && (LVar3 = SendMessageA(pHVar2,0x150,WVar9,0), -1 < LVar3)) &&
     (LVar3 < *DAT_5f5a3ed4)) {
    uStack_164 = *(uint *)(DAT_5f5a3ed4 + LVar3 * 0x16 + 3);
  }
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0x60a;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x3eb);
  LStack_134 = SendMessageA(pHVar2,UVar8,WVar9,LVar10);
  uStack_130 = 0;
  uStack_112 = ftol();
  uStack_140._0_4_ = 0x18;
  uVar5 = (undefined4)uStack_140;
  uStack_140._0_4_ = 0x18;
  if (*(int *)(param_1 + 0x70) != 0) {
    LVar10 = 0;
    WVar9 = 0;
    UVar8 = 0xf0;
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7e8);
    LVar3 = SendMessageA(pHVar2,UVar8,WVar9,LVar10);
    uVar5 = (undefined4)uStack_140;
    if (LVar3 == 1) {
      uStack_140._0_4_ = 0x20;
      uVar5 = (undefined4)uStack_140;
    }
  }
  uStack_140._0_4_ = uVar5;
  uStack_11c = (uStack_164 & 0xff0000 | uStack_164 >> 0x10) >> 8 |
               (uStack_164 & 0xff00 | uStack_164 << 0x10) << 8;
  uStack_118 = 0;
  uStack_114 = CONCAT11((char)(undefined4)uStack_140,(char)((uint)(undefined4)uStack_140 >> 8));
  uStack_112 = (uStack_112 & 0xff0000 | uStack_112 >> 0x10) >> 8 |
               (uStack_112 & 0xff00 | uStack_112 << 0x10) << 8;
  iVar4 = FUN_5f5782f0();
  if (iVar4 != 0) {
    FUN_5f578170();
  }
  uStack_160 = *(double *)(param_1 + 0x50);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7e6);
  WVar9 = SendMessageA(pHVar2,0x147,0,0);
  if (WVar9 == 0xffffffff) {
    GetWindowTextA(pHVar2,aCStack_108,0x100);
    fVar7 = FUN_5f543720(aCStack_108,*(double *)(param_1 + 0x50),
                         (double)CONCAT44(DAT_5f596c3c,DAT_5f596c38),
                         (double)CONCAT44(DAT_5f596c44,DAT_5f596c40),(undefined4 *)0x0);
    uStack_160 = (double)fVar7;
  }
  else {
    LVar3 = SendMessageA(pHVar2,0x150,WVar9,0);
    if (LVar3 != -1) {
      uStack_160 = *(double *)(&DAT_5f596bb0 + LVar3 * 0x10);
    }
  }
  uStack_140 = 1.0;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x437);
  WVar9 = SendMessageA(pHVar2,0x147,0,0);
  if (WVar9 == 0xffffffff) {
    GetWindowTextA(pHVar2,aCStack_108,0x100);
    fVar7 = FUN_5f543720(aCStack_108,1.0,(double)CONCAT44(DAT_5f596c4c,DAT_5f596c48),
                         (double)CONCAT44(DAT_5f596c54,DAT_5f596c50),(undefined4 *)0x0);
  }
  else {
    LVar3 = SendMessageA(pHVar2,0x150,WVar9,0);
    if (LVar3 == -1) goto LAB_5f522678;
    fVar7 = (float10)(double)(&DAT_5f5a2ae8)[LVar3];
  }
  uStack_140 = (double)fVar7;
LAB_5f522678:
  LStack_134 = 0;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x436);
  WVar9 = SendMessageA(pHVar2,0x147,0,0);
  if ((WVar9 == 0xffffffff) || (LVar3 = SendMessageA(pHVar2,0x150,WVar9,0), LVar3 == -1)) {
    LVar3 = LStack_134;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x428);
    iVar4 = 0;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x60) = (undefined4)uStack_160;
      *(LRESULT *)(iVar1 + 100) = uStack_160._4_4_;
      iVar4 = *(int *)(*(int *)(param_1 + 0x30) + 0x428);
      *(undefined4 *)(iVar4 + 0x18) = (undefined4)uStack_160;
      *(LRESULT *)(iVar4 + 0x1c) = uStack_160._4_4_;
      iVar4 = *(int *)(*(int *)(param_1 + 0x30) + 0x428);
      *(undefined4 *)(iVar4 + 0x68) = (undefined4)uStack_140;
      *(int *)(iVar4 + 0x6c) = uStack_140._4_4_;
      iVar4 = *(int *)(*(int *)(param_1 + 0x30) + 0x428);
      *(undefined4 *)(iVar4 + 0x20) = (undefined4)uStack_140;
      *(int *)(iVar4 + 0x24) = uStack_140._4_4_;
      *(LRESULT *)(*(int *)(*(int *)(param_1 + 0x30) + 0x428) + 0x5c) = LVar3;
      iVar4 = *(int *)(*(int *)(param_1 + 0x30) + 0x428);
      *(LRESULT *)(iVar4 + 0x14) = LVar3;
    }
  }
  uStack_124 = FUN_5f57a8f0(iVar4);
  uStack_120 = 0;
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0xf0;
  uStack_128 = uStack_112;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x3f0);
  LVar3 = SendMessageA(pHVar2,UVar8,WVar9,LVar10);
  if (LVar3 == 1) {
    if (*(int *)(param_1 + 0x80) == 0) {
      uStack_120 = GetDlgItemInt(*(HWND *)(param_1 + 0x10),0x3f1,&BStack_144,0);
    }
    else {
      uStack_120 = 0;
    }
  }
  else {
    uStack_128 = 0;
  }
  uStack_120 = (uStack_120 & 0xff0000 | uStack_120 >> 0x10) >> 8 |
               (uStack_120 << 0x10 | uStack_120 & 0xff00) << 8;
  uStack_124 = (uStack_124 & 0xff0000 | uStack_124 >> 0x10) >> 8 |
               (uStack_124 << 0x10 | uStack_124 & 0xff00) << 8;
  iVar4 = FUN_5f5782f0();
  if (iVar4 != 0) {
    FUN_5f578170();
  }
  iStack_12c = FUN_5f5782f0();
  if ((uStack_164 == 0x53565131) || (uStack_164 == 0x53565133)) {
    uStack_160._4_4_ = 1;
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x438);
    WVar9 = SendMessageA(pHVar2,0x147,0,0);
    if (WVar9 != 0xffffffff) {
      uStack_160._4_4_ = SendMessageA(pHVar2,0x150,WVar9,0);
    }
    if ((uStack_160._4_4_ != 1) &&
       (GetDlgItemInt(*(HWND *)(param_1 + 0x10),0x3ef,&BStack_144,0), uStack_160._4_4_ == 5)) {
      LVar10 = 0;
      WVar9 = 0;
      UVar8 = 0xf0;
      pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x3f8);
      LVar3 = SendMessageA(pHVar2,UVar8,WVar9,LVar10);
      if (LVar3 == 1) {
        GetDlgItemInt(*(HWND *)(param_1 + 0x10),0x3f2,&BStack_144,0);
      }
    }
    if (iStack_12c == 0) {
      FUN_5f578250();
      pcVar6 = GetDlgItem_exref;
    }
    else {
      FUN_5f578170();
      pcVar6 = GetDlgItem_exref;
    }
  }
  else if (iStack_12c != 0) {
    FUN_5f578290();
  }
  LVar3 = 1;
  pHVar2 = (HWND)(*pcVar6)(*(undefined4 *)(param_1 + 0x10),0x438);
  WVar9 = SendMessageA(pHVar2,0x147,0,0);
  if (WVar9 != 0xffffffff) {
    LVar3 = SendMessageA(pHVar2,0x150,WVar9,0);
  }
  GetDlgItemInt(*(HWND *)(param_1 + 0x10),0x3ef,&iStack_14c,0);
  iVar4 = FUN_5f5782f0();
  uStack_140 = (double)CONCAT44(iVar4,(undefined4)uStack_140);
  if (LVar3 == 1) {
    FUN_5f578290();
  }
  else if (iVar4 == 0) {
    FUN_5f578250();
  }
  else {
    FUN_5f578170();
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7e1);
  WVar9 = SendMessageA(pHVar2,0x147,0,0);
  if (WVar9 != 0xffffffff) {
    UStack_148 = 0;
    UVar8 = SendMessageA(pHVar2,0x150,WVar9,0);
    if (UVar8 == 0xffffffff) {
      UVar8 = GetDlgItemInt(*(HWND *)(param_1 + 0x10),0x7e2,&iStack_14c,0);
      if (iStack_14c != 0) {
        UStack_148 = UVar8;
      }
      GetDlgItemInt(*(HWND *)(param_1 + 0x10),0x7e3,&iStack_14c,0);
      UVar8 = UStack_148;
    }
    UStack_148 = UVar8;
    iVar4 = FUN_5f5782f0();
    uVar5 = FUN_5f5782f0();
    uStack_140 = (double)CONCAT44(uVar5,(undefined4)uStack_140);
    if (iVar4 == 0) {
      FUN_5f578250();
    }
    else {
      FUN_5f578170();
    }
    if (uStack_140._4_4_ != 0) {
      FUN_5f578170();
      return 0;
    }
    FUN_5f578250();
  }
  return 0;
}


