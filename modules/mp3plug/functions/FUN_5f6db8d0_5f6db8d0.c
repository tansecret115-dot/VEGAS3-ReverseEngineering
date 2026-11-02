/* Module: mp3plug.dll
   Function: FUN_5f6db8d0
   Address: 5f6db8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6db8d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar4 = 0;
  if (0 < iVar2) {
    iVar1 = *(int *)(param_1 + 4);
    do {
      iVar3 = 0;
      if (0 < iVar1) {
        iVar2 = 0;
        do {
          FUN_5f6e8300(*(int *)(param_1 + 0x24 + iVar2 + iVar4 * 8));
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 4;
          iVar1 = *(int *)(param_1 + 4);
        } while (iVar3 < iVar1);
        iVar2 = *(int *)(param_1 + 8);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_5f6d97a0(param_1);
  return 1;
}


