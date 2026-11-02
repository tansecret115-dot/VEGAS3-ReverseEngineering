/* Module: sfpaplug.dll
   Function: FUN_00403ef0
   Address: 00403ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00403ef0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined3 extraout_var;
  int iVar10;
  uint *puVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  short *psVar15;
  short *psVar16;
  undefined4 local_18;
  undefined4 local_10;
  int local_c;
  
  *(undefined4 *)(param_1 + 0x54) = param_2;
  iVar1 = param_1 + 0x40;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  FUN_00403380(iVar1);
  *(undefined4 *)(param_1 + 0x94) = 0;
  iVar10 = *(int *)(param_1 + 0xe0);
  iVar13 = iVar10 - *(int *)(param_1 + 0xe8);
  *(int *)(param_1 + 0x104) = iVar10;
  iVar14 = (*(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xe8)) + iVar13;
  *(int *)(param_1 + 0x108) = iVar13;
  *(int *)(param_1 + 0x10c) = iVar14;
  *(int *)(param_1 + 0x110) =
       ((iVar14 * 2 - *(int *)(param_1 + 0xf8)) - iVar13) + *(int *)(param_1 + 0xf0);
  if (*(short *)(param_1 + 0x22) == 2) {
    iVar10 = *(int *)(param_1 + 0xe4);
    iVar13 = iVar10 - *(int *)(param_1 + 0xec);
    iVar14 = (*(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xec)) + iVar13;
    *(int *)(param_1 + 0x114) = iVar10;
    *(int *)(param_1 + 0x118) = iVar13;
    *(int *)(param_1 + 0x11c) = iVar14;
    *(int *)(param_1 + 0x120) =
         ((iVar14 * 2 - *(int *)(param_1 + 0xfc)) - iVar13) + *(int *)(param_1 + 0xf4);
  }
  cVar9 = FUN_0041c300((ushort *)(param_1 + 0x20));
  psVar15 = *(short **)(param_1 + 0x44);
  bVar7 = false;
  bVar8 = false;
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(short *)(param_1 + 0x22) == 1) {
    iVar10 = 0;
    psVar16 = psVar15;
    if (0 < *(int *)(param_1 + 0x54)) {
      do {
        if (CONCAT31(extraout_var,cVar9) == 0x11) {
          *(int *)(*(int *)(param_1 + 0xb0) + iVar10 * 4) = (int)*psVar15;
        }
        else {
          local_18 = CONCAT22((short)(char)psVar16[1],*psVar16);
          *(undefined4 *)(*(int *)(param_1 + 0xb0) + iVar10 * 4) = local_18;
        }
        if ((!bVar7) && (*(int *)(*(int *)(param_1 + 0xb0) + iVar10 * 4) != 0)) {
          bVar7 = true;
        }
        iVar10 = iVar10 + 1;
        psVar15 = psVar15 + 1;
        psVar16 = (short *)((int)psVar16 + 3);
      } while (iVar10 < *(int *)(param_1 + 0x54));
LAB_0040417a:
      if (bVar7) {
        puVar11 = FUN_00403c10(iVar1,0,*(uint **)(param_1 + 0xb0));
        fVar6 = (float10)log2((float10)*(int *)(param_1 + 0x48));
        ceil((double)((float10)0.6931471805599453 * fVar6 * (float10)_DAT_0044e708));
        iVar10 = ftol();
        *(int *)(param_1 + 0x5c) = iVar10;
        iVar10 = iVar10 * *(int *)(param_1 + 0x54);
        ceil((double)((int)(iVar10 + (iVar10 >> 0x1f & 7U)) >> 3));
        uVar12 = ftol();
        piVar3 = *(int **)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x4c) = uVar12;
        if (*(int *)(param_1 + 0x50) < (int)piVar3) {
          *(undefined4 *)(param_1 + 0x58) = 1;
        }
        else {
          log2(((float10)*(int *)(param_1 + 0x50) * (float10)_DAT_0044e6f8) / (float10)(int)piVar3);
          uVar12 = ftol();
          *(undefined4 *)(param_1 + 0x58) = uVar12;
        }
        if (*(int *)(param_1 + 0x58) < 1) {
          *(undefined4 *)(param_1 + 0x58) = 1;
        }
        iVar10 = FUN_004036a0(iVar1,(int *)puVar11,*(int *)(param_1 + 0x58),piVar3);
        *(int *)(param_1 + 0x60) = iVar10;
        if (((((double)*(int *)(param_1 + 0x4c) * _DAT_0044e6e8 < (double)iVar10) ||
             (DAT_0045c058 == 1)) && (10 < iVar10)) &&
           ((5 < *(int *)(param_1 + 0x54) && (1 < *(int *)(param_1 + 0x5c))))) {
          DAT_0045c058 = 0;
          FUN_00403380(iVar1);
          *(undefined4 *)(param_1 + 0x94) = 0;
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x5c) + -1;
          *(undefined4 *)(param_1 + 0xb8) = 0;
          *(undefined4 *)(param_1 + 300) = 0;
          *(undefined1 *)(param_1 + 0x130) = 0;
          iVar10 = FUN_004036a0(iVar1,*(int **)(param_1 + 0xb0),*(int *)(param_1 + 0x58),
                                *(int **)(param_1 + 0x54));
          *(int *)(param_1 + 0x60) = iVar10;
        }
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x54);
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
        *(double *)(param_1 + 0x78) = (double)*(int *)(param_1 + 0x60) + *(double *)(param_1 + 0x78)
        ;
        goto LAB_0040430a;
      }
    }
  }
  else {
    local_c = 0;
    psVar16 = psVar15;
    if (0 < *(int *)(param_1 + 0x54)) {
      do {
        if (CONCAT31(extraout_var,cVar9) == 0x11) {
          *(int *)(*(int *)(param_1 + 0xb0) + local_c * 4) = (int)psVar15[local_c * 2];
          iVar13 = *(int *)(param_1 + 0xb4);
          local_10 = (int)psVar15[local_c * 2 + 1];
        }
        else {
          local_18 = CONCAT22((short)(char)psVar16[1],*psVar16);
          *(undefined4 *)(*(int *)(param_1 + 0xb0) + local_c * 4) = local_18;
          iVar13 = *(int *)(param_1 + 0xb4);
          local_10 = CONCAT22((short)*(char *)((int)psVar16 + 5),*(undefined2 *)((int)psVar16 + 3));
        }
        *(int *)(iVar13 + local_c * 4) = local_10;
        if (*(int *)(param_1 + 0x68) != 0) {
          iVar13 = *(int *)(*(int *)(param_1 + 0xb4) + local_c * 4);
          iVar14 = *(int *)(*(int *)(param_1 + 0xb0) + local_c * 4);
          uVar2 = iVar14 + iVar13;
          if ((uVar2 & 1) == 0) {
            iVar10 = (int)uVar2 / 2;
          }
          else if ((int)uVar2 < 1) {
            iVar10 = (int)uVar2 / 2 + -1;
          }
          else {
            iVar10 = (int)uVar2 / 2 + 1;
          }
          *(int *)(*(int *)(param_1 + 0xb4) + local_c * 4) = iVar14 - iVar13;
        }
        if ((!bVar8) && (*(int *)(*(int *)(param_1 + 0xb4) + local_c * 4) != 0)) {
          bVar8 = true;
        }
        *(int *)(*(int *)(param_1 + 0xb0) + local_c * 4) = iVar10;
        if ((!bVar7) && (*(int *)(*(int *)(param_1 + 0xb0) + local_c * 4) != 0)) {
          bVar7 = true;
        }
        local_c = local_c + 1;
        psVar16 = psVar16 + 3;
      } while (local_c < *(int *)(param_1 + 0x54));
      goto LAB_0040417a;
    }
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 5;
  *(undefined4 *)(param_1 + 0xf8) = 0;
LAB_0040430a:
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x12a) = *(undefined1 *)(param_1 + 0xb8);
  *(undefined2 *)(param_1 + 0x124) = *(undefined2 *)(param_1 + 0x54);
  if (*(short *)(param_1 + 0x22) == 2) {
    if (bVar8) {
      puVar11 = FUN_00403c10(iVar1,1,*(uint **)(param_1 + 0xb4));
      fVar6 = (float10)log2((float10)*(int *)(param_1 + 0x48));
      ceil((double)((float10)0.6931471805599453 * fVar6 * (float10)_DAT_0044e708));
      iVar10 = ftol();
      *(int *)(param_1 + 0x5c) = iVar10;
      iVar10 = iVar10 * *(int *)(param_1 + 0x54);
      ceil((double)((int)(iVar10 + (iVar10 >> 0x1f & 7U)) >> 3));
      uVar12 = ftol();
      piVar3 = *(int **)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x4c) = uVar12;
      if (*(int *)(param_1 + 0x50) < (int)piVar3) {
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      else {
        log2(((float10)*(int *)(param_1 + 0x50) * (float10)_DAT_0044e6f8) / (float10)(int)piVar3);
        uVar12 = ftol();
        *(undefined4 *)(param_1 + 0x58) = uVar12;
      }
      if (*(int *)(param_1 + 0x58) < 1) {
        *(undefined4 *)(param_1 + 0x58) = 1;
      }
      uVar12 = *(undefined4 *)(param_1 + 0x8c);
      uVar4 = *(undefined4 *)(param_1 + 0x90);
      uVar5 = *(undefined4 *)(param_1 + 0x94);
      iVar10 = *(int *)(param_1 + 0x60);
      iVar13 = FUN_004036a0(iVar1,(int *)puVar11,*(int *)(param_1 + 0x58),piVar3);
      *(int *)(param_1 + 0x60) = iVar13;
      if ((((double)*(int *)(param_1 + 0x4c) * _DAT_0044e6e8 < (double)(iVar13 - iVar10)) ||
          (DAT_0045c058 == 1)) &&
         ((10 < iVar13 && ((5 < *(int *)(param_1 + 0x54) && (1 < *(int *)(param_1 + 0x5c))))))) {
        DAT_0045c058 = 0;
        *(undefined4 *)(param_1 + 0x8c) = uVar12;
        *(undefined4 *)(param_1 + 0x90) = uVar4;
        *(undefined4 *)(param_1 + 0x94) = uVar5;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x5c) + -1;
        *(undefined4 *)(param_1 + 0xb8) = 0;
        *(undefined4 *)(param_1 + 0x131) = 0;
        *(undefined1 *)(param_1 + 0x135) = 0;
        iVar10 = FUN_004036a0(iVar1,*(int **)(param_1 + 0xb4),*(int *)(param_1 + 0x58),
                              *(int **)(param_1 + 0x54));
        *(int *)(param_1 + 0x60) = iVar10;
      }
      *(undefined1 *)(param_1 + 0x129) = *(undefined1 *)(param_1 + 0x58);
      *(undefined1 *)(param_1 + 299) = *(undefined1 *)(param_1 + 0xb8);
      *(double *)(param_1 + 0x78) = (double)*(int *)(param_1 + 0x60) + *(double *)(param_1 + 0x78);
    }
    else {
      *(undefined4 *)(param_1 + 0xe4) = 0;
      *(undefined4 *)(param_1 + 0xec) = 0;
      *(undefined1 *)(param_1 + 299) = 5;
      *(undefined4 *)(param_1 + 0xf4) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
    }
  }
  *(short *)(param_1 + 0x126) = *(short *)(param_1 + 0x8c) + 1;
  FUN_00403650(iVar1);
  return 0;
}


