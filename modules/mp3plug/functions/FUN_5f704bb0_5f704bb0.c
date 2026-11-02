/* Module: mp3plug.dll
   Function: FUN_5f704bb0
   Address: 5f704bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f704bb0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < param_1) {
    do {
      for (iVar1 = *(int *)(param_3 + iVar2 * 4); iVar1 < *(int *)(param_2 + iVar3 * 4) * 3;
          iVar1 = *(int *)(param_3 + 4 + iVar1)) {
        iVar1 = iVar2 * 4;
        iVar2 = iVar2 + 1;
      }
      *(int *)(param_4 + iVar3 * 4) = iVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1);
  }
  return;
}


