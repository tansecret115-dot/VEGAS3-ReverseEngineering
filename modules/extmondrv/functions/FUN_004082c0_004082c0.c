/* Module: extmondrv.dll
   Function: FUN_004082c0
   Address: 004082c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004082c0(LPBYTE param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  BYTE *pBVar4;
  LPBYTE pBVar5;
  void *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = (void *)0x0;
  iVar1 = FUN_00410b00(&local_14,DAT_0045b008,0x45a028);
  if (iVar1 < 0) {
    return 1;
  }
  local_10 = *(undefined4 *)param_1;
  local_c = *(undefined4 *)(param_1 + 4);
  local_8 = *(undefined4 *)(param_1 + 8);
  local_4 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = FUN_004103a0((int)local_14,0,param_1,0x10);
  if (uVar2 < 0x10) {
    pBVar4 = (BYTE *)((int)&local_10 + uVar2);
    pBVar5 = param_1 + uVar2;
    for (uVar3 = 0x10 - uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pBVar5 = *(undefined4 *)pBVar4;
      pBVar4 = pBVar4 + 4;
      pBVar5 = pBVar5 + 4;
    }
    for (uVar2 = 0x10 - uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pBVar5 = *pBVar4;
      pBVar4 = pBVar4 + 1;
      pBVar5 = pBVar5 + 1;
    }
  }
  FUN_00410ea0(local_14);
  return 1;
}


