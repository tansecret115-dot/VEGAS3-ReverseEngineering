/* Module: vidpcore.dll
   Function: FUN_5ded35a0
   Address: 5ded35a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5ded35a0(int param_1,int param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  uint uVar10;
  
  param_3 = param_3 + _DAT_5df18830;
  if (param_2 != 0) {
    uVar10 = param_2 + 7U >> 3;
    pdVar9 = (double *)(param_1 + 0x20);
    do {
      dVar8 = pdVar9[-2] + pdVar9[-4];
      dVar1 = pdVar9[-1] + pdVar9[-3];
      uVar10 = uVar10 - 1;
      dVar7 = pdVar9[-4] - pdVar9[-2];
      dVar2 = pdVar9[-3] - pdVar9[-1];
      dVar3 = pdVar9[2] + *pdVar9;
      dVar4 = pdVar9[3] + pdVar9[1];
      pdVar9[-4] = dVar3 + dVar8;
      pdVar9[-3] = dVar4 + dVar1;
      dVar5 = *pdVar9 - pdVar9[2];
      dVar6 = pdVar9[1] - pdVar9[3];
      *pdVar9 = dVar8 - dVar3;
      pdVar9[1] = dVar1 - dVar4;
      dVar3 = dVar5 * param_3 - dVar6 * param_4;
      dVar1 = dVar5 * param_4 + dVar6 * param_3;
      pdVar9[2] = dVar7 - dVar3;
      pdVar9[3] = dVar2 - dVar1;
      pdVar9[-2] = dVar7 + dVar3;
      pdVar9[-1] = dVar2 + dVar1;
      pdVar9 = pdVar9 + 8;
    } while (uVar10 != 0);
  }
  return;
}


