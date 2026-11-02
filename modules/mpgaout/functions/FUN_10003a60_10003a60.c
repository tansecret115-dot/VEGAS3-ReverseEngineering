/* Module: mpgaout.dll
   Function: FUN_10003a60
   Address: 10003a60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10003a60(undefined4 *param_1,int param_2,double *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double dVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double *pdVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  
  iVar11 = param_2 * 0x400;
  puVar1 = (undefined4 *)(&DAT_1001f100 + iVar11);
  puVar10 = (undefined4 *)*param_1;
  puVar16 = (undefined4 *)(&DAT_1001f140 + iVar11);
  puVar17 = puVar1;
  for (iVar14 = 0xf0; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  puVar16 = puVar10;
  puVar17 = (undefined4 *)(&DAT_1001f4c0 + iVar11);
  for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *param_1 = puVar10 + 0x10;
  pdVar15 = (double *)&DAT_100207f8;
  iVar14 = 0;
  *param_3 = (double)*(short *)(&DAT_1001f4de + iVar11) * _DAT_10020a78 +
             (double)*(short *)(&DAT_1001f3de + iVar11) * _DAT_10020678 +
             (double)*(short *)(&DAT_1001f2de + iVar11) * _DAT_10020278 +
             (double)*(short *)(&DAT_1001f1de + iVar11) * _DAT_1001fe78 +
             (double)*(short *)(&DAT_1001f45e + iVar11) * _DAT_10020878 +
             (double)*(short *)(&DAT_1001f35e + iVar11) * _DAT_10020478 +
             (double)*(short *)(&DAT_1001f25e + iVar11) * _DAT_10020078 +
             (double)*(short *)(&DAT_1001f15e + iVar11) * _DAT_1001fc78;
  do {
    iVar12 = 0x1ff - iVar14;
    iVar2 = iVar14 + 0x1df;
    pdVar3 = pdVar15 + -0x180;
    pdVar4 = pdVar15 + -0x140;
    pdVar5 = pdVar15 + -0x100;
    pdVar6 = pdVar15 + -0xc0;
    pdVar7 = pdVar15 + -0x80;
    pdVar8 = pdVar15 + -0x40;
    dVar9 = *pdVar15;
    pdVar15 = pdVar15 + 1;
    iVar13 = 0x10 - iVar14;
    iVar14 = iVar14 + 1;
    param_3[iVar13] =
         (double)*(short *)((int)puVar1 + iVar2 * 2) * (double)(&DAT_1001fb00)[iVar2] +
         (double)*(short *)(&DAT_1001f000 + iVar2 * 2 + iVar11) * *pdVar8 +
         (double)*(short *)(iVar11 + 0x1001ef00 + iVar2 * 2) * *pdVar6 +
         (double)*(short *)(iVar11 + 0x1001ee00 + iVar2 * 2) * *pdVar4 +
         (double)*(short *)((int)puVar1 + iVar12 * 2) * (double)(&DAT_1001fb00)[iVar12] +
         (double)*(short *)(&DAT_1001f000 + iVar12 * 2 + iVar11) *
         *(double *)(iVar12 * 8 + 0x1001f700) +
         (double)*(short *)(iVar11 + 0x1001ef00 + iVar12 * 2) *
         *(double *)(&DAT_1001f300 + iVar12 * 8) +
         (double)*(short *)(iVar11 + 0x1001ee00 + iVar12 * 2) * *(double *)(iVar12 * 8 + 0x1001ef00)
         + (double)*(short *)(iVar11 + 0x1001f080 + iVar2 * 2) * dVar9 +
           (double)*(short *)(iVar11 + 0x1001ef80 + iVar2 * 2) * *pdVar7 +
           (double)*(short *)(iVar11 + 0x1001ee80 + iVar2 * 2) * *pdVar5 +
           (double)*(short *)(iVar11 + 0x1001ed80 + iVar2 * 2) * *pdVar3 +
           (double)*(short *)(iVar11 + 0x1001f080 + iVar12 * 2) * (double)(&DAT_1001f900)[iVar12] +
           (double)*(short *)(iVar11 + 0x1001ef80 + iVar12 * 2) *
           *(double *)(iVar12 * 8 + 0x1001f500) +
           (double)*(short *)(iVar11 + 0x1001ed80 + iVar12 * 2) *
           *(double *)(iVar12 * 8 + 0x1001ed00) +
           (double)*(short *)(iVar11 + 0x1001ee80 + iVar12 * 2) *
           *(double *)(&DAT_1001f100 + iVar12 * 8);
  } while (iVar14 < 0x10);
  pdVar15 = (double *)&DAT_1001fb00;
  iVar14 = 0;
  do {
    iVar12 = 0x1de - iVar14;
    iVar2 = iVar14 + 0x1c0;
    dVar9 = *pdVar15;
    pdVar3 = pdVar15 + 0x40;
    pdVar4 = pdVar15 + 0x80;
    pdVar5 = pdVar15 + 0xc0;
    pdVar6 = pdVar15 + 0x100;
    pdVar7 = pdVar15 + 0x140;
    pdVar8 = pdVar15 + 0x180;
    pdVar15 = pdVar15 + 1;
    param_3[iVar14 + 0x11] =
         ((((((double)*(short *)((int)puVar1 + iVar12 * 2) * (double)(&DAT_1001fb00)[iVar12] +
             (double)*(short *)(&DAT_1001f000 + iVar12 * 2 + iVar11) *
             *(double *)(iVar12 * 8 + 0x1001f700) +
             (double)*(short *)(iVar11 + 0x1001ef00 + iVar12 * 2) *
             *(double *)(&DAT_1001f300 + iVar12 * 8) +
             (double)*(short *)(iVar11 + 0x1001ee00 + iVar12 * 2) *
             *(double *)(iVar12 * 8 + 0x1001ef00)) -
            (double)*(short *)(iVar11 + 0x1001ee00 + iVar2 * 2) * *pdVar3) -
           (double)*(short *)(iVar11 + 0x1001ef00 + iVar2 * 2) * *pdVar5) -
          (double)*(short *)(&DAT_1001f000 + iVar2 * 2 + iVar11) * *pdVar7) -
         (double)*(short *)((int)puVar1 + iVar2 * 2) * (double)(&DAT_1001fb00)[iVar2]) +
         ((((((double)*(short *)(iVar11 + 0x1001f080 + iVar12 * 2) * (double)(&DAT_1001f900)[iVar12]
             + (double)*(short *)(iVar11 + 0x1001ef80 + iVar12 * 2) *
               *(double *)(iVar12 * 8 + 0x1001f500) +
               (double)*(short *)(iVar11 + 0x1001ed80 + iVar12 * 2) *
               *(double *)(iVar12 * 8 + 0x1001ed00) +
               (double)*(short *)(iVar11 + 0x1001ee80 + iVar12 * 2) *
               *(double *)(&DAT_1001f100 + iVar12 * 8)) -
            (double)*(short *)(iVar11 + 0x1001ed80 + iVar2 * 2) * dVar9) -
           (double)*(short *)(iVar11 + 0x1001ee80 + iVar2 * 2) * *pdVar4) -
          (double)*(short *)(iVar11 + 0x1001ef80 + iVar2 * 2) * *pdVar6) -
         (double)*(short *)(iVar11 + 0x1001f080 + iVar2 * 2) * *pdVar8);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 0xf);
  FUN_100037d8(param_3);
  return;
}


