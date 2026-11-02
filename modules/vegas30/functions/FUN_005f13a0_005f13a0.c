/* Module: vegas30.exe
   Function: FUN_005f13a0
   Address: 005f13a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005f13a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (*(int **)(param_1 + 0x130) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x130);
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        if (iVar4 < 0) {
          return;
        }
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x130) + 8) + iVar5 * 4);
        if ((*(int *)(iVar2 + 4) == 2) && (piVar3 = *(int **)(iVar2 + 0x60), piVar3 != (int *)0x0))
        {
          iVar4 = (**(code **)(*piVar3 + 0x44))(piVar3);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
  }
  return;
}


