/* Module: mpgvout.001
   Function: FUN_10019850
   Address: 10019850
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10019850(void)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  dVar3 = _DAT_10019848;
  iVar5 = 0;
  do {
    iVar7 = 0;
    iVar6 = iVar5 + 1;
    dVar2 = (double)(&DAT_100198b8)[iVar5];
    pdVar4 = (double *)(&DAT_10035534 + iVar5 * 8);
    do {
      pdVar1 = (double *)(&DAT_100198b8 + iVar7);
      iVar7 = iVar7 + 1;
      *pdVar4 = 1.0 / (dVar2 * *pdVar1 * dVar3);
      pdVar4 = pdVar4 + 1;
    } while (iVar7 < 8);
    iVar5 = iVar6;
  } while (iVar6 < 8);
  return;
}


