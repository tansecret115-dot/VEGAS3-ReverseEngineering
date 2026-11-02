/* Module: extmondrv.dll
   Function: FUN_0040ad30
   Address: 0040ad30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040ad30(LPBYTE param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  LPBYTE pBVar4;
  BYTE *pBVar5;
  BYTE *pBVar6;
  void *local_18;
  BYTE local_14 [20];
  
  local_18 = (void *)0x0;
  iVar1 = FUN_00410b00(&local_18,DAT_0045b008,0x45a0e8);
  if (-1 < iVar1) {
    pBVar4 = param_1;
    pBVar5 = local_14;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pBVar5 = *(undefined4 *)pBVar4;
      pBVar4 = pBVar4 + 4;
      pBVar5 = pBVar5 + 4;
    }
    uVar2 = FUN_004103a0((int)local_18,0,param_1,0x14);
    if (uVar2 < 0x14) {
      pBVar5 = local_14 + uVar2;
      pBVar6 = param_1 + uVar2;
      for (uVar3 = 0x14 - uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pBVar6 = *(undefined4 *)pBVar5;
        pBVar5 = pBVar5 + 4;
        pBVar6 = pBVar6 + 4;
      }
      for (uVar2 = 0x14 - uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pBVar6 = *pBVar5;
        pBVar5 = pBVar5 + 1;
        pBVar6 = pBVar6 + 1;
      }
    }
    FUN_00410ea0(local_18);
    return 1;
  }
  return 1;
}


