/* Module: vidcap30.exe
   Function: FUN_00454cb0
   Address: 00454cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00454cb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = **(int **)(param_1 + 0x2c);
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x2c) + 8) + iVar3 * 4);
      if (param_2 == 0) {
        FUN_00431c30(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 8),puVar2 + 5,*puVar2
                     ,0xffffffff);
      }
      else {
        FUN_00431d30(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 8),*puVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}


