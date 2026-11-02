/* Module: mp3plug.dll
   Function: FUN_5f6e6dd0
   Address: 5f6e6dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e6dd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x208) != *(int *)(param_1 + 0x20c)) {
    do {
      iVar1 = FUN_5f6e6500(*(int *)(param_1 + 0x200));
      iVar2 = FUN_5f6e6500(*(int *)(param_1 + 0x204));
      iVar3 = *(int *)(param_1 + 0x208);
      iVar4 = *(int *)(param_1 + iVar3 * 8);
      if (iVar4 <= iVar1) {
        iVar1 = iVar4;
      }
      if (0 < iVar1) {
        FUN_5f6e6090(param_2,*(int **)(param_1 + 0x200),iVar1);
        *(int *)(param_1 + *(int *)(param_1 + 0x208) * 8) =
             *(int *)(param_1 + *(int *)(param_1 + 0x208) * 8) - iVar1;
        iVar3 = *(int *)(param_1 + 0x208);
      }
      iVar4 = *(int *)(param_1 + 4 + iVar3 * 8);
      if (iVar2 < iVar4) {
        iVar4 = iVar2;
      }
      if (0 < iVar4) {
        FUN_5f6e6090(param_2,*(int **)(param_1 + 0x204),iVar4);
        *(int *)(param_1 + 4 + *(int *)(param_1 + 0x208) * 8) =
             *(int *)(param_1 + 4 + *(int *)(param_1 + 0x208) * 8) - iVar4;
        iVar3 = *(int *)(param_1 + 0x208);
      }
    } while (((*(int *)(param_1 + iVar3 * 8) == 0) && (*(int *)(param_1 + 4 + iVar3 * 8) == 0)) &&
            (iVar4 = (iVar3 + 1) - (((uint)(iVar3 + 1 >> 5) >> 0x1a) + 1 + iVar3 & 0xffffffc0),
            *(int *)(param_1 + 0x208) = iVar4, iVar4 != *(int *)(param_1 + 0x20c)));
  }
  FUN_5f6e6500(param_2);
  return;
}


