/* Module: vegas30k.dll
   Function: FUN_011ba840
   Address: 011ba840
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_011ba840(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      return (int *)0x0;
    }
    piVar2 = *(int **)(*(int *)(param_1 + 0x10) + 0x118);
  }
  else {
    piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 0x120);
  }
  if (piVar2 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar2;
  }
  iVar1 = 0;
  if (0 < iVar4) {
    puVar3 = (undefined4 *)piVar2[2];
    do {
      if (*(int *)*puVar3 == param_2) {
        return (int *)*puVar3;
      }
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar1 < iVar4);
  }
  return (int *)0x0;
}


