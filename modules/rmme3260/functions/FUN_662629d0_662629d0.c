/* Module: rmme3260.dll
   Function: FUN_662629d0
   Address: 662629d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662629d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  if ((void *)*param_1 != (void *)0x0) {
    FUN_66263540((void *)*param_1);
    *param_1 = 0;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  FUN_66250210(param_1 + 7);
  FUN_66250210(param_1 + 4);
  return;
}


