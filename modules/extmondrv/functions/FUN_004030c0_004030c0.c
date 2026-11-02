/* Module: extmondrv.dll
   Function: FUN_004030c0
   Address: 004030c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004030c0(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  iVar2 = 4;
  bVar5 = true;
  uVar1 = 1;
  piVar3 = &DAT_004576fc;
  piVar4 = param_2;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar2 = 4;
    bVar5 = true;
    piVar3 = &DAT_0045734c;
    piVar4 = param_2 + 4;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      iVar2 = 4;
      bVar5 = true;
      piVar3 = &DAT_00456cac;
      piVar4 = param_2 + 0xb;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if ((bVar5) && (param_2[0x10] == 0x20)) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}


