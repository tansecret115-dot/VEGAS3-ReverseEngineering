/* Module: rmme3260.dll
   Function: FUN_662430a0
   Address: 662430a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662430a0(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004005;
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  param_1[3] = (int)param_2;
  (**(code **)(*param_2 + 4))(param_2);
  (**(code **)(*param_1 + 4))(param_1);
  (**(code **)(*(int *)param_1[3] + 0xc))((int *)param_1[3],0);
  (**(code **)(*param_1 + 8))(param_1);
  return 0;
}


