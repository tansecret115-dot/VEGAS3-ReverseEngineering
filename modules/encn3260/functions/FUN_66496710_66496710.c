/* Module: encn3260.dll
   Function: FUN_66496710
   Address: 66496710
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66496710(int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1[1] + 0x10);
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    FUN_66495db0(param_1,(int *)((int)param_1 + 0x1a6));
    FUN_66495db0(param_1,(int *)((int)param_1 + 0x1c6));
  }
  return;
}


