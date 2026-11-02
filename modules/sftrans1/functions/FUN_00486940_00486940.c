/* Module: sftrans1.dll
   Function: FUN_00486940
   Address: 00486940
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_00486940(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((-1 < param_2) && (piVar2 = (int *)(param_1 + 0xac), param_2 < **(int **)(param_1 + 0xac) + 3)
     ) {
    if (param_2 < 3) {
      piVar2 = (int *)(param_1 + 0xa8);
    }
    iVar3 = 0;
    iVar1 = *(int *)*piVar2;
    if (0 < iVar1) {
      puVar4 = (undefined4 *)((int *)*piVar2)[2];
      do {
        if (*(int *)*puVar4 == param_2) {
          return (int *)*puVar4;
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return (int *)0x0;
}


