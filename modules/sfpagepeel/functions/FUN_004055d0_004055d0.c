/* Module: sfpagepeel.dll
   Function: FUN_004055d0
   Address: 004055d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_004055d0(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *param_1 = (int)param_2;
  return param_2;
}


