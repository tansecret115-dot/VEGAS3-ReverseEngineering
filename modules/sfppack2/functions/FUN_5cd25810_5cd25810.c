/* Module: sfppack2.dll
   Function: FUN_5cd25810
   Address: 5cd25810
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cd25810(int param_1,int param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  
  dVar7 = param_3 + _DAT_5cd51510;
  if (param_2 != 0) {
    uVar11 = param_2 + 7U >> 3;
    pdVar10 = (double *)(param_1 + 0x20);
    do {
      dVar9 = pdVar10[-2] + pdVar10[-4];
      dVar1 = pdVar10[-1] + pdVar10[-3];
      uVar11 = uVar11 - 1;
      dVar8 = pdVar10[-4] - pdVar10[-2];
      dVar2 = pdVar10[-3] - pdVar10[-1];
      dVar3 = pdVar10[2] + *pdVar10;
      dVar4 = pdVar10[3] + pdVar10[1];
      pdVar10[-4] = dVar3 + dVar9;
      pdVar10[-3] = dVar4 + dVar1;
      dVar5 = *pdVar10 - pdVar10[2];
      dVar6 = pdVar10[1] - pdVar10[3];
      *pdVar10 = dVar9 - dVar3;
      pdVar10[1] = dVar1 - dVar4;
      dVar3 = dVar5 * dVar7 - dVar6 * param_4;
      dVar1 = dVar5 * param_4 + dVar6 * dVar7;
      pdVar10[2] = dVar8 - dVar3;
      pdVar10[3] = dVar2 - dVar1;
      pdVar10[-2] = dVar8 + dVar3;
      pdVar10[-1] = dVar2 + dVar1;
      pdVar10 = pdVar10 + 8;
    } while (uVar11 != 0);
  }
  return;
}


