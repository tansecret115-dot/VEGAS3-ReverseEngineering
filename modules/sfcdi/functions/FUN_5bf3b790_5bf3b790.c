/* Module: sfcdi.dll
   Function: FUN_5bf3b790
   Address: 5bf3b790
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3b790(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *param_1;
  }
  iVar1 = 0;
  if (iVar3 != 0) {
    puVar2 = (undefined4 *)param_1[2];
    do {
      if (*(int *)*puVar2 == 3) {
        iVar1 = iVar1 + 1;
      }
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}


