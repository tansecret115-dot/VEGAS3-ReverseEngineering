/* Module: rmto3260.dll
   Function: FUN_662dc9c0
   Address: 662dc9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662dc9c0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_2;
  if (param_2 == (int *)0x0) {
    return -0x7fffbffd;
  }
  if (((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x2c) != 0)) &&
     (*(int *)(param_1 + 0x28) == 0)) {
    param_2 = (int *)0x0;
    iVar2 = RMACreateRMFF2Reader(&param_2);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*param_2 + 0x10))(param_2,piVar1);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x44))(*(int **)(param_1 + 0x2c),piVar1);
      }
    }
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
    if (-1 < iVar2) {
      *(undefined4 *)(param_1 + 0x18) = 1;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    }
    return iVar2;
  }
  return -0x7fffbffb;
}


