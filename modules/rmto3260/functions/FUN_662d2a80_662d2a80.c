/* Module: rmto3260.dll
   Function: FUN_662d2a80
   Address: 662d2a80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d2a80(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar2 = -0x7ffbfff9;
  }
  if (-1 < iVar2) {
    if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    *(undefined4 *)(param_1 + 0x6e) = 0;
    piVar1 = FUN_662e2f80(*(char **)(param_1 + 0x18));
    *(int **)(param_1 + 0x2c) = piVar1;
    if (piVar1 == (int *)0x0) {
      iVar2 = -0x7ffbff7f;
    }
  }
  *(uint *)(param_1 + 0x6e) = (uint)(iVar2 == 0);
  return iVar2;
}


