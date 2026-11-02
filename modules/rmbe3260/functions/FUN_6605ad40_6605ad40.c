/* Module: rmbe3260.dll
   Function: FUN_6605ad40
   Address: 6605ad40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605ad40(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = param_2;
  *param_2 = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    param_2 = *(int **)(param_1 + 0x48);
    while (param_2 != (int *)0x0) {
      puVar2 = (undefined4 *)FUN_6605c5e0((int *)&param_2);
      *piVar1 = *piVar1 + *(int *)*puVar2;
    }
  }
  return 0;
}


