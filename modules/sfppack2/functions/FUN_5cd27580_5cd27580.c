/* Module: sfppack2.dll
   Function: FUN_5cd27580
   Address: 5cd27580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cd27580(int *param_1,double param_2)

{
  double dVar1;
  ushort uVar2;
  double *pdVar3;
  uint uVar4;
  double dVar5;
  HGLOBAL hMem;
  LPVOID pvVar6;
  undefined4 uVar7;
  double *pdVar8;
  undefined4 *puVar9;
  int iVar10;
  float10 fVar11;
  float10 extraout_ST0;
  
  uVar2 = *(ushort *)(param_1 + 3);
  iVar10 = param_1[2];
  _CIpow();
  if (((iVar10 == 0) || (0xc < uVar2)) || (uVar2 == 0)) {
    return 0x11;
  }
  hMem = GlobalAlloc(0x42,iVar10 * 4);
  pvVar6 = GlobalLock(hMem);
  *param_1 = (int)pvVar6;
  if (pvVar6 == (LPVOID)0x0) {
    return 8;
  }
  pdVar3 = (double *)param_1[1];
  pdVar8 = pdVar3;
  dVar5 = _DAT_5cd51520;
  do {
    dVar1 = *pdVar8;
    pdVar8 = pdVar8 + 1;
    if (dVar5 < ABS(dVar1)) {
      dVar5 = ABS(dVar1);
    }
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if (dVar5 * param_2 <= _DAT_5cd51520) {
    return 0xc;
  }
  uVar4 = DAT_5cd633c0;
  if (DAT_5cd67da0 == '\x01') {
    while (-1 < (int)uVar4) {
      fVar11 = (float10)fcos(((float10)(int)uVar4 * (float10)_DAT_5cd51720) / (float10)DAT_5cd633c0)
      ;
      *pdVar3 = (double)(((float10)_DAT_5cd51710 - fVar11 * (float10)_DAT_5cd51718) *
                        (float10)*pdVar3);
      pdVar3 = pdVar3 + 1;
      uVar4 = uVar4 - 1;
    }
  }
  puVar9 = (undefined4 *)*param_1;
  pdVar3 = (double *)param_1[1];
  for (iVar10 = param_1[2]; iVar10 != 0; iVar10 = iVar10 + -1) {
    uVar7 = ftol();
    *puVar9 = uVar7;
    puVar9 = puVar9 + 1;
    *pdVar3 = (double)(extraout_ST0 * (float10)*pdVar3);
    pdVar3 = pdVar3 + 1;
  }
  return 0;
}


