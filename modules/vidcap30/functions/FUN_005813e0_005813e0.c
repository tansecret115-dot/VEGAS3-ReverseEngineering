/* Module: vidcap30.exe
   Function: FUN_005813e0
   Address: 005813e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005813e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0xe0) + 0x28))(param_2);
  if (iVar2 == 0) {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0xe0) + 0x90) + 0x18);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,param_2);
      return iVar2;
    }
    iVar2 = 0;
  }
  return iVar2;
}


