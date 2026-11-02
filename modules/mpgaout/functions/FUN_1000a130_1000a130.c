/* Module: mpgaout.dll
   Function: FUN_1000a130
   Address: 1000a130
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000a130(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  double *pdVar16;
  short *psVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  int local_70;
  int local_18 [6];
  
  iVar4 = param_5[4];
  iVar5 = *param_5;
  local_18[1] = 0;
  local_18[0] = 0;
  if (0 < iVar4) {
    iVar10 = param_1 + 0x44d94;
    puVar11 = (undefined4 *)(param_1 + 0x3a390);
    iVar12 = param_1 + 0x41d90;
    piVar2 = local_18 + 1;
    iVar8 = 0;
    do {
      iVar1 = iVar8 + 1;
      iVar18 = iVar8 * 4;
      iVar6 = iVar8 * 0x100;
      psVar17 = (short *)(param_2 + iVar8 * 0x900);
      iVar15 = 0;
      do {
        iVar14 = iVar15 + 1;
        sVar3 = *psVar17;
        psVar17 = psVar17 + 1;
        *(double *)
         (iVar8 * 0x2c00 + ((iVar15 + *(int *)(iVar18 + iVar10)) % 0x280) * 8 + param_1 + 0x3c590) =
             (double)sVar3 * _DAT_1000a0f8;
        iVar15 = iVar14;
      } while (iVar14 < 0x180);
      iVar15 = 0;
      do {
        *(undefined8 *)(puVar11 + iVar15 * 2) =
             *(undefined8 *)
              (iVar8 * 0x2c00 + ((*(int *)(iVar18 + iVar10) + 0x1c0 + iVar15) % 0x280) * 8 +
              param_1 + 0x3c590);
        iVar15 = iVar15 + 1;
      } while (iVar15 < 0x200);
      *(int *)(iVar18 + iVar10) = (*(int *)(iVar18 + iVar10) + 0x180) % 0x280;
      iVar8 = 0;
      do {
        *(double *)(puVar11 + iVar8 * 2) =
             *(double *)(puVar11 + iVar8 * 2) * *(double *)(param_1 + 0x38390 + iVar8 * 8);
        uVar7 = _DAT_1000a100;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x200);
      iVar8 = 0xff;
      puVar9 = (undefined8 *)(param_1 + 0x43578);
      do {
        *puVar9 = uVar7;
        puVar9 = puVar9 + -3;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
      FUN_10009ac0(param_1,puVar11,iVar12);
      iVar8 = 0;
      do {
        iVar18 = iVar8 + 8;
        dVar19 = exp(_DAT_1000a128);
        pdVar16 = (double *)(iVar12 + iVar8 * 0x18);
        iVar15 = 7;
        do {
          dVar20 = *pdVar16;
          pdVar16 = pdVar16 + 3;
          dVar20 = exp(dVar20 * _DAT_1000a108);
          dVar19 = dVar19 + dVar20;
          iVar15 = iVar15 + -1;
        } while (-1 < iVar15);
        dVar19 = log10(dVar19);
        *(double *)(param_1 + 0x3c390 + iVar6 + (iVar8 >> 3) * 8) = dVar19 * _DAT_1000a110;
        iVar8 = iVar18;
      } while (iVar18 < 0x100);
      iVar15 = 1;
      iVar18 = 0;
      FUN_10009df0(iVar12,piVar2);
      FUN_10008ad8(param_1,iVar12,local_18,*(int *)(param_1 + 0x44d90));
      FUN_10008d40(iVar12,*(int *)(param_1 + 0x44d90),piVar2,local_18);
      FUN_10009020(param_1,iVar12,*(int *)(param_1 + 0x44d90),piVar2,local_18,
                   *(int *)(&DAT_1000c040 +
                           *(int *)(iVar5 + 0xc) * 4 + (*(int *)(iVar5 + 4) + -1) * 0x3c) / iVar4);
      iVar8 = *(int *)(param_1 + 0x44d90);
      local_70 = 0x20;
      do {
        iVar14 = *(int *)(param_1 + 0x44da4);
        if (iVar15 < iVar14 + -1) {
          dVar19 = *(double *)(iVar8 + 0x18 + local_70);
          if ((*(int *)(iVar8 + local_70) >> 3 == iVar18) && (iVar15 < iVar14)) {
            iVar13 = iVar15 << 5;
            do {
              dVar20 = *(double *)(iVar8 + 0x18 + iVar13);
              if (dVar20 < dVar19) {
                dVar19 = dVar20;
              }
              iVar13 = iVar13 + 0x20;
              local_70 = local_70 + 0x20;
              iVar15 = iVar15 + 1;
            } while ((*(int *)(iVar8 + iVar13) >> 3 == iVar18) && (iVar15 < iVar14));
          }
          *(double *)(iVar6 + param_4 + iVar18 * 8) = dVar19;
        }
        else {
          *(undefined8 *)(iVar6 + param_4 + iVar18 * 8) =
               *(undefined8 *)(iVar8 + -0x10 + iVar14 * 0x20);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < 0x20);
      iVar8 = 0;
      do {
        dVar20 = log10(*(double *)(iVar6 + param_3 + iVar8 * 8) * _DAT_1000a118);
        dVar19 = *(double *)(param_1 + 0x3c390 + iVar6 + iVar8 * 8);
        dVar20 = dVar20 * _DAT_1000a120 - _DAT_1000a110;
        if (dVar20 < dVar19) {
          dVar20 = dVar19;
        }
        *(double *)(iVar6 + param_4 + iVar8 * 8) = dVar20 - *(double *)(iVar6 + param_4 + iVar8 * 8)
        ;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x20);
      iVar8 = iVar1;
    } while (iVar1 < iVar4);
  }
  return;
}


