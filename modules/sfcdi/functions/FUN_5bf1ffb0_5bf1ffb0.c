/* Module: sfcdi.dll
   Function: FUN_5bf1ffb0
   Address: 5bf1ffb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5bf1ffb0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[3];
  *param_1 = &PTR_LAB_5bf564d8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((int *)param_1[2] != (int *)0x0) {
    FUN_5bf3f920(*(int *)param_1[2]);
    FUN_5bf3ceb0((int *)param_1[2]);
    FUN_5bf3e060((int *)param_1[2]);
    param_1[2] = 0;
  }
  return;
}


