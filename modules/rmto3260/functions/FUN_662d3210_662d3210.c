/* Module: rmto3260.dll
   Function: FUN_662d3210
   Address: 662d3210
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d3210(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_1[5] == 0) || (param_1[6] == 0)) {
    iVar2 = -0x7ffbfff9;
  }
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*param_1 + 0x3c))(param_1);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*param_1 + 0x40))(param_1);
      if (-1 < iVar2) {
        if (param_1[7] != 0) {
          iVar2 = (**(code **)(*param_1 + 0x44))(param_1);
        }
        if (-1 < iVar2) {
          if (param_1[8] != 0) {
            iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
          }
          if (-1 < iVar2) {
            iVar2 = (**(code **)(*param_1 + 0x58))(param_1);
          }
        }
      }
    }
  }
  piVar1 = (int *)param_1[0xe];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xe] = 0;
  }
  FUN_662d3090((int)param_1);
  return iVar2;
}


