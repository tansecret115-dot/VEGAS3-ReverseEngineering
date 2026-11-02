/* Module: mpgaout.dll
   Function: FUN_100095e0
   Address: 100095e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100095e0(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  double *pdVar17;
  short *psVar18;
  int iVar19;
  double dVar20;
  double dVar21;
  int local_68;
  int local_18 [6];
  
  iVar4 = *param_5;
  iVar5 = param_5[4];
  iVar6 = param_5[6];
  local_18[1] = 0;
  local_18[0] = 0;
  if (0 < iVar5) {
    iVar11 = param_1 + 0x44d94;
    puVar12 = (undefined4 *)(param_1 + 0x3a390);
    iVar13 = param_1 + 0x41d90;
    piVar2 = local_18 + 1;
    iVar9 = 0;
    do {
      iVar1 = iVar9 + 1;
      iVar19 = iVar9 * 4;
      iVar7 = iVar9 * 0x100;
      psVar18 = (short *)(param_2 + iVar9 * 0x900);
      iVar16 = 0;
      do {
        iVar15 = iVar16 + 1;
        sVar3 = *psVar18;
        psVar18 = psVar18 + 1;
        *(double *)
         (iVar9 * 0x2c00 + ((iVar16 + *(int *)(iVar19 + iVar11)) % 0x580) * 8 + param_1 + 0x3c590) =
             (double)sVar3 * _DAT_100095a8;
        iVar16 = iVar15;
      } while (iVar15 < 0x480);
      iVar16 = 0;
      do {
        *(undefined8 *)(puVar12 + iVar16 * 2) =
             *(undefined8 *)
              (iVar9 * 0x2c00 + ((*(int *)(iVar19 + iVar11) + 0x4c0 + iVar16) % 0x580) * 8 +
              param_1 + 0x3c590);
        iVar16 = iVar16 + 1;
      } while (iVar16 < 0x400);
      *(int *)(iVar19 + iVar11) = (*(int *)(iVar19 + iVar11) + 0x480) % 0x580;
      iVar9 = 0;
      do {
        *(double *)(puVar12 + iVar9 * 2) =
             *(double *)(puVar12 + iVar9 * 2) * *(double *)(param_1 + 0x38390 + iVar9 * 8);
        uVar8 = _DAT_100095b0;
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x400);
      iVar9 = 0x1ff;
      puVar10 = (undefined8 *)(param_1 + 0x44d78);
      do {
        *puVar10 = uVar8;
        puVar10 = puVar10 + -3;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
      FUN_10008478(param_1,puVar12,iVar13);
      iVar9 = 0;
      do {
        iVar19 = iVar9 + 0x10;
        dVar20 = exp(_DAT_100095d8);
        pdVar17 = (double *)(iVar13 + iVar9 * 0x18);
        iVar16 = 0xf;
        do {
          dVar21 = *pdVar17;
          pdVar17 = pdVar17 + 3;
          dVar21 = exp(dVar21 * _DAT_100095b8);
          dVar20 = dVar20 + dVar21;
          iVar16 = iVar16 + -1;
        } while (-1 < iVar16);
        dVar20 = log10(dVar20);
        *(double *)(param_1 + 0x3c390 + iVar7 + (iVar9 >> 4) * 8) = dVar20 * _DAT_100095c0;
        iVar9 = iVar19;
      } while (iVar19 < 0x200);
      iVar16 = 1;
      iVar19 = 0;
      FUN_100087a8(iVar13,piVar2);
      FUN_10008ad8(param_1,iVar13,local_18,*(int *)(param_1 + 0x44d90));
      FUN_10008d40(iVar13,*(int *)(param_1 + 0x44d90),piVar2,local_18);
      FUN_10009020(param_1,iVar13,*(int *)(param_1 + 0x44d90),piVar2,local_18,
                   *(int *)(&DAT_1000c040 +
                           *(int *)(iVar4 + 0xc) * 4 + (*(int *)(iVar4 + 4) + -1) * 0x3c) / iVar5);
      iVar9 = *(int *)(param_1 + 0x44d90);
      if (0 < iVar6) {
        local_68 = 0x20;
        do {
          iVar15 = *(int *)(param_1 + 0x44da4);
          if (iVar16 < iVar15 + -1) {
            dVar20 = *(double *)(iVar9 + 0x18 + local_68);
            if ((*(int *)(iVar9 + local_68) >> 4 == iVar19) && (iVar16 < iVar15)) {
              iVar14 = iVar16 << 5;
              do {
                dVar21 = *(double *)(iVar9 + 0x18 + iVar14);
                if (dVar21 < dVar20) {
                  dVar20 = dVar21;
                }
                iVar14 = iVar14 + 0x20;
                local_68 = local_68 + 0x20;
                iVar16 = iVar16 + 1;
              } while ((*(int *)(iVar9 + iVar14) >> 4 == iVar19) && (iVar16 < iVar15));
            }
            *(double *)(iVar7 + param_4 + iVar19 * 8) = dVar20;
          }
          else {
            *(undefined8 *)(iVar7 + param_4 + iVar19 * 8) =
                 *(undefined8 *)(iVar9 + -0x10 + iVar15 * 0x20);
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < iVar6);
      }
      iVar9 = 0;
      if (0 < iVar6) {
        do {
          dVar21 = log10(*(double *)(iVar7 + param_3 + iVar9 * 8) * _DAT_100095c8);
          dVar20 = *(double *)(param_1 + 0x3c390 + iVar7 + iVar9 * 8);
          dVar21 = dVar21 * _DAT_100095d0 - _DAT_100095c0;
          if (dVar21 < dVar20) {
            dVar21 = dVar20;
          }
          *(double *)(iVar7 + param_4 + iVar9 * 8) =
               dVar21 - *(double *)(iVar7 + param_4 + iVar9 * 8);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar6);
      }
      iVar9 = iVar1;
    } while (iVar1 < iVar5);
  }
  return;
}


