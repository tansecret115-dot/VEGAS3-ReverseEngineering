/* Module: rmme3260.dll
   Function: FUN_66256b60
   Address: 66256b60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66256b60(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x1c);
  iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if ((uint)(iVar3 - *(int *)(param_1 + 0x18)) < uVar2) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x18))(*(int **)(param_1 + 0x14));
    return iVar3 - *(int *)(param_1 + 0x18);
  }
  return uVar2;
}


