/* Module: vegas30.exe
   Function: FUN_00479640
   Address: 00479640
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00479640(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_10;
  int local_c;
  
  iVar1 = **(int **)(param_2 + 0x30);
  FUN_00478480(param_1,param_2,param_3,param_4,&local_10);
  iVar4 = 0;
  if (0 < iVar1) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x30) + 8);
    do {
      iVar5 = *(int *)(*(int *)(param_2 + 0x30) + 4) * iVar4;
      uVar3 = *(uint *)(iVar5 + iVar2);
      iVar5 = *(int *)(iVar5 + iVar2 + 4);
      if ((local_10 == uVar3) && (local_c == iVar5)) {
        return -1;
      }
    } while ((iVar5 <= local_c) &&
            (((iVar5 < local_c || (uVar3 <= local_10)) && (iVar4 = iVar4 + 1, iVar4 < iVar1))));
    if (0 < iVar4) {
      return iVar4;
    }
  }
  return -1;
}


