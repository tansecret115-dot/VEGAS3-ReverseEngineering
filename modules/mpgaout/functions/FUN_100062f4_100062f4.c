/* Module: mpgaout.dll
   Function: FUN_100062f4
   Address: 100062f4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100062f4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_4 + 0x10);
  iVar5 = 0;
  do {
    iVar1 = iVar5 + 1;
    if (0 < iVar2) {
      puVar4 = (uint *)(param_2 + iVar5 * 4);
      piVar3 = (int *)(param_3 + iVar5 * 4);
      iVar5 = iVar2;
      do {
        if (*piVar3 != 0) {
          FUN_1000ad4c(*(int **)(param_1 + 0x44e00),*puVar4,6);
        }
        puVar4 = puVar4 + 0x60;
        piVar3 = piVar3 + 0x20;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = iVar1;
  } while (iVar1 < 0x20);
  return;
}


