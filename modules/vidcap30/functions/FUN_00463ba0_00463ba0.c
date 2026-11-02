/* Module: vidcap30.exe
   Function: FUN_00463ba0
   Address: 00463ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00463ba0(uint *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    puVar2 = (undefined4 *)param_1[2];
    do {
      if (*(int *)*puVar2 == param_2) {
        return (int *)*puVar2;
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 < *param_1);
  }
  return (int *)0x0;
}


