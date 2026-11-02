/* Module: sftrans1.dll
   Function: FUN_00486990
   Address: 00486990
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00486990(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if ((-1 < param_2) && (piVar3 = (int *)(param_1 + 0xac), param_2 < **(int **)(param_1 + 0xac) + 3)
     ) {
    if (param_2 < 3) {
      piVar3 = (int *)(param_1 + 0xa8);
    }
    iVar2 = 0;
    iVar1 = *(int *)*piVar3;
    if (0 < iVar1) {
      puVar4 = (undefined4 *)((int *)*piVar3)[2];
      do {
        if (*(int *)*puVar4 == param_2) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return -1;
}


