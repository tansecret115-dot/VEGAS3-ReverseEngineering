/* Module: vidcap30.exe
   Function: FUN_005814f0
   Address: 005814f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005814f0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0xa8);
  if ((*(int *)(piVar1[0x23] + 0x9c) != *(int *)(piVar1[0x24] + 0x98)) &&
     (*(int *)(*(int *)(param_1 + 0x28) + 0x14) != 0)) {
    iVar2 = FUN_0057adf0(param_1 + 0x34);
    return (-(uint)(iVar2 != 0) & 0x7ffbfdd6) + 0x8004022a;
  }
  iVar2 = (**(code **)(*piVar1 + 0x28))(param_2);
  if (iVar2 == 0) {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0xa8) + 0x8c) + 0x18);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,param_2);
      return iVar2;
    }
    iVar2 = 0;
  }
  return iVar2;
}


