/* Module: rmto3260.dll
   Function: FUN_662cca70
   Address: 662cca70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662cca70(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = -0x7ffbfff9;
  }
  if ((-1 < iVar2) && (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x24))(1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  piVar1 = FUN_662e2f20(*(char **)(param_1 + 0x14));
  *(int **)(param_1 + 0x24) = piVar1;
  if (piVar1 == (int *)0x0) {
    iVar2 = -0x7ffbff7f;
  }
  return iVar2;
}


