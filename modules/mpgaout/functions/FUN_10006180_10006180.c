/* Module: mpgaout.dll
   Function: FUN_10006180
   Address: 10006180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10006180(int param_1,int param_2,int param_3)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  
  dVar5 = _DAT_10006178;
  iVar7 = 0;
  if (0 < param_3) {
    do {
      iVar3 = iVar7 * 8;
      iVar7 = iVar7 + 1;
      iVar9 = 0;
      do {
        iVar1 = iVar9 + 1;
        iVar8 = 2;
        pdVar10 = (double *)(iVar9 * 0x100 + param_2 + iVar3);
        pdVar6 = (double *)(iVar9 * 0x100 + param_1 + iVar3);
        do {
          dVar4 = *pdVar6;
          pdVar2 = pdVar6 + 0x480;
          pdVar6 = pdVar6 + 0x180;
          *pdVar10 = (dVar4 + *pdVar2) * dVar5;
          pdVar10 = pdVar10 + 0x180;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
        iVar9 = iVar1;
      } while (iVar1 < 0xc);
    } while (iVar7 < param_3);
  }
  return;
}


