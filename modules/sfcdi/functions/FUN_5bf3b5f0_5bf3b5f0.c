/* Module: sfcdi.dll
   Function: FUN_5bf3b5f0
   Address: 5bf3b5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_5bf3b5f0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_1;
  }
  uVar2 = iVar1 - 1;
  if (-1 < (int)uVar2) {
    puVar3 = (undefined4 *)(param_1[2] + uVar2 * 4);
    do {
      if (*(int *)*puVar3 == 3) {
        return (int *)*puVar3;
      }
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + -1;
    } while (uVar2 < 0x80000000);
  }
  return (int *)0x0;
}


