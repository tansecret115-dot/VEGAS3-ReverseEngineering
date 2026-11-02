/* Module: vegas30.exe
   Function: FUN_00605e70
   Address: 00605e70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00605e70(void)

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
    *(int *)(iVar2 * 4 + 0x65eb78) = iVar1;
    iVar2 = (iVar2 * 2) % 0xb3;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x59);
  if (iVar2 == 1) {
    iVar2 = 0xb2;
    iVar1 = 0;
    do {
      *(int *)(iVar2 * 4 + 0x65eb78) = iVar1;
      iVar2 = (iVar2 * 2) % 0xb3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x59);
  }
  else {
    iVar1 = 0x59;
    do {
      *(int *)(iVar2 * 4 + 0x65eb78) = iVar1;
      iVar2 = (iVar2 * 2) % 0xb3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xb2);
  }
  DAT_0065ef4c = 1;
  _DAT_0065f218 = 0xffffffff;
  iVar1 = 1;
  piVar3 = &DAT_0065ef50;
  do {
    iVar1 = (iVar1 * 2) % 0xb3;
    local_10[1] = (&DAT_0065ee40)[-iVar1];
    local_10[0] = (&DAT_0065ee48)[-iVar1];
    local_10[3] = (&DAT_0065eb7c)[iVar1];
    local_10[2] = *(undefined4 *)(&DAT_0065eb74 + iVar1 * 4);
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
  } while ((int)piVar3 < 0x65f0b0);
  _DAT_0065ef48 = FUN_00605d70(0x58);
  return;
}


