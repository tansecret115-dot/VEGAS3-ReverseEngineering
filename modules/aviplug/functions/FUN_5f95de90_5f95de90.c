/* Module: aviplug.dll
   Function: FUN_5f95de90
   Address: 5f95de90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f95de90(void *param_1)

{
  double *pdVar1;
  double dVar2;
  int *piVar3;
  HWND pHVar4;
  int iVar5;
  HWND hWnd;
  LRESULT LVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  WPARAM WVar10;
  bool bVar11;
  bool bVar12;
  UINT UVar13;
  uchar *puVar14;
  char *pcVar15;
  LPARAM LVar16;
  int local_14;
  int local_10;
  int iStack_c;
  
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),1000);
  iVar7 = *(int *)((int)param_1 + 0x34);
  bVar11 = false;
  bVar12 = false;
  if ((iVar7 != 0) && (piVar3 = *(int **)(iVar7 + 0x428), piVar3 != (int *)0x0)) {
    bVar11 = piVar3[1] != 0;
    iVar5 = piVar3[0x12];
    uVar9 = 0;
    if ((iVar5 != 0) || (iVar5 = *piVar3, iVar5 != 0)) {
      bVar12 = *(short *)(iVar5 + 0xe) == 0x20;
    }
    dVar2 = *(double *)(piVar3 + 0x18);
    *(double *)((int)param_1 + 0xf0) = dVar2;
    if ((dVar2 < _DAT_5f9d91e8) || (_DAT_5f9d91f0 < dVar2)) {
      iVar5 = *(int *)(iVar7 + 0x428);
      *(undefined4 *)((int)param_1 + 0xf0) = *(undefined4 *)(iVar5 + 0x18);
      *(undefined4 *)((int)param_1 + 0xf4) = *(undefined4 *)(iVar5 + 0x1c);
    }
    if ((*(double *)((int)param_1 + 0xf0) < _DAT_5f9d91e8) ||
       (_DAT_5f9d91f0 < *(double *)((int)param_1 + 0xf0))) {
      *(undefined4 *)((int)param_1 + 0xf0) = 0;
      *(undefined4 *)((int)param_1 + 0xf4) = 0x402e0000;
    }
    piVar3 = *(int **)(iVar7 + 0x428);
    pdVar1 = (double *)(piVar3 + 0x1a);
    local_10 = *(int *)pdVar1;
    iStack_c = piVar3[0x1b];
    if ((*pdVar1 < _DAT_5f9d91f8) || (_DAT_5f9d9200 < *pdVar1)) {
      local_10 = piVar3[8];
      iStack_c = piVar3[9];
    }
    if (((double)CONCAT44(iStack_c,local_10) < _DAT_5f9d91f8) ||
       (_DAT_5f9d9200 < (double)CONCAT44(iStack_c,local_10))) {
      local_10 = 0;
      iStack_c = 0x3ff00000;
    }
    local_14 = piVar3[0x17];
    iVar7 = piVar3[0x12];
    iVar5 = 0;
    if (iVar7 != 0) {
      iVar5 = *(int *)(iVar7 + 8);
      uVar9 = *(uint *)(iVar7 + 4);
    }
    iVar7 = *piVar3;
    if (((iVar7 != 0) && (*(int *)(iVar7 + 8) == 0)) && (*(int *)(iVar7 + 4) == 0)) {
      iVar5 = 0;
      uVar9 = 0;
    }
    *(uint *)((int)param_1 + 0xf8) = iVar5 << 0x10 | uVar9 & 0xffff;
  }
  uVar9 = (uint)bVar11;
  LVar16 = 0;
  UVar13 = 0xf1;
  hWnd = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7d9);
  SendMessageA(hWnd,UVar13,uVar9,LVar16);
  SendMessageA(pHVar4,0x14e,0,0);
  if (*(int *)(*(int *)((int)param_1 + 0x98) + 4) == 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x98) + 4) = 0x20424944;
  }
  uVar9 = SendMessageA(pHVar4,0x146,0,0);
  WVar10 = 0;
  if (uVar9 != 0) {
    do {
      LVar6 = SendMessageA(pHVar4,0x150,WVar10,0);
      if (LVar6 == *(int *)(*(int *)((int)param_1 + 0x98) + 4)) {
        *(undefined4 *)((int)param_1 + 0xdc) = 0;
        SendMessageA(pHVar4,0x14e,WVar10,0);
        if ((*(int *)(*(int *)((int)param_1 + 0x98) + 0x20) != 0) &&
           (iVar7 = ICOpen(0x63646976,*(undefined4 *)(*(int *)((int)param_1 + 0x98) + 4),4),
           iVar7 != 0)) {
          iVar5 = ICSendMessage(iVar7,0x500a,0xffffffff,1);
          *(uint *)((int)param_1 + 0xdc) = (uint)(iVar5 == 0);
          ICClose(iVar7);
        }
        break;
      }
      WVar10 = WVar10 + 1;
    } while (WVar10 < uVar9);
  }
  LVar16 = 0;
  uVar9 = (uint)((~*(uint *)(*(int *)((int)param_1 + 0x98) + 0x14) >> 0x13 & 1) != 0);
  UVar13 = 0xf1;
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7eb);
  SendMessageA(pHVar4,UVar13,uVar9,LVar16);
  LVar16 = 0;
  uVar9 = (uint)bVar12;
  UVar13 = 0xf1;
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7e8);
  SendMessageA(pHVar4,UVar13,uVar9,LVar16);
  LVar16 = 0;
  uVar9 = (uint)((*(uint *)(*(int *)((int)param_1 + 0x98) + 0x14) & 1) != 0);
  UVar13 = 0xf1;
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3ed);
  SendMessageA(pHVar4,UVar13,uVar9,LVar16);
  LVar16 = 0;
  uVar9 = (uint)((*(uint *)(*(int *)((int)param_1 + 0x98) + 0x14) >> 0x15 & 1) != 0);
  UVar13 = 0xf1;
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7ed);
  SendMessageA(pHVar4,UVar13,uVar9,LVar16);
  puVar14 = "%.3f";
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3ee);
  FUN_5f989f30(pHVar4,puVar14);
  LVar16 = 0;
  uVar9 = (uint)((*(uint *)(*(int *)((int)param_1 + 0x98) + 0x14) >> 2 & 1) != 0);
  UVar13 = 0xf1;
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3f0);
  SendMessageA(pHVar4,UVar13,uVar9,LVar16);
  uVar9 = *(uint *)(*(int *)((int)param_1 + 0x98) + 8);
  if (0x7fff < uVar9) {
    uVar9 = 0x7fff;
  }
  SetDlgItemInt(*(HWND *)((int)param_1 + 0x10),0x3f1,uVar9,0);
  LVar16 = 0;
  uVar9 = (uint)((*(uint *)(*(int *)((int)param_1 + 0x98) + 0x14) >> 1 & 1) != 0);
  UVar13 = 0xf1;
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3f2);
  SendMessageA(pHVar4,UVar13,uVar9,LVar16);
  uVar9 = *(uint *)(*(int *)((int)param_1 + 0x98) + 0x10);
  uVar8 = uVar9 & 0xfffffc00;
  if (uVar8 < 0x400) {
    UVar13 = 1;
  }
  else if (uVar8 < 0x1fffc01) {
    UVar13 = uVar9 >> 10;
  }
  else {
    UVar13 = 0x7fff;
  }
  SetDlgItemInt(*(HWND *)((int)param_1 + 0x10),0x3f3,UVar13,0);
  LVar16 = 0;
  WVar10 = 0;
  UVar13 = 0x60e;
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3eb);
  SendMessageA(pHVar4,UVar13,WVar10,LVar16);
  LVar16 = 10000;
  WVar10 = 0;
  UVar13 = 0x60f;
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3eb);
  SendMessageA(pHVar4,UVar13,WVar10,LVar16);
  if (*(int *)(*(int *)((int)param_1 + 0x98) + 0xc) == -1) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x98) + 0xc) = 10000;
  }
  LVar16 = *(LPARAM *)(*(int *)((int)param_1 + 0x98) + 0xc);
  WVar10 = 1;
  UVar13 = 0x610;
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3eb);
  LVar6 = SendMessageA(pHVar4,UVar13,WVar10,LVar16);
  *(LRESULT *)(*(int *)((int)param_1 + 0x98) + 0xc) = LVar6;
  pcVar15 = "%.1z %%";
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7e9);
  FUN_5f989f30(pHVar4,(uchar *)pcVar15);
  WVar10 = FUN_5f95e410((double)CONCAT44(iStack_c,local_10));
  if (WVar10 == 0xffffffff) {
    puVar14 = "%.3f";
    pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x437);
    FUN_5f989f30(pHVar4,puVar14);
  }
  else {
    LVar16 = 0;
    UVar13 = 0x14e;
    pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x437);
    SendMessageA(pHVar4,UVar13,WVar10,LVar16);
  }
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x436);
  SendMessageA(pHVar4,0x14e,0,0);
  uVar9 = SendMessageA(pHVar4,0x146,0,0);
  WVar10 = 0;
  if (uVar9 != 0) {
    do {
      LVar6 = SendMessageA(pHVar4,0x150,WVar10,0);
      if (LVar6 == local_14) {
        SendMessageA(pHVar4,0x14e,WVar10,0);
        break;
      }
      WVar10 = WVar10 + 1;
    } while (WVar10 < uVar9);
  }
  FUN_5f95fc20((int)param_1);
  FUN_5f95f190(param_1,*(HWND *)((int)param_1 + 0x10));
  return;
}


