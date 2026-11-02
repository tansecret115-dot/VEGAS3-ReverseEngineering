/* Module: rmme3260.dll
   Function: FUN_66243100
   Address: 66243100
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66243100(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[6] = 0;
  }
  param_1[6] = (int)param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  param_1[9] = 1;
  FUN_66243140(param_1);
  return;
}


