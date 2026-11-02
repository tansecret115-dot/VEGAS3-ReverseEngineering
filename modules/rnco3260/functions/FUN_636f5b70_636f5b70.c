/* Module: rnco3260.dll
   Function: FUN_636f5b70
   Address: 636f5b70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_636f5b70(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  int *piVar13;
  uint *puVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  
  if (DAT_63789754 == 0) {
    FUN_636f57b0();
    FUN_636f61a0();
    FUN_636f5ad0();
    DAT_63789754 = DAT_63789754 + 1;
  }
  else {
    iVar12 = FUN_636f6000((double)(DAT_63789744 - param_1));
    if ((((iVar12 == 0) && (iVar12 = FUN_636f6000((double)(DAT_6378974c - param_2)), iVar12 == 0))
        && (iVar12 = FUN_636f6000((double)(DAT_63789748 - param_3)), iVar12 == 0)) &&
       (iVar12 = FUN_636f6000((double)(DAT_63789750 - param_4)), iVar12 == 0)) {
      return;
    }
  }
  fVar15 = FUN_636f5fa0((double)param_4,-2.356194490192345,0.0,2.356194490192345);
  fVar16 = (float10)fcos(fVar15);
  DAT_63789750 = param_4;
  fVar17 = (float10)fsin(fVar15);
  fVar15 = (float10)_DAT_63765330;
  fVar5 = (float10)_DAT_63765338;
  DAT_637944e0 = FUN_636f6000((double)param_4);
  fVar18 = FUN_636f5fa0((double)param_3,0.3535533905932738,1.0,1.4142135623730951);
  dVar1 = (double)fVar18;
  DAT_63789748 = param_3;
  DAT_63791560 = FUN_636f6000((double)param_3);
  fVar18 = FUN_636f5fa0((double)param_1,0.5,1.0,1.4142135623730951);
  dVar2 = (double)fVar18;
  DAT_63789744 = param_1;
  DAT_63793cb4 = FUN_636f6000((double)param_1);
  fVar18 = FUN_636f5fa0((double)param_2,0.5,1.0,2.0);
  DAT_6378974c = param_2;
  dVar6 = (_DAT_63765340 - (double)fVar18) * _DAT_63765348;
  DAT_63793cb8 = FUN_636f6000((double)param_2);
  iVar12 = 0;
  puVar14 = &DAT_63792da0;
  piVar13 = &DAT_637929a0;
  do {
    dVar7 = (double)(iVar12 + -0x10) * (double)fVar18 + dVar6;
    dVar3 = _DAT_63765350;
    if ((_DAT_63765350 <= dVar7) && (dVar3 = dVar7, _DAT_63765358 < dVar7)) {
      dVar3 = _DAT_63765358;
    }
    (&DAT_63791580)[iVar12] = (int)ROUND(dVar3 * dVar2 * _DAT_63765360);
    dVar3 = (double)(iVar12 + -0x80);
    dVar8 = (double)(iVar12 + -0x80) * (double)fVar16 * dVar2 * dVar1;
    (&DAT_63792180)[iVar12] = (int)ROUND(dVar8 * _DAT_63765368);
    dVar9 = dVar3 * dVar2 * dVar1;
    *piVar13 = (int)ROUND(dVar9 * _DAT_63765370);
    dVar10 = dVar3 * (double)(fVar17 * fVar15) * dVar2 * dVar1;
    (&DAT_63790d60)[iVar12] = (int)ROUND(dVar10 * _DAT_63765378);
    dVar3 = dVar3 * (double)(fVar17 * fVar5) * dVar2 * dVar1;
    dVar9 = dVar9 * _DAT_63765380;
    (&DAT_63791980)[iVar12] = (int)ROUND(dVar3 * _DAT_63765368);
    dVar11 = dVar8 * _DAT_63765378;
    (&DAT_63791d80)[iVar12] = (int)ROUND(dVar9);
    (&DAT_63790960)[iVar12] = (int)ROUND(dVar11);
    (&DAT_637940e0)[iVar12] = (uint)(byte)(&DAT_637903f0)[(int)ROUND(dVar7 * dVar2)];
    (&DAT_63794500)[iVar12] = (int)ROUND(dVar8) + 0x80;
    *puVar14 = (int)ROUND(dVar8) + 0x80;
    (&DAT_63793cc0)[iVar12] = (int)ROUND(dVar3);
    (&DAT_637931a0)[iVar12] = (int)ROUND(dVar10);
    if (DAT_637944e0 == 0) {
      uVar4 = *puVar14;
      (&DAT_63794500)[iVar12] = (uint)(byte)(&DAT_637903e0)[(&DAT_63794500)[iVar12]];
      *puVar14 = (uint)(byte)(&DAT_637903e0)[uVar4];
    }
    piVar13 = piVar13 + 1;
    iVar12 = iVar12 + 1;
    puVar14 = puVar14 + 1;
  } while ((int)piVar13 < 0x63792da0);
  return;
}


