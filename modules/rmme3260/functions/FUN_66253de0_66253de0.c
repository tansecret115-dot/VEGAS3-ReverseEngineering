/* Module: rmme3260.dll
   Function: FUN_66253de0
   Address: 66253de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66253de0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    return 0x80040009;
  }
  piVar2 = *(int **)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = param_2;
  piVar3 = *(int **)(*(int *)(param_1 + 0xc) + 4);
  (**(code **)(*piVar3 + 4))(piVar3);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return 0;
}


