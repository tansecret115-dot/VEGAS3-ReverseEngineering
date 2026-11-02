/* Module: vidcap30.exe
   Function: FUN_00583a10
   Address: 00583a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00583a10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x50);
  if (0 < iVar2) {
    piVar4 = *(int **)(param_1 + 0x54);
    do {
      if (*piVar4 == param_2) {
        if (iVar2 == 1) {
          FUN_00404b20(*(int **)(param_1 + 0x54));
          *(undefined4 *)(param_1 + 0x54) = 0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
          return 0;
        }
        iVar3 = iVar3 + 1;
        if (iVar3 < iVar2) {
          do {
            iVar2 = iVar3 * 4;
            iVar1 = iVar3 * 4;
            iVar3 = iVar3 + 1;
            *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar1 + -4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar2);
          } while (iVar3 < *(int *)(param_1 + 0x50));
        }
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
        return 0;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar2);
  }
  return 1;
}


