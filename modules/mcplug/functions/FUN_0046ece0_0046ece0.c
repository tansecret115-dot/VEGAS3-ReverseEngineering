/* Module: mcplug.dll
   Function: FUN_0046ece0
   Address: 0046ece0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ece0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_10 [4];
  
  iVar2 = 1;
  iVar1 = 0;
  do {
    *(int *)(iVar2 * 4 + 0x4ad9c4) = iVar1;
    iVar2 = (iVar2 * 2) % 0xb3;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x59);
  if (iVar2 == 1) {
    iVar2 = 0xb2;
    iVar1 = 0;
    do {
      *(int *)(iVar2 * 4 + 0x4ad9c4) = iVar1;
      iVar2 = (iVar2 * 2) % 0xb3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x59);
  }
  else {
    iVar1 = 0x59;
    do {
      *(int *)(iVar2 * 4 + 0x4ad9c4) = iVar1;
      iVar2 = (iVar2 * 2) % 0xb3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xb2);
  }
  DAT_004add98 = 1;
  _DAT_004ae064 = 0xffffffff;
  iVar1 = 1;
  piVar3 = &DAT_004add9c;
  do {
    iVar1 = (iVar1 * 2) % 0xb3;
    local_10[1] = (&DAT_004adc8c)[-iVar1];
    local_10[0] = (&DAT_004adc94)[-iVar1];
    local_10[3] = (&DAT_004ad9c8)[iVar1];
    local_10[2] = *(undefined4 *)(&DAT_004ad9c0 + iVar1 * 4);
    iVar2 = 0;
    piVar4 = local_10;
    piVar5 = piVar3;
    do {
      if (*piVar4 < 0x59) {
        *piVar5 = *piVar4;
        iVar2 = iVar2 + 1;
        piVar5 = piVar5 + 0xb3;
      }
      piVar4 = piVar4 + 1;
    } while (iVar2 < 2);
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x4adefc);
  _DAT_004add94 = FUN_0046ebe0(0x58);
  return;
}


