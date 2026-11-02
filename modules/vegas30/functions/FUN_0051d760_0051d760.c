/* Module: vegas30.exe
   Function: FUN_0051d760
   Address: 0051d760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0051d760(int param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  float10 fVar14;
  float fVar15;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c [6];
  int local_74 [28];
  
  iVar5 = *(int *)(param_1 + 0x98);
  iVar6 = *(int *)(iVar5 + 0x9c);
  if (0x32 < param_2) {
    return -0x7fffbffb;
  }
  iVar3 = FUN_0050bd90(param_1,0x22e,0,0);
  if (iVar3 < 0) {
    return -0x7fffbffb;
  }
  local_a0 = FUN_0050bfb0(param_1);
  if (local_a0 < 0) {
    return -0x7fffbffb;
  }
  FUN_005b83b0();
  iVar3 = FUN_0050cd20(param_1,*(undefined4 *)(*(int *)(param_1 + 0x98) + 0x88),
                       *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x8c),iVar6);
  iVar4 = FUN_00522a00(iVar6);
  if (4 < param_2) {
    if (iVar6 == 0) {
      iVar7 = 0x898;
    }
    else if (iVar6 == 1) {
      iVar7 = 0x8ca;
    }
    else if (iVar6 == 2) {
      iVar7 = 0x8fc;
    }
    else {
      iVar7 = 0;
    }
    iVar7 = param_2 + -5 + iVar7;
    if (iVar6 == 0) {
      piVar9 = (int *)(*(int *)(iVar4 + 4) * iVar3 + *(int *)(iVar4 + 8));
      iVar6 = _SfGetMetricBinary_16(DAT_00647200,iVar7,local_8c,0x7c);
      dVar2 = _DAT_00610fd8;
      if (*piVar9 == iVar6) {
        piVar10 = piVar9 + 6;
        piVar11 = local_74;
        piVar13 = piVar10;
        for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar13 = *piVar11;
          piVar11 = piVar11 + 1;
          piVar13 = piVar13 + 1;
        }
        pdVar1 = (double *)(piVar9 + 0x1a);
        iVar6 = *(int *)pdVar1;
        iVar3 = piVar9[0x1b];
        if ((dVar2 != *pdVar1) &&
           (((*(int *)(iVar5 + 0x80) != 0 || (*(int *)(iVar5 + 0x84) != 0x3ff00000)) &&
            (_DAT_00610fd8 != *(double *)(iVar5 + 0x80))))) {
          local_b0 = piVar9[0x16];
          local_ac = piVar9[0x17];
          local_a8 = piVar9[0x18];
          local_a4 = piVar9[0x19];
          FUN_005a6120(piVar10,piVar10,-*pdVar1,&local_b0);
          FUN_005a6440(piVar10,piVar10,&local_b0,0x3f800000,(float)*(double *)(iVar5 + 0x80));
          FUN_005a6120(piVar10,piVar10,iVar6,iVar3,&local_b0);
          FUN_005a6440(piVar10,piVar10,&local_b0,0x3f800000,
                       (float)((float10)_DAT_006106d0 / (float10)*(double *)(iVar5 + 0x80)));
        }
        local_9c = 0;
        local_98 = 0;
        local_94 = 0;
        local_90 = 0;
        fVar14 = (float10)FUN_005a5ff0(iVar5 + 0x24);
        fVar15 = (float)fVar14;
        fVar14 = (float10)FUN_005a5f80();
        FUN_005a6440(piVar10,piVar10,&local_9c,(float)fVar14,fVar15);
      }
    }
    else if (iVar6 == 1) {
      piVar9 = (int *)(*(int *)(iVar4 + 4) * iVar3 + *(int *)(iVar4 + 8));
      iVar5 = _SfGetMetricBinary_16(DAT_00647200,iVar7,local_8c,0x84);
      if (*piVar9 == iVar5) {
        piVar10 = piVar9;
        piVar11 = local_8c;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar11 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar11 = piVar11 + 1;
        }
        piVar10 = local_8c;
        for (iVar5 = 0x21; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar9 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar9 = piVar9 + 1;
        }
      }
    }
    else if (iVar6 == 2) {
      piVar9 = (int *)(*(int *)(iVar4 + 4) * iVar3 + *(int *)(iVar4 + 8));
      iVar5 = _SfGetMetricBinary_16(DAT_00647200,iVar7,local_8c,0x84);
      if (*piVar9 == iVar5) {
        piVar10 = piVar9;
        piVar11 = local_8c;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar11 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar11 = piVar11 + 1;
        }
        piVar10 = local_8c;
        for (iVar5 = 0x21; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar9 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar9 = piVar9 + 1;
        }
      }
    }
    goto switchD_0051d850_default;
  }
  if (iVar6 == 0) {
    puVar8 = (undefined4 *)(iVar5 + 0x24);
    puVar12 = (undefined4 *)(*(int *)(iVar4 + 4) * iVar3 + *(int *)(iVar4 + 8) + 0x18);
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
    }
    switch(param_2) {
    case 1:
      FUN_005a64b0();
      break;
    case 2:
      FUN_005a64b0();
      break;
    case 3:
      FUN_005a64b0();
      break;
    case 4:
      FUN_005a64b0();
    }
    goto switchD_0051d850_default;
  }
  if (iVar6 != 1) {
    if (iVar6 != 2) goto switchD_0051d850_default;
    iVar5 = *(int *)(iVar4 + 4) * iVar3 + *(int *)(iVar4 + 8);
    switch(param_2) {
    case 0:
      FUN_0050c820(iVar5);
      goto switchD_0051d850_default;
    case 1:
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      *(undefined4 *)(iVar5 + 0x20) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x24) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x28) = 0;
      *(undefined4 *)(iVar5 + 0x34) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x30) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x2c) = 0x3f400000;
      *(undefined4 *)(iVar5 + 0x38) = 0x3f400000;
      *(undefined4 *)(iVar5 + 0x3c) = 0x3d4ccccd;
      *(undefined4 *)(iVar5 + 0x40) = 0x3e800000;
      break;
    case 2:
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      *(undefined4 *)(iVar5 + 0x20) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x24) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x28) = 0;
      *(undefined4 *)(iVar5 + 0x34) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x30) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x2c) = 0;
      *(undefined4 *)(iVar5 + 0x38) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x3c) = 0x3ccccccd;
      *(undefined4 *)(iVar5 + 0x40) = 0x3f800000;
      break;
    case 3:
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      *(undefined4 *)(iVar5 + 0x20) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x24) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x28) = 0;
      *(undefined4 *)(iVar5 + 0x34) = 0;
      *(undefined4 *)(iVar5 + 0x30) = 0x3f000000;
      *(undefined4 *)(iVar5 + 0x2c) = 0x3f800000;
      goto LAB_0051d909;
    case 4:
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      *(undefined4 *)(iVar5 + 0x20) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x24) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x28) = 0;
      *(undefined4 *)(iVar5 + 0x34) = 0x3f000000;
      *(undefined4 *)(iVar5 + 0x30) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x2c) = 0;
LAB_0051d909:
      *(undefined4 *)(iVar5 + 0x38) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x3c) = 0x3d4ccccd;
      *(undefined4 *)(iVar5 + 0x40) = 0x3f000000;
      break;
    default:
      goto switchD_0051d850_default;
    }
    *(undefined4 *)(iVar5 + 0x80) = 1;
    *(uint *)(iVar5 + 0x48) = *(uint *)(iVar5 + 0x48) | 4;
    goto switchD_0051d850_default;
  }
  iVar5 = *(int *)(iVar4 + 4) * iVar3 + *(int *)(iVar4 + 8);
  switch(param_2) {
  case 0:
    FUN_0050c7d0(iVar5);
    goto switchD_0051d850_default;
  case 1:
    *(undefined4 *)(iVar5 + 0x4c) = 0;
    *(undefined4 *)(iVar5 + 0x50) = 0;
    *(undefined4 *)(iVar5 + 0x54) = 0x3f900000;
    *(undefined4 *)(iVar5 + 0x58) = 0x3f900000;
    *(undefined4 *)(iVar5 + 0x5c) = 0;
    *(undefined4 *)(iVar5 + 0x68) = 0;
    *(undefined4 *)(iVar5 + 100) = 0;
    *(undefined4 *)(iVar5 + 0x60) = 0;
    *(undefined4 *)(iVar5 + 0x6c) = 0x3f000000;
    *(undefined4 *)(iVar5 + 0x70) = 0x3ccccccd;
    break;
  case 2:
    *(undefined4 *)(iVar5 + 0x4c) = 0x3ccccccd;
    *(undefined4 *)(iVar5 + 0x50) = 0x3ccccccd;
    *(undefined4 *)(iVar5 + 0x54) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0x58) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0x5c) = 0;
    *(undefined4 *)(iVar5 + 0x68) = 0;
    *(undefined4 *)(iVar5 + 100) = 0;
    *(undefined4 *)(iVar5 + 0x60) = 0;
    *(undefined4 *)(iVar5 + 0x6c) = 0x3f000000;
    *(undefined4 *)(iVar5 + 0x70) = 0x3d4ccccd;
    break;
  case 3:
    *(undefined4 *)(iVar5 + 0x4c) = 0x3ccccccd;
    *(undefined4 *)(iVar5 + 0x50) = 0x3ccccccd;
    *(undefined4 *)(iVar5 + 0x54) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0x58) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0x5c) = 0;
    *(undefined4 *)(iVar5 + 0x68) = 0;
    *(undefined4 *)(iVar5 + 100) = 0;
    *(undefined4 *)(iVar5 + 0x60) = 0;
    *(undefined4 *)(iVar5 + 0x6c) = 0x3f400000;
    *(undefined4 *)(iVar5 + 0x70) = 0;
    *(undefined4 *)(iVar5 + 0x74) = 0x3f800000;
    *(uint *)(iVar5 + 0x7c) = *(uint *)(iVar5 + 0x7c) | 4;
    *(undefined4 *)(iVar5 + 0x80) = 0;
    goto switchD_0051d850_default;
  case 4:
    *(undefined4 *)(iVar5 + 0x4c) = 0x3ccccccd;
    *(undefined4 *)(iVar5 + 0x50) = 0x3ccccccd;
    *(undefined4 *)(iVar5 + 0x54) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0x58) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0x5c) = 0;
    *(undefined4 *)(iVar5 + 0x68) = 0;
    *(undefined4 *)(iVar5 + 100) = 0x3f000000;
    *(undefined4 *)(iVar5 + 0x60) = 0x3f000000;
    *(undefined4 *)(iVar5 + 0x6c) = 0x3f400000;
    *(undefined4 *)(iVar5 + 0x70) = 0x3ccccccd;
    break;
  default:
    goto switchD_0051d850_default;
  }
  *(undefined4 *)(iVar5 + 0x74) = 0;
  *(undefined4 *)(iVar5 + 0x80) = 0;
  *(uint *)(iVar5 + 0x7c) = *(uint *)(iVar5 + 0x7c) | 4;
switchD_0051d850_default:
  FUN_0050c380();
  FUN_005b84d0();
  FUN_0050c010();
  InvalidateRect(*(HWND *)(param_1 + 0x180),(RECT *)0x0,1);
  InvalidateRect(*(HWND *)(*(int *)(param_1 + 0x90) + 4),(RECT *)0x0,0);
  if (((*(byte *)(param_1 + 0x154) & 1) != 0) && (*(HWND *)(param_1 + 0x168) != (HWND)0x0)) {
    InvalidateRect(*(HWND *)(param_1 + 0x168),(RECT *)0x0,0);
  }
  DAT_0064767c = DAT_0064767c | 0x800;
  *(uint *)*DAT_0064b138 = *(uint *)*DAT_0064b138 | 0x10;
  return local_a0;
}


