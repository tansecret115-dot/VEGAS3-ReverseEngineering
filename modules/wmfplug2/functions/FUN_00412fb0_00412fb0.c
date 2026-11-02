/* Module: wmfplug2.dll
   Function: FUN_00412fb0
   Address: 00412fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00412fb0(void *this,HWND param_1)

{
  bool bVar1;
  HWND pHVar2;
  WPARAM WVar3;
  LRESULT LVar4;
  UINT UVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  
  iVar8 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar8 == 0) {
    return -0x7ff8ffa9;
  }
  pHVar2 = GetDlgItem(param_1,0x3ec);
  if ((pHVar2 != (HWND)0x0) && (WVar3 = SendMessageA(pHVar2,0x147,0,0), WVar3 != 0xffffffff)) {
    LVar4 = SendMessageA(pHVar2,0x150,WVar3,0);
    *(LRESULT *)(iVar8 + 0x4c) = LVar4;
  }
  pHVar2 = GetDlgItem(param_1,0x3f5);
  if (pHVar2 != (HWND)0x0) {
    WVar3 = SendMessageA(pHVar2,0x147,0,0);
    if (WVar3 != 0xffffffff) {
      LVar4 = SendMessageA(pHVar2,0x150,WVar3,0);
      *(LRESULT *)(iVar8 + 0x58) = LVar4;
    }
    switch(*(undefined4 *)(iVar8 + 0x58)) {
    case 0:
      *(undefined4 *)(iVar8 + 0x54) = 0;
      uVar6 = *(uint *)((int)this + 0x50);
      if (uVar6 < 2) {
        uVar6 = 2;
      }
      else if (800 < uVar6) {
        uVar6 = 800;
      }
      *(uint *)(iVar8 + 0x5c) = uVar6;
      uVar6 = *(uint *)((int)this + 0x4c);
      if (uVar6 < 2) {
        *(undefined4 *)(iVar8 + 0x60) = 2;
      }
      else {
        if (600 < uVar6) {
          uVar6 = 600;
        }
        *(uint *)(iVar8 + 0x60) = uVar6;
      }
      break;
    default:
      UVar5 = GetDlgItemInt(param_1,0x3f7,(BOOL *)0x0,0);
      *(UINT *)(iVar8 + 0x5c) = UVar5;
      if (UVar5 < 2) {
        UVar5 = 2;
      }
      else if (800 < UVar5) {
        UVar5 = 800;
      }
      *(UINT *)(iVar8 + 0x5c) = UVar5;
      uVar6 = GetDlgItemInt(param_1,0x3f8,(BOOL *)0x0,0);
      *(uint *)(iVar8 + 0x60) = uVar6;
      if (uVar6 < 2) {
        uVar6 = 2;
      }
      else if (600 < uVar6) {
        uVar6 = 600;
      }
      *(uint *)(iVar8 + 0x60) = uVar6;
      if ((*(uint *)(iVar8 + 0x5c) & 1) != 0) {
        *(uint *)(iVar8 + 0x5c) = *(uint *)(iVar8 + 0x5c) + 1;
      }
      if ((uVar6 & 1) != 0) {
        *(uint *)(iVar8 + 0x60) = uVar6 + 1;
      }
      *(undefined4 *)(iVar8 + 0x54) = 1;
      break;
    case 2:
      *(undefined4 *)(iVar8 + 0x54) = 1;
      *(undefined4 *)(iVar8 + 0x5c) = 0xb0;
      *(undefined4 *)(iVar8 + 0x60) = 0x90;
      break;
    case 3:
      *(undefined4 *)(iVar8 + 0x54) = 1;
      *(undefined4 *)(iVar8 + 0x5c) = 0xa0;
      *(undefined4 *)(iVar8 + 0x60) = 0x78;
      break;
    case 4:
      *(undefined4 *)(iVar8 + 0x54) = 1;
      *(undefined4 *)(iVar8 + 0x5c) = 0x140;
      *(undefined4 *)(iVar8 + 0x60) = 0xf0;
    }
  }
  UVar5 = GetDlgItemInt(param_1,0x3ee,(BOOL *)0x0,0);
  *(UINT *)(iVar8 + 100) = UVar5;
  if (UVar5 == 0) {
    UVar5 = 1;
  }
  else if (0x3c < UVar5) {
    UVar5 = 0x3c;
  }
  *(UINT *)(iVar8 + 100) = UVar5;
  UVar5 = GetDlgItemInt(param_1,0x3ef,(BOOL *)0x0,0);
  *(UINT *)(iVar8 + 0x6c) = UVar5;
  if (UVar5 == 0) {
    UVar5 = 1;
  }
  else if (1000 < UVar5) {
    UVar5 = 1000;
  }
  uVar6 = *(uint *)(iVar8 + 100);
  *(UINT *)(iVar8 + 0x6c) = UVar5;
  iVar10 = *(int *)(*(int *)((int)this + 0x34) + 0x428);
  puVar11 = (undefined4 *)(iVar10 + 8);
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  *(double *)(iVar10 + 0x18) = (double)uVar6;
  *(undefined4 *)(iVar10 + 0x20) = 0;
  *(undefined4 *)(iVar10 + 0x28) = 0;
  *(undefined4 *)(iVar10 + 8) = 0x40;
  *(undefined4 *)(iVar10 + 0xc) = 0xffffffff;
  *(undefined4 *)(iVar10 + 0x10) = 0;
  *(undefined4 *)(iVar10 + 0x14) = 0;
  *(undefined4 *)(iVar10 + 0x24) = 0x3ff00000;
  *(undefined4 *)(iVar10 + 0x2c) = 0;
  *(undefined4 *)(iVar10 + 0x30) = 0;
  *(undefined4 *)(iVar10 + 0x34) = 0;
  *(undefined4 *)(iVar10 + 0x38) = 0;
  *(undefined4 *)(iVar10 + 0x3c) = 0;
  *(undefined4 *)(iVar10 + 0x40) = 0;
  *(undefined4 *)(iVar10 + 0x44) = 0;
  uVar6 = *(uint *)(iVar8 + 100);
  iVar10 = *(int *)(*(int *)((int)this + 0x34) + 0x428);
  puVar11 = (undefined4 *)(iVar10 + 0x50);
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  *(double *)(iVar10 + 0x60) = (double)uVar6;
  *(undefined4 *)(iVar10 + 0x68) = 0;
  *(undefined4 *)(iVar10 + 0x70) = 0;
  *(undefined4 *)(iVar10 + 0x50) = 0x40;
  *(undefined4 *)(iVar10 + 0x54) = 0xffffffff;
  *(undefined4 *)(iVar10 + 0x58) = 0;
  *(undefined4 *)(iVar10 + 0x5c) = 0;
  *(undefined4 *)(iVar10 + 0x6c) = 0x3ff00000;
  *(undefined4 *)(iVar10 + 0x74) = 0;
  *(undefined4 *)(iVar10 + 0x78) = 0;
  *(undefined4 *)(iVar10 + 0x7c) = 0;
  *(undefined4 *)(iVar10 + 0x80) = 0;
  *(undefined4 *)(iVar10 + 0x84) = 0;
  *(undefined4 *)(iVar10 + 0x88) = 0;
  *(undefined4 *)(iVar10 + 0x8c) = 0;
  pHVar2 = GetDlgItem(param_1,0x3eb);
  LVar4 = SendMessageA(pHVar2,0x400,0,0);
  if (LVar4 != -1) {
    *(LRESULT *)(iVar8 + 0x68) = LVar4;
  }
  iVar10 = -1;
  UVar5 = IsDlgButtonChecked(param_1,0x400);
  if (UVar5 != 0) {
    UVar5 = GetDlgItemInt(param_1,0x401,(BOOL *)0x0,0);
    if (UVar5 == 0) {
      iVar10 = -1;
    }
    else if (UVar5 == 0) {
      iVar10 = 1000;
    }
    else {
      if (0x1e < UVar5) {
        UVar5 = 0x1e;
      }
      iVar10 = UVar5 * 1000;
    }
  }
  if (*(int *)(iVar8 + 0x4c) == 0x32564d57) {
    UVar5 = IsDlgButtonChecked(param_1,0x402);
    bVar1 = true;
    if (UVar5 != 0) goto LAB_00413337;
  }
  bVar1 = false;
LAB_00413337:
  *(int **)(iVar8 + 0x74) = (int *)(iVar8 + 0x7c);
  piVar7 = FUN_00412200((int *)(iVar8 + 0x7c),*(int *)(iVar8 + 0x78),2);
  if (piVar7 == (int *)0x0) {
    if ((!bVar1) && (iVar10 == -1)) {
      return 0;
    }
    iVar8 = FUN_00412a10(this,*(int *)(*(int *)((int)this + 0x34) + 0x424));
    if (iVar8 < 0) {
      return iVar8;
    }
    iVar8 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
    if (iVar8 == 0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)(iVar8 + 0x78) == 0) {
      return 0;
    }
    piVar7 = FUN_00412200(*(int **)(iVar8 + 0x74),*(int *)(iVar8 + 0x78),2);
    if (piVar7 == (int *)0x0) {
      return -0x7fffbffb;
    }
  }
  piVar7[3] = iVar10;
  piVar7[4] = (uint)bVar1;
  return 0;
}


