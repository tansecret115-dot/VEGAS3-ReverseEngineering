/* Module: erv13260.dll
   Function: FUN_635fe780
   Address: 635fe780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_635fe780(void)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  double *pdVar5;
  int local_8;
  
  iVar2 = -0x400;
  piVar4 = &DAT_63612828;
  do {
    iVar2 = iVar2 + 1;
    iVar3 = iVar2 >> 1;
    if (iVar3 < -0x100) {
      iVar3 = -0x100;
    }
    else if (0xff < iVar3) {
      iVar3 = 0xff;
    }
    *piVar4 = iVar3;
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0x63614828);
  local_8 = 0;
  do {
    pdVar5 = (double *)&DAT_63606818;
    piVar4 = &DAT_63606718;
    do {
      iVar2 = 8;
      do {
        dVar1 = *pdVar5;
        iVar3 = *piVar4;
        pdVar5 = pdVar5 + 1;
        piVar4 = piVar4 + 1;
        iVar2 = iVar2 + -1;
        *(int *)(&DAT_63614828 + (local_8 * 0x40 + iVar3) * 4) =
             (int)ROUND(((float)(local_8 << 0x14) / (float)dVar1) * (float)_DAT_63604398);
      } while (iVar2 != 0);
    } while ((int)piVar4 < 0x63606818);
    local_8 = local_8 + 1;
  } while (local_8 < 0x20);
  local_8 = 0x20;
  do {
    pdVar5 = (double *)&DAT_63606818;
    piVar4 = &DAT_63606718;
    do {
      iVar2 = 8;
      do {
        dVar1 = *pdVar5;
        iVar3 = *piVar4;
        pdVar5 = pdVar5 + 1;
        piVar4 = piVar4 + 1;
        iVar2 = iVar2 + -1;
        *(int *)(&DAT_63615828 + (iVar3 + (local_8 / 2) * 0x40) * 4) =
             (int)ROUND(((float)(local_8 << 0x14) / (float)dVar1) * (float)_DAT_63604398);
      } while (iVar2 != 0);
    } while ((int)piVar4 < 0x63606818);
    local_8 = local_8 + 2;
  } while (local_8 < 0x3f);
  return;
}


