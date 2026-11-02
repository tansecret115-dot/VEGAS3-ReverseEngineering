/* Module: rnco3260.dll
   Function: FUN_636f6020
   Address: 636f6020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_636f6020(void)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = 0;
  piVar4 = &DAT_63794900;
  do {
    dVar1 = (double)iVar3 * _DAT_637653a0;
    (&DAT_63794d00)[iVar3] = (int)ROUND((double)iVar3 * _DAT_63765398);
    dVar2 = (double)iVar3 * _DAT_637653a8;
    (&DAT_63791160)[iVar3] = (int)ROUND(dVar1);
    iVar3 = iVar3 + 1;
    *piVar4 = (int)ROUND(dVar2);
    piVar4 = piVar4 + 1;
  } while (piVar4 < (int *)0x63794cfd);
  iVar3 = 0;
  piVar4 = &DAT_63792580;
  do {
    iVar5 = (int)ROUND((double)iVar3 * _DAT_637653b0);
    if (0xdb < iVar5) {
      iVar5 = 0xdb;
    }
    *piVar4 = iVar5 + 0x10;
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + 1;
  } while (piVar4 < (int *)0x63792989);
  iVar3 = -0xb3;
  piVar4 = &DAT_63795100;
  do {
    iVar5 = (int)ROUND((double)iVar3 * _DAT_637653b8);
    if (iVar5 < -0x70) {
      iVar5 = -0x70;
    }
    if (0x70 < iVar5) {
      iVar5 = 0x70;
    }
    *piVar4 = iVar5 + 0x80;
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)piVar4 < 0x63795699);
  iVar3 = -0xe2;
  piVar4 = &DAT_637935a0;
  do {
    iVar5 = (int)ROUND((double)iVar3 * _DAT_637653c0);
    if (iVar5 < -0x70) {
      iVar5 = -0x70;
    }
    if (0x70 < iVar5) {
      iVar5 = 0x70;
    }
    *piVar4 = iVar5 + 0x80;
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)piVar4 < 0x63793cb1);
  return;
}


