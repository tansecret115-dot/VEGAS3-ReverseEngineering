/* Module: rmto3260.dll
   Function: FUN_662d2ae0
   Address: 662d2ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d2ae0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = -0x7ffbfff9;
  }
  if (-1 < iVar2) {
    if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    piVar1 = FUN_662e2f20(*(char **)(param_1 + 0x14));
    *(int **)(param_1 + 0x28) = piVar1;
    if (piVar1 == (int *)0x0) {
      iVar2 = -0x7ffbff7f;
    }
  }
  return iVar2;
}


