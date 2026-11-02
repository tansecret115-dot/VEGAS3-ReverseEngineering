/* Module: vegas30k.dll
   Function: FUN_010144d0
   Address: 010144d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010144d0(int *param_1)

{
  cditemtag *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_84;
  undefined1 local_80 [128];
  
  iVar5 = 0;
  iVar4 = 1;
  if (param_1 == (int *)0x0) {
    local_84 = 0;
  }
  else {
    local_84 = *param_1;
  }
  if (local_84 < 1) {
    return 0;
  }
  do {
    pcVar1 = *(cditemtag **)(param_1[2] + iVar5 * 4);
    if (*(int *)pcVar1 == 3) {
      pcVar2 = SfPQList_GetItemText(pcVar1);
      iVar3 = FUN_01014490(pcVar1,pcVar2);
      *(int *)(pcVar1 + 4) = iVar4;
      if (iVar3 != 0) {
        FUN_010143e0(pcVar1,local_80);
        FUN_01014350(param_1,iVar5,pcVar1,local_80);
      }
      iVar4 = iVar4 + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < local_84);
  return 0;
}


