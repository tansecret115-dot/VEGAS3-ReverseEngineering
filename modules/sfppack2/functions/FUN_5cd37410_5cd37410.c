/* Module: sfppack2.dll
   Function: FUN_5cd37410
   Address: 5cd37410
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5cd37410(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,char param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 auStack_4b8 [8];
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  double dStack_4a8;
  undefined1 auStack_3c8 [8];
  double local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined1 auStack_2d8 [8];
  undefined4 local_2d0;
  undefined4 local_2cc;
  double local_2c8;
  double local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined1 auStack_f8 [244];
  
  local_2d0 = 0;
  local_2cc = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x3fe00000;
  *(undefined2 *)(param_2 + 3) = 0xc;
  fVar9 = (float10)FUN_5cd26f90();
  local_3c0 = (double)fVar9;
  dVar4 = (double)CONCAT44(param_6,param_5);
  local_2c8 = *(double *)(param_1 + 0x338) / dVar4;
  local_3b8 = 0;
  local_3b4 = 0;
  local_2b8 = 0;
  local_2b4 = 0x3fe00000;
  local_2c0 = *(double *)(param_1 + 0x340) / dVar4;
  dVar1 = *(double *)(param_1 + 0x340);
  dVar2 = *(double *)(param_1 + 0x338);
  fVar9 = (float10)_CIpow();
  dVar3 = (double)((float10)_DAT_5cd51510 - fVar9);
  fVar9 = (float10)_CIpow();
  uStack_4b0 = 0;
  uStack_4ac = 0x3ff00000;
  dStack_4a8 = (double)((float10)dVar3 / fVar9);
  if ((fVar9 * (float10)dVar3 <= (float10)_DAT_5cd51520) ||
     ((dVar1 - dVar2) / dVar4 <= _DAT_5cd51520)) {
    iVar6 = 0x10;
  }
  else {
    log2((float10)dVar3);
    log2(fVar9);
    log2((float10)dVar3 / fVar9);
    iVar6 = ftol();
    uVar7 = iVar6 / *(int *)(param_1 + 0x374);
    uVar8 = DAT_5cd67d98;
    uVar5 = uVar7;
    if (((int)DAT_5cd67d98 <= (int)uVar7) &&
       (uVar8 = uVar7, uVar5 = _DAT_5cd70ac4, (int)DAT_5cd67d9c < (int)uVar7)) {
      _DAT_5cd70ac4 = DAT_5cd67d9c;
      uVar8 = DAT_5cd67d9c;
      uVar5 = _DAT_5cd70ac4;
    }
    _DAT_5cd70ac4 = uVar5;
    iVar6 = FUN_5cd26b00(param_1);
    if (iVar6 != 0) {
      return 0xb;
    }
    if (param_7 != '\0') {
      _DAT_5cd70ac4 = uVar8;
      return 0;
    }
    iVar6 = FUN_5cd37700(uVar8,2,0x10,(int)param_2,(int)auStack_2d8,(int)auStack_3c8,
                         (int)auStack_4b8,(int)auStack_f8);
    if (iVar6 == 0) {
LAB_5cd376b0:
      fVar9 = (float10)FUN_5cd26f90();
      iVar6 = FUN_5cd27580(param_2,(double)fVar9);
      return iVar6;
    }
    if (iVar6 == 0x13) {
      puVar16 = auStack_f8;
      puVar15 = auStack_4b8;
      puVar14 = auStack_3c8;
      puVar13 = auStack_2d8;
      iVar11 = 0x10;
      iVar10 = 2;
      piVar12 = param_2;
      iVar6 = ftol();
      iVar6 = FUN_5cd37700(uVar8 - iVar6,iVar10,iVar11,(int)piVar12,(int)puVar13,(int)puVar14,
                           (int)puVar15,(int)puVar16);
      if (iVar6 == 0) goto LAB_5cd376b0;
    }
  }
  return iVar6;
}


