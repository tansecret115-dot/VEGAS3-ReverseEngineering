/* Module: vfplugs.dll
   Function: FUN_00473c30
   Address: 00473c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00473c30(HWND param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  WPARAM wParam;
  undefined4 uVar2;
  HWND pHVar3;
  double dVar4;
  SHORT SVar5;
  LONG lParam;
  double *pdVar6;
  int iVar7;
  double *pdVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  double *local_c [2];
  
  lParam = GetWindowLongA(param_1,0);
  piVar1 = *(int **)(lParam + 0x308);
  if (param_3 == 0) {
    return;
  }
  switch(param_2) {
  case 9:
    SVar5 = GetKeyState(0x10);
    if (SVar5 < 0) {
      FUN_00471450(param_1,(int *)local_c,-1);
    }
    else {
      FUN_004713e0(param_1,(int *)local_c,-1);
    }
    *(double **)(lParam + 0x2fc) = local_c[0];
    pdVar6 = (double *)
             (*(int *)(*(int *)(lParam + 0x308) + 4) * (int)local_c[0] +
             *(int *)(*(int *)(lParam + 0x308) + 8));
    pdVar8 = pdVar6;
    puVar9 = (undefined4 *)(lParam + 0x310);
    for (iVar7 = 0x56; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *(undefined4 *)pdVar8;
      pdVar8 = (double *)((int)pdVar8 + 4);
      puVar9 = puVar9 + 1;
    }
    *(undefined4 *)(lParam + 8) = 0x836;
    *(double **)(lParam + 0xc) = local_c[0];
    pdVar8 = pdVar6;
    puVar9 = (undefined4 *)(lParam + 0x10);
    for (iVar7 = 0x56; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *(undefined4 *)pdVar8;
      pdVar8 = (double *)((int)pdVar8 + 4);
      puVar9 = puVar9 + 1;
    }
    break;
  default:
    goto switchD_00473c72_caseD_a;
  case 0x1b:
    if (*(int *)(lParam + 0x2f8) != 1) {
      return;
    }
    if (0 < *piVar1) {
      local_c[0] = (double *)(*(int *)(lParam + 0x2fc) * piVar1[1] + piVar1[2]);
    }
    puVar9 = (undefined4 *)(lParam + 0x310);
    pdVar6 = local_c[0];
    for (iVar7 = 0x56; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pdVar6 = *puVar9;
      puVar9 = puVar9 + 1;
      pdVar6 = (double *)((int)pdVar6 + 4);
    }
    *(undefined4 *)(lParam + 0xc) = *(undefined4 *)(lParam + 0x2fc);
    wParam = *(WPARAM *)(lParam + 4);
    puVar9 = (undefined4 *)(lParam + 0x310);
    puVar10 = (undefined4 *)(lParam + 0x10);
    for (iVar7 = 0x56; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    pHVar3 = *(HWND *)(lParam + 0x2c8);
    *(undefined4 *)(lParam + 0x2f8) = 0;
    *(undefined4 *)(lParam + 8) = 0x838;
    puVar9 = (undefined4 *)(lParam + 0x168);
    for (iVar7 = 0x56; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *(undefined4 *)local_c[0];
      local_c[0] = (double *)((int)local_c[0] + 4);
      puVar9 = puVar9 + 1;
    }
    SendMessageA(pHVar3,0x4e,wParam,lParam);
    InvalidateRect(*(HWND *)(lParam + 0x2c0),(RECT *)0x0,0);
    return;
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
    if (0 < *piVar1) {
      local_c[0] = (double *)(*(int *)(lParam + 0x2fc) * piVar1[1] + piVar1[2]);
    }
    pdVar6 = local_c[0];
    puVar9 = (undefined4 *)(lParam + 0x310);
    for (iVar7 = 0x56; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *(undefined4 *)pdVar6;
      pdVar6 = (double *)((int)pdVar6 + 4);
      puVar9 = puVar9 + 1;
    }
    SVar5 = GetKeyState(0x11);
    bVar11 = -1 < SVar5;
    switch(param_2) {
    case 0x21:
      *(undefined4 *)(local_c[0] + 1) = 0;
      *(undefined4 *)((int)local_c[0] + 0xc) = 0;
      break;
    case 0x22:
      *(undefined4 *)(local_c[0] + 1) = 0;
      *(undefined4 *)((int)local_c[0] + 0xc) = 0x3ff00000;
      break;
    case 0x23:
      *(undefined4 *)local_c[0] = 0;
      *(undefined4 *)((int)local_c[0] + 4) = 0x3ff00000;
      break;
    case 0x24:
      *(undefined4 *)local_c[0] = 0;
      *(undefined4 *)((int)local_c[0] + 4) = 0;
      break;
    case 0x25:
      if (bVar11) {
        *local_c[0] = *local_c[0] - *(double *)(lParam + 0x480);
      }
      else {
        *local_c[0] = *local_c[0] - *(double *)(lParam + 0x488);
      }
      break;
    case 0x26:
      if (bVar11) {
        local_c[0][1] = local_c[0][1] - *(double *)(lParam + 0x490);
      }
      else {
        local_c[0][1] = local_c[0][1] - *(double *)(lParam + 0x498);
      }
      break;
    case 0x27:
      if (bVar11) {
        *local_c[0] = *(double *)(lParam + 0x480) + *local_c[0];
      }
      else {
        *local_c[0] = *(double *)(lParam + 0x488) + *local_c[0];
      }
      break;
    case 0x28:
      if (bVar11) {
        local_c[0][1] = *(double *)(lParam + 0x490) + local_c[0][1];
      }
      else {
        local_c[0][1] = *(double *)(lParam + 0x498) + local_c[0][1];
      }
    }
    dVar4 = _DAT_00487598;
    if ((_DAT_00487598 <= local_c[0][1]) && (dVar4 = _DAT_00487590, local_c[0][1] <= _DAT_00487590))
    {
      dVar4 = local_c[0][1];
    }
    local_c[0][1] = dVar4;
    dVar4 = _DAT_00487598;
    if ((_DAT_00487598 <= *local_c[0]) && (dVar4 = _DAT_00487590, *local_c[0] <= _DAT_00487590)) {
      dVar4 = *local_c[0];
    }
    *local_c[0] = dVar4;
    uVar2 = *(undefined4 *)(lParam + 0x2fc);
    puVar9 = (undefined4 *)(lParam + 0x310);
    puVar10 = (undefined4 *)(lParam + 0x10);
    for (iVar7 = 0x56; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined4 *)(lParam + 8) = 0x838;
    *(undefined4 *)(lParam + 0xc) = uVar2;
    pdVar6 = local_c[0];
  }
  pHVar3 = *(HWND *)(lParam + 0x2c8);
  puVar9 = (undefined4 *)(lParam + 0x168);
  for (iVar7 = 0x56; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar9 = puVar9 + 1;
  }
  SendMessageA(pHVar3,0x4e,*(WPARAM *)(lParam + 4),lParam);
  InvalidateRect(*(HWND *)(lParam + 0x2c0),(RECT *)0x0,0);
switchD_00473c72_caseD_a:
  return;
}


